/* Note: NSMethodSignature does not support unions or unknown structs on input.
// However, using NSMethodSignature to break ObjC types apart for parsing seemed to me very convenient.
// My implementation below encodes the unknown structs
// and unions as a special, impossible to conflict struct that is accepted on input.
// They are then decoded back in the output of getArgumentTypeAtIndex:
// This actually adds support for unions and undefined structs. */

#define CDD_EMPTY @""
#define CDD_PARENTHESIS_O @"("
#define CDD_PARENTHESIS_C @")"
#define CDD_BRACES_O @"{"
#define CDD_BRACES_C @"}"
#define CDD_BRACKETS_O @"["
#define CDD_BRACKETS_C @"]"
#define CDD_ANGLES_O @"<"
#define CDD_ANGLES_C @">"

@implementation NSMethodSignature (classdump_dyld_helper)

+ (id)cd_signatureWithObjCTypes:(const char *)types{
	__block NSString *text = [NSString stringWithCString:types encoding:NSUTF8StringEncoding];

 	while ([text rangeOfString:CDD_PARENTHESIS_O].location != NSNotFound) {
		NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\(([^\\(\\)]+)\\)" options:nil error:nil];

		// test if the anticipated union (embraced in parentheseis) is actually a function definition rather than a union
		NSRange range = [text rangeOfString:@"\\(([^\\(\\)]+)\\)" options:NSRegularExpressionSearch];
		NSString *rep = [text substringWithRange:range];
		NSString *testUnion = [rep stringByReplacingOccurrencesOfString:CDD_PARENTHESIS_O withString:CDD_BRACES_O]; //just to test if it internally passes as a masqueraded struct
		testUnion = [testUnion stringByReplacingOccurrencesOfString:CDD_PARENTHESIS_C withString:CDD_BRACES_C];
		if ([testUnion rangeOfString:@"="].location == NSNotFound) {
			// its a function!
			text = [text stringByReplacingOccurrencesOfString:CDD_PARENTHESIS_O withString:@"__FUNCTION_START__"];
			text = [text stringByReplacingOccurrencesOfString:CDD_PARENTHESIS_C withString:@"__FUNCTION_END__"];
			continue;
		}

		[regex enumerateMatchesInString:text options:0
								  range:NSMakeRange(0, [text length])
							 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop) {
			for (int i = 1; i< [result numberOfRanges]; i++) {
				NSString *textFound = [text substringWithRange:[result rangeAtIndex:i]];
				text = [text stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"(%@)", textFound] withString:[NSString stringWithFormat:@"{union={%@}ficificifloc}", textFound]]; //add an impossible match of types
				*stop = YES;
			}
		}];

	}

	if ([text rangeOfString:CDD_BRACES_O].location != NSNotFound) {
		BOOL found = 1;
		NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(?<!\\^)\\{([^\\{^\\}]+)\\}" options:nil error:nil];
		while (found) {
			NSRange range = [regex rangeOfFirstMatchInString:text options:0 range:NSMakeRange(0, [text length])];
			if (range.location != NSNotFound) {
				found = 1;
				NSString *result = [text substringWithRange:range];
				text = [text stringByReplacingOccurrencesOfString:result withString:[NSString stringWithFormat:@"^^^%@",result]];
			} else {
				found = 0;
			}
		}

		found = 1;
		regex = [NSRegularExpression regularExpressionWithPattern:@"(?<!\\^)\\{([^\\}]+)\\}" options:nil error:nil];
		while (found) {
			NSRange range = [regex rangeOfFirstMatchInString:text options:0 range:NSMakeRange(0, [text length])];
			if (range.location != NSNotFound) {
				found = 1;
				NSString *result = [text substringWithRange:range];
				text = [text stringByReplacingOccurrencesOfString:result withString:[NSString stringWithFormat:@"^^^%@",result]];
			} else {
				found = 0;
			}
		}
	}

	text = [text stringByReplacingOccurrencesOfString:@"__FUNCTION_START__" withString:CDD_PARENTHESIS_O];
	text = [text stringByReplacingOccurrencesOfString:@"__FUNCTION_END__" withString:CDD_PARENTHESIS_C];

	types = [text UTF8String];

	return [self signatureWithObjCTypes:types];
}

- (const char *)cd_getArgumentTypeAtIndex:(int)anIndex{
	const char *argument = [self getArgumentTypeAtIndex:anIndex];

	NSString *char_ns = [NSString stringWithCString:argument encoding:NSUTF8StringEncoding];
	__block NSString *text = char_ns;
	if ([text rangeOfString:@"^^^"].location != NSNotFound) {
		text = [text stringByReplacingOccurrencesOfString:@"^^^" withString:CDD_EMPTY];
	}

	while ([text rangeOfString:@"{union"].location != NSNotFound) {
        NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(\\{union.+?ficificifloc\\})" options:nil error:nil];
		[regex enumerateMatchesInString:text options:0
                                  range:NSMakeRange(0, [text length])
                             usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop) {
            for (int i = 1; i < [result numberOfRanges]; i++) {
            	NSString *textFound = [text substringWithRange:[result rangeAtIndex:i]];
            	NSString *textToPut = [textFound substringFromIndex:8];
            	textToPut = [textToPut substringToIndex:textToPut.length - 1 - (@"ficificifloc".length + 1)];
            	text = [text stringByReplacingOccurrencesOfString:textFound withString:[NSString stringWithFormat:@"(%@)",textToPut]];
        	    *stop = YES;
            }
        }];

	}

	char_ns = text;
	return [char_ns UTF8String];

}
@end

/****** String Parsing Functions ******/


/****** Properties Parser ******/

NSString * propertyLineGenerator(NSString *attributes,NSString *name) {
	NSCharacterSet *parSet = [NSCharacterSet characterSetWithCharactersInString:@"()"];
	attributes = [attributes stringByTrimmingCharactersInSet:parSet];
	NSMutableArray *attrArr = (NSMutableArray *)[attributes componentsSeparatedByString:@","];
	NSString *type = [attrArr objectAtIndex:0];

	type = [type stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:CDD_EMPTY];
	if ([type rangeOfString:@"@"].location == 0 && [type rangeOfString:@"\""].location != NSNotFound) { //E.G. @"NSTimer"
		type = [type stringByReplacingOccurrencesOfString:@"\"" withString:CDD_EMPTY];
		type = [type stringByReplacingOccurrencesOfString:@"@" withString:CDD_EMPTY];
		type = [type stringByAppendingString:@" *"];
		NSString *classFoundInProperties = [type stringByReplacingOccurrencesOfString:@" *" withString:CDD_EMPTY];
		if (![classesInClass containsObject:classFoundInProperties] && [classFoundInProperties rangeOfString:CDD_ANGLES_O].location == NSNotFound) {
			[classesInClass addObject:classFoundInProperties];
		}
		if ([type rangeOfString:CDD_ANGLES_O].location != NSNotFound) {
			type = [type stringByReplacingOccurrencesOfString:@"> *" withString:CDD_ANGLES_C];
			if ([type rangeOfString:CDD_ANGLES_O].location == 0) {
				type = [@"id" stringByAppendingString:type];
			}
			else{
				type = [type stringByReplacingOccurrencesOfString:CDD_ANGLES_O withString:@"*<"];
			}
		}
	}
	else if ([type rangeOfString:@"@"].location == 0 && [type rangeOfString:@"\""].location == NSNotFound) {
		type = @"id";
	}
	else{
		type = commonTypes(type,&name,NO);
	}
	if ([type rangeOfString:@"="].location != NSNotFound) {
		type = [type substringToIndex:[type rangeOfString:@"="].location];
		if ([type rangeOfString:@"_"].location == 0) {
			type = [type substringFromIndex:1];
		}
	}

	type = [type stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
	attrArr = [NSMutableArray arrayWithArray:attrArr];
	[attrArr removeObjectAtIndex:0];
	NSMutableArray *newPropsArray = [NSMutableArray array];
	NSString *synthesize = CDD_EMPTY;
	for (NSString *attr in attrArr) {
		NSString *vToClear = nil;
		if ([attr rangeOfString:@"V_"].location == 0) {
			vToClear = attr;
			attr = [attr stringByReplacingCharactersInRange:NSMakeRange(0,2) withString:CDD_EMPTY];
			synthesize = [NSString stringWithFormat:@"\t\t\t\t//@synthesize %@=_%@ - In the implementation block",attr,attr];
		}

		if ([attr length] == 1) {
            NSString *translatedProperty = attr;
            if ([attr isEqual:@"R"]) { translatedProperty = @"readonly"; }
            if ([attr isEqual:@"C"]) { translatedProperty = @"copy"; }
            if ([attr isEqual:@"&"]) { translatedProperty = @"retain"; }
            if ([attr isEqual:@"N"]) { translatedProperty = @"nonatomic";}
            //if ([attr isEqual:@"D"]) { translatedProperty = @"@dynamic"; }
            if ([attr isEqual:@"D"]) { continue; }
            if ([attr isEqual:@"W"]) { translatedProperty = @"__weak"; }
            if ([attr isEqual:@"P"]) { translatedProperty = @"t<encoding>";}

            [newPropsArray addObject:translatedProperty];
		}

		if ([attr rangeOfString:@"G"].location == 0) {
			attr = [attr stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:CDD_EMPTY];
			attr = [NSString stringWithFormat:@"getter=%@", attr];
			[newPropsArray addObject:attr];
		}

		if ([attr rangeOfString:@"S"].location == 0) {
			attr = [attr stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:CDD_EMPTY];
			attr = [NSString stringWithFormat:@"setter=%@", attr];
			[newPropsArray addObject:attr];
		}
	}

	if ([newPropsArray containsObject:@"nonatomic"] && ![newPropsArray containsObject:@"assign"] && ![newPropsArray containsObject:@"readonly"] && ![newPropsArray containsObject:@"copy"] && ![newPropsArray containsObject:@"retain"]) {
		[newPropsArray addObject:@"assign"];
	}

	newPropsArray = [newPropsArray reversedArray];

	NSString *rebuiltString = [newPropsArray componentsJoinedByString:@","];
	NSString *attrString = [newPropsArray count] > 0 ? [NSString stringWithFormat:@"(%@)", rebuiltString] : @"(assign)";

	return [[NSString alloc] initWithFormat:@"\n%@%@ %@ %@; %@",@"@property ", attrString, type, name, synthesize];

}




/****** Properties Combined Array (for fixing non-matching types)   ******/

static NSMutableArray * propertiesArrayFromString(NSString *propertiesString) {

	NSMutableArray *propertiesExploded = [[propertiesString componentsSeparatedByString:@"\n"] mutableCopy];
	NSMutableArray *typesAndNamesArray = [NSMutableArray array];

	for (NSString *string in propertiesExploded) {

		if (string.length < 1) {
			continue;
		}

		int startlocation = [string rangeOfString:CDD_PARENTHESIS_C].location;
		int endlocation = [string rangeOfString:@";"].location;
		if ([string rangeOfString:@";"].location == NSNotFound || [string rangeOfString:CDD_PARENTHESIS_C].location == NSNotFound) {
			continue;
		}

		NSString *propertyTypeFound = [string substringWithRange:NSMakeRange(startlocation+1,endlocation-startlocation-1)];
		int firstSpaceLocationBackwards = [propertyTypeFound rangeOfString:@" " options:NSBackwardsSearch].location;
		if ([propertyTypeFound rangeOfString:@" " options:NSBackwardsSearch].location == NSNotFound) {
			continue;
		}

		NSMutableDictionary *typesAndNames = [NSMutableDictionary dictionary];

		NSString *propertyNameFound = [propertyTypeFound substringFromIndex:firstSpaceLocationBackwards+1];
		propertyTypeFound = [propertyTypeFound substringToIndex:firstSpaceLocationBackwards];
		//propertyTypeFound = [propertyTypeFound stringByReplacingOccurrencesOfString:@" " withString:CDD_EMPTY];
		if ([propertyTypeFound rangeOfString:@" "].location == 0) {
			propertyTypeFound = [propertyTypeFound substringFromIndex:1];
		}
		propertyNameFound = [propertyNameFound stringByReplacingOccurrencesOfString:@" " withString:CDD_EMPTY];

		[typesAndNames setObject:propertyTypeFound forKey:@"type"];
		[typesAndNames setObject:propertyNameFound forKey:@"name"];
		[typesAndNamesArray addObject:typesAndNames];

	}
	[propertiesExploded release];
	return typesAndNamesArray;
}



/****** Protocol Parser ******/

NSString * buildProtocolFile(Protocol *currentProtocol) {

	NSMutableString * protocolsMethodsString = [[NSMutableString alloc] init];

	NSString *protocolName = [NSString stringWithCString:protocol_getName(currentProtocol) encoding:NSUTF8StringEncoding];
	[protocolsMethodsString appendString:[NSString stringWithFormat:@"\n@protocol %@",protocolName]];
	NSMutableArray *classesInProtocol = [[NSMutableArray alloc] init];

	unsigned int outCount = 0;
	Protocol ** protList = protocol_copyProtocolList(currentProtocol,&outCount);

	if (outCount > 0) {
		[protocolsMethodsString appendString:@" <"];
	}
	for (int p = 0; p < outCount; p++) {
		NSString *end= p == outCount-1 ? [CDD_EMPTY retain] : [@"," retain];
		[protocolsMethodsString appendString:[NSString stringWithFormat:@"%s%@",protocol_getName(protList[p]),end]];
		[end release];
	}
	if (outCount > 0) {
		[protocolsMethodsString appendString:CDD_ANGLES_C];
	}
	free(protList);

	NSMutableString *protPropertiesString = [[NSMutableString alloc] init];
	unsigned int protPropertiesCount;

	objc_property_t * protPropertyList = protocol_copyPropertyList(currentProtocol,&protPropertiesCount);

	for (int xi = 0; xi < protPropertiesCount; xi++) {

			const char *propname = property_getName(protPropertyList[xi]);
			const char *attrs = property_getAttributes(protPropertyList[xi]);


			NSCharacterSet *parSet = [NSCharacterSet characterSetWithCharactersInString:@"()"];
			NSString *attributes = [[NSString stringWithCString:attrs encoding:NSUTF8StringEncoding] stringByTrimmingCharactersInSet:parSet];
			NSMutableArray *attrArr = (NSMutableArray *)[attributes componentsSeparatedByString:@","];
			NSString *type = [attrArr objectAtIndex:0];

			type = [type stringByReplacingCharactersInRange:NSMakeRange(0,1) withString:CDD_EMPTY];
			if ([type rangeOfString:@"@"].location == 0 && [type rangeOfString:@"\""].location != NSNotFound) { //E.G. @"NSTimer"
				type = [type stringByReplacingOccurrencesOfString:@"\"" withString:CDD_EMPTY];
				type = [type stringByReplacingOccurrencesOfString:@"@" withString:CDD_EMPTY];
				type = [type stringByAppendingString:@" *"];
				NSString *classFoundInProperties = [type stringByReplacingOccurrencesOfString:@" *" withString:CDD_EMPTY];
				if (![classesInProtocol containsObject:classFoundInProperties] && [classFoundInProperties rangeOfString:CDD_ANGLES_O].location == NSNotFound) {
					[classesInProtocol addObject:classFoundInProperties];
				}
			}

			NSString *newString = propertyLineGenerator([NSString stringWithCString:attrs encoding:NSUTF8StringEncoding],[NSString stringWithCString:propname encoding:NSUTF8StringEncoding]);
			if ([protPropertiesString rangeOfString:newString].location == NSNotFound) {
				[protPropertiesString appendString:newString];
			}
			[newString release];


	}

	[protocolsMethodsString appendString:protPropertiesString];

	free(protPropertyList);

	for (int acase = 0; acase < 4; acase++) {

			unsigned int protocolMethodsCount = 0;
			BOOL isRequiredMethod = acase < 2 ? NO : YES;
			BOOL isInstanceMethod = (acase == 0 || acase == 2) ? NO : YES;

			objc_method_description *protMeths = protocol_copyMethodDescriptionList(currentProtocol, isRequiredMethod, isInstanceMethod, &protocolMethodsCount);
			for (unsigned gg = 0; gg < protocolMethodsCount; gg++) {
				if (acase < 2 && [protocolsMethodsString rangeOfString:@"@optional"].location == NSNotFound) {
					[protocolsMethodsString appendString:@"\n@optional\n"];
				}
				if (acase > 1 && [protocolsMethodsString rangeOfString:@"@required"].location == NSNotFound) {
					[protocolsMethodsString appendString:@"\n@required\n"];
				}
				NSString *startSign = isInstanceMethod == NO ? @"+" : @"-";
				objc_method_description selectorsAndTypes = protMeths[gg];
				SEL selector = selectorsAndTypes.name;
				char *types = selectorsAndTypes.types;
				NSString *protSelector = NSStringFromSelector(selector);
				NSString *finString = CDD_EMPTY;
				//CDLog(@"\t\t\t\tAbout to call cd_signatureWithObjCTypes of current protocol with types: %s",types);
				NSMethodSignature *signature = [NSMethodSignature cd_signatureWithObjCTypes:types];
				//CDLog(@"\t\t\t\tGot cd_signatureWithObjCTypes of current protocol");
				NSString *returnType = commonTypes([NSString stringWithCString:[signature methodReturnType] encoding:NSUTF8StringEncoding],nil,NO);

				NSArray *selectorsArray = [protSelector componentsSeparatedByString:@":"];
				if (selectorsArray.count > 1) {
					int argCount = 0;
					for (unsigned ad = 2; ad < [signature numberOfArguments]; ad++) {
						argCount++;
						NSString *space = (ad == [signature numberOfArguments] - 1) ? CDD_EMPTY : @" ";
						finString = [finString stringByAppendingString:[NSString stringWithFormat:@"%@:(%@)arg%d%@", [selectorsArray objectAtIndex:ad - 2], commonTypes([NSString stringWithCString:[signature cd_getArgumentTypeAtIndex:ad] encoding:NSUTF8StringEncoding], nil, NO), argCount, space]];
					}
				}
				else{
					finString = [finString stringByAppendingString:[selectorsArray objectAtIndex:0]];
				}
				finString = [finString stringByAppendingString:@";"];
				[protocolsMethodsString appendString:[NSString stringWithFormat:@"%@(%@)%@\n", startSign, returnType, finString]];
			}
			free(protMeths);

	}

	//FIX EQUAL TYPES OF PROPERTIES AND METHODS
	NSArray *propertiesArray = propertiesArrayFromString(protPropertiesString);
	[protPropertiesString release];
	NSArray *lines = [protocolsMethodsString componentsSeparatedByString:@"\n"];
	NSMutableString *finalString = [[NSMutableString alloc] init];
	for (NSString *line in lines) {

			if (line.length > 0 && ([line rangeOfString:@"-"].location == 0 || [line rangeOfString:@"+"].location == 0)) {
				NSString *methodInLine = [line substringFromIndex:[line rangeOfString:CDD_PARENTHESIS_C].location+1];
				methodInLine = [methodInLine substringToIndex:[methodInLine rangeOfString:@";"].location];
				for (NSDictionary *dict in propertiesArray) {
					NSString *propertyName = [dict objectForKey:@"name"];
					if ([methodInLine rangeOfString:@"set"].location != NSNotFound) {
						NSString *firstCapitalized = [[propertyName substringToIndex:1] capitalizedString];
						NSString *capitalizedFirst = [firstCapitalized stringByAppendingString:[propertyName substringFromIndex:1]];
						if ([methodInLine isEqual:[NSString stringWithFormat:@"set%@", capitalizedFirst]]) {
							// replace setter
							NSString *newLine = [line substringToIndex:[line rangeOfString:@":("].location + 2];
							newLine = [newLine stringByAppendingString:[dict objectForKey:@"type"]];
							newLine = [newLine stringByAppendingString:[line substringFromIndex:[line rangeOfString:CDD_PARENTHESIS_C options:4].location]];
							line = newLine;
						}
					}
					if ([methodInLine isEqual:propertyName]) {
						NSString *newLine = [line substringToIndex:[line rangeOfString:CDD_PARENTHESIS_O].location+1];
						newLine = [newLine stringByAppendingString:[NSString stringWithFormat:@"%@)%@;",[dict objectForKey:@"type"],[dict objectForKey:@"name"]]];
						line = newLine;
					}
				}

			}
			[finalString appendString:[line stringByAppendingString:@"\n"]];

	}


	if ([classesInProtocol count] > 0) {

		NSMutableString *classesFoundToAdd = [[NSMutableString alloc] init];
		[classesFoundToAdd appendString:@"@class "];
		for (int f = 0; f < classesInProtocol.count; f++) {
			NSString *classFound = [classesInProtocol objectAtIndex:f];
			if (f < classesInProtocol.count-1) {
				[classesFoundToAdd appendString:[NSString stringWithFormat:@"%@, ",classFound]];
			}
			else{
				[classesFoundToAdd appendString:[NSString stringWithFormat:@"%@;",classFound]];
			}
		}
		[classesFoundToAdd appendString:@"\n\n"];
		[classesFoundToAdd appendString:finalString];
		[finalString release];
		finalString = [classesFoundToAdd mutableCopy];
		[classesFoundToAdd release];
	}
	[classesInProtocol release];
	[protocolsMethodsString release];
	[finalString appendString:@"@end\n\n"];
	return finalString;

}


static BOOL hasMalformedID(NSString *parts) {

	if  ([parts rangeOfString:@"@\""].location != NSNotFound && [parts rangeOfString:@"@\""].location+2 < parts.length-1 &&  ([[parts substringFromIndex:[parts rangeOfString:@"@\""].location+2] rangeOfString:@"\""].location == [[parts substringFromIndex:[parts rangeOfString:@"@\""].location+2] rangeOfString:@"\"\""].location || [[parts substringFromIndex:[parts rangeOfString:@"@\""].location+2] rangeOfString:@"\""].location == [[parts substringFromIndex:[parts rangeOfString:@"@\""].location+2] rangeOfString:@"\"]"].location  || [[parts substringFromIndex:[parts rangeOfString:@"@\""].location+2] rangeOfString:@"\""].location == [parts substringFromIndex:[parts rangeOfString:@"@\""].location+2].length-1)) {
		return YES;
	}

	return NO;

}

/****** Structs Parser ******/


static NSString *representedStructFromStruct(NSString *inStruct,NSString *inName, BOOL inIvarList,BOOL isFinal) {


	if ([inStruct rangeOfString:@"\""].location == NSNotFound) { // not an ivar type struct, it has the names of types in quotes

		if ([inStruct rangeOfString:@"{?="].location == 0) {

			// UNKNOWN TYPE, WE WILL CONSTRUCT IT

			NSString *types = [inStruct substringFromIndex:3];
			types = [types substringToIndex:types.length-1];
			for (NSDictionary *dict in allStructsFound) {

				if ([[dict objectForKey:@"types"] isEqual:types]) {

					return [dict objectForKey:@"name"];
				}
			}

			__block NSMutableArray *strctArray = [NSMutableArray array];

			while ([types rangeOfString:CDD_BRACES_O].location != NSNotFound) {

				NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\{([^\\{^\\}]+)\\}" options:NSRegularExpressionCaseInsensitive error:nil];
				__block NSString *blParts;
				[regex enumerateMatchesInString:types options:0
							   range:NSMakeRange(0, [types length])
							 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
				{

					for (int i = 1; i< [result numberOfRanges]; i++) {
						NSString *stringToPut = representedStructFromStruct([NSString stringWithFormat:@"{%@}",[types substringWithRange:[result rangeAtIndex:i]]],nil,NO,0);
						blParts = [types stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"{%@}",[types substringWithRange:[result rangeAtIndex:i]]] withString:stringToPut];
						if ([blParts rangeOfString:CDD_BRACES_O].location == NSNotFound) {
							[strctArray addObject:stringToPut];
						}
						break;
					}

				}];

				types = blParts;
			}

			NSMutableArray *alreadyFoundStructs = [NSMutableArray array];
			for (NSDictionary *dict in allStructsFound) {

				if ([types rangeOfString:[dict objectForKey:@"name"]].location != NSNotFound || [types rangeOfString:@"CFDictionary"].location != NSNotFound ) {

					BOOL isCFDictionaryHackException = 0;
					NSString *str;

					if ([types rangeOfString:@"CFDictionary"].location != NSNotFound) {
						str = @"CFDictionary";
						isCFDictionaryHackException = 1;
					}
					else{
						str = [dict objectForKey:@"name"];
					}

					while ([types rangeOfString:str].location != NSNotFound) {
						if ([str isEqual:@"CFDictionary"]) {
							[alreadyFoundStructs addObject:@"void*"];
						}
						else{
							[alreadyFoundStructs addObject:str];
						}
						int replaceLocation = [types rangeOfString:str].location;
						int replaceLength = str.length;
						types = [types stringByReplacingCharactersInRange:NSMakeRange(replaceLocation,replaceLength) withString:@"+"];
					}

				}
			}


			__block NSMutableArray *arrArray = [NSMutableArray array];

			while ([types rangeOfString:CDD_BRACKETS_O].location != NSNotFound) {

				NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\[([^\\[^\\]]+)\\]" options:NSRegularExpressionCaseInsensitive error:nil];
				__block NSString *blParts2;

				[regex enumerateMatchesInString:types options:0
							   range:NSMakeRange(0, [types length])
							 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
				{

					for (int i = 1; i< [result numberOfRanges]; i++) {
						NSString *stringToPut = [NSString stringWithFormat:@"[%@]",[types substringWithRange:[result rangeAtIndex:i]]];
						NSRange range = [types rangeOfString:stringToPut];

						blParts2 = [types stringByReplacingCharactersInRange:NSMakeRange(range.location,range.length) withString:@"~"];

							[arrArray addObject:stringToPut];

						*stop = 1;
						break;

					}

				}];

				types = blParts2;
			}

			__block NSMutableArray *bitArray = [NSMutableArray array];

			while ([types rangeOfString:@"b1"].location != NSNotFound || [types rangeOfString:@"b2"].location != NSNotFound || [types rangeOfString:@"b3"].location != NSNotFound || [types rangeOfString:@"b4"].location != NSNotFound || [types rangeOfString:@"b5"].location != NSNotFound || [types rangeOfString:@"b6"].location != NSNotFound || [types rangeOfString:@"b7"].location != NSNotFound || [types rangeOfString:@"b8"].location != NSNotFound || [types rangeOfString:@"b9"].location != NSNotFound) {

			NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(b[0-9]+)" options:nil error:nil];
				__block NSString *blParts3;
				[regex enumerateMatchesInString:types options:0
							   range:NSMakeRange(0, [types length])
							 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
				{

					for (int i = 1; i< [result numberOfRanges]; i++) {
						NSString *stringToPut = [types substringWithRange:[result rangeAtIndex:i]];
						blParts3 = [types stringByReplacingOccurrencesOfString:[types substringWithRange:[result rangeAtIndex:i]] withString:@"§"];
						[bitArray addObject:stringToPut];
						break;
					}

				}];

				types = blParts3;
			}

			for (NSString *string in strctArray) {
				if ([types rangeOfString:string].location == NSNotFound) {
					break;
				}
				int loc = [types rangeOfString:string].location;
				int length = string.length;
				types = [types stringByReplacingCharactersInRange:NSMakeRange(loc,length) withString:@"!"];
			}


			int fieldCount = 0;

			for (int i = 0; i < types.length; i++) {

				NSString *string = [types substringWithRange:NSMakeRange(i,1)];
				if (![string isEqual:CDD_BRACKETS_O] && ![string isEqual:CDD_BRACKETS_C] && ![string isEqual:CDD_BRACES_O] && ![string isEqual:CDD_BRACES_C] && ![string isEqual:@"\""] && ![string isEqual:@"b"] && ![string isEqual:CDD_PARENTHESIS_O] && ![string isEqual:CDD_PARENTHESIS_C]  ) {
					fieldCount++;
					NSString *newString = [NSString stringWithFormat:@"\"field%d\"%@",fieldCount,commonTypes(string,nil,NO)];
					types = [types stringByReplacingCharactersInRange:NSMakeRange(i,1) withString:[NSString stringWithFormat:@"\"field%d\"%@",fieldCount,commonTypes(string,nil,NO)]];
					i+=newString.length-1;
				}

			}

			int fCounter = -1; // Separate counters used for debugging purposes

			while ([types rangeOfString:@"!"].location != NSNotFound) {
				fCounter++;
				int loc = [types rangeOfString:@"!"].location;
				types = [types stringByReplacingCharactersInRange:NSMakeRange(loc,1) withString:[strctArray objectAtIndex:fCounter]];

			}

			int fCounter2 = -1;

			while ([types rangeOfString:@"~"].location != NSNotFound) {
				fCounter2++;
				int loc = [types rangeOfString:@"~"].location;
				types = [types stringByReplacingCharactersInRange:NSMakeRange(loc,1) withString:[arrArray objectAtIndex:fCounter2]];

			}

			int fCounter3 = -1;

			while ([types rangeOfString:@"§"].location != NSNotFound) {
				fCounter3++;
				int loc = [types rangeOfString:@"§"].location;
				types = [types stringByReplacingCharactersInRange:NSMakeRange(loc,1) withString:[bitArray objectAtIndex:fCounter3]];

			}

			int fCounter4 = -1;

			while ([types rangeOfString:@"+"].location != NSNotFound) {
				fCounter4++;
				int loc = [types rangeOfString:@"+"].location;
				types = [types stringByReplacingCharactersInRange:NSMakeRange(loc,1) withString:[alreadyFoundStructs objectAtIndex:fCounter4]];

			}

			NSString *whatIBuilt = [NSString stringWithFormat:@"{?=%@}",types];
			NSString *whatIReturn = representedStructFromStruct(whatIBuilt,nil,NO,YES);
			return whatIReturn;

		}

		else{

			if ([inStruct rangeOfString:@"="].location == NSNotFound) {
				inStruct = [inStruct stringByReplacingOccurrencesOfString:CDD_BRACES_O withString:CDD_EMPTY];
				inStruct = [inStruct stringByReplacingOccurrencesOfString:CDD_BRACES_C withString:CDD_EMPTY];
				return inStruct;
			}
			int firstIson = [inStruct rangeOfString:@"="].location;
			inStruct = [inStruct substringToIndex:firstIson];

			inStruct = [inStruct substringFromIndex:1];
			return inStruct;

		}

	}

	int firstBrace = [inStruct rangeOfString:CDD_BRACES_O].location;
	int ison = [inStruct rangeOfString:@"="].location;
	NSString *structName = [inStruct substringWithRange:NSMakeRange(firstBrace+1,ison-1)];

	NSString *parts = [inStruct substringFromIndex:ison+1];
	parts = [parts substringToIndex:parts.length-1]; // remove last character "}"

	if ([parts rangeOfString:CDD_BRACES_O].location == NSNotFound) { //does not contain other struct

		if  (hasMalformedID(parts)) {

			while ([parts rangeOfString:@"@"].location != NSNotFound && hasMalformedID(parts)) {

				NSString *trialString = [parts substringFromIndex:[parts rangeOfString:@"@"].location+2];
				if ([trialString rangeOfString:@"\""].location != [trialString rangeOfString:@"\"\""].location && [trialString rangeOfString:@"\""].location != trialString.length-1 && [trialString rangeOfString:CDD_BRACKETS_C].location != [trialString rangeOfString:@"\""].location+1) {
					int location = [parts rangeOfString:@"@"].location;
					parts = [parts stringByReplacingCharactersInRange:NSMakeRange(location-1,3) withString:@"\"id\""];
				}

				int location = [parts rangeOfString:@"@"].location;

				if ([parts rangeOfString:@"@"].location != NSNotFound) {
					NSString *asubstring = [parts substringFromIndex:location+2];

					int nextlocation = [asubstring rangeOfString:@"\""].location;
					asubstring = [asubstring substringWithRange:NSMakeRange(0,nextlocation)];
					if ([classesInStructs indexOfObject:asubstring] == NSNotFound) {
						[classesInStructs addObject:asubstring];
					}

					parts = [parts stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"@\"%@\"",asubstring] withString:[NSString stringWithFormat:@"^%@",asubstring]];
				}

			}
		}

		NSMutableArray *brokenParts = [[parts componentsSeparatedByString:@"\""] mutableCopy];
		[brokenParts removeObjectAtIndex:0];
		NSString *types = CDD_EMPTY;

		BOOL reallyIsFlagInIvars = 0;
		if (inIvarList && [inName rangeOfString:@"flags" options:NSCaseInsensitiveSearch].location != NSNotFound) {
			reallyIsFlagInIvars = 1;
		}
		BOOL wasKnown = 1;
		if ([structName isEqual:@"?"]) {
			wasKnown = 0;
			structName = [NSString stringWithFormat:@"SCD_Struct_%@%d",classID,(int)[allStructsFound count]];
		}

		if ([structName rangeOfString:@"_"].location == 0) {

			structName = [structName substringFromIndex:1];
		}

		NSString *representation = reallyIsFlagInIvars ? @"struct {\n" : (wasKnown ? [NSString stringWithFormat:@"typedef struct %@ {\n",structName] : @"typedef struct {\n");
		for (int i = 0; i < [brokenParts count]-1; i+ = 2) { // always an even number
			NSString *nam = [brokenParts objectAtIndex:i];
			NSString *typ = [brokenParts objectAtIndex:i+1];
			types = [types stringByAppendingString:[brokenParts objectAtIndex:i+1]];
			representation = reallyIsFlagInIvars ? [representation stringByAppendingString:[NSString stringWithFormat:@"\t\t%@ %@;\n",commonTypes(typ,&nam,NO),nam]] : [representation stringByAppendingString:[NSString stringWithFormat:@"\t%@ %@;\n",commonTypes(typ,&nam,NO),nam]];
		}

		representation = reallyIsFlagInIvars ? [representation stringByAppendingString:@"\t} "] : [representation stringByAppendingString: @"} "];
		if ([structName rangeOfString:@"_"].location == 0) {
			structName = [structName substringFromIndex:1];
		}
		if ([structName rangeOfString:@"_"].location == 0) {
			structName = [structName substringFromIndex:1];
		}
		representation = reallyIsFlagInIvars ? representation : [representation stringByAppendingString:[NSString stringWithFormat:@"%@;\n\n",structName]];


		if (isFinal && !reallyIsFlagInIvars) {

			for (NSMutableDictionary *dict in allStructsFound) {

				if ([[dict objectForKey:@"types"] isEqual:types] && !wasKnown && ![[dict objectForKey:@"name"] isEqual:[dict objectForKey:@"types"]]) {
					NSString *repr = [dict objectForKey:@"representation"];

					if ([repr rangeOfString:@"field"].location != NSNotFound && [representation rangeOfString:@"field"].location == NSNotFound && ![structName isEqual:types]) {
						representation = [representation stringByReplacingOccurrencesOfString:structName withString:[dict objectForKey:@"name"]];
						[dict setObject:representation forKey:@"representation"];
						structName = [dict objectForKey:@"name"];

						break;
					}

				}

			}

		}


		BOOL found = NO;
		for (NSDictionary *dict in allStructsFound) {
			if ([[dict objectForKey:@"name"] isEqual:structName]) {

				found = YES;
				return structName;
				break;

			}
		}

		if (!found) {
			for (NSMutableDictionary *dict in allStructsFound) {
				if ([[dict objectForKey:@"types"] isEqual:types] && !wasKnown) {
					found = YES;
					return [dict objectForKey:@"name"];
				}
			}
		}


		if (!found && !reallyIsFlagInIvars) {
			[allStructsFound addObject:[NSMutableDictionary dictionaryWithObjectsAndKeys:representation,@"representation",structName,@"name",types,@"types",nil]];
		}


		return reallyIsFlagInIvars ? representation : structName;

	}
	else{
		// contains other structs,attempt to break apart

		while ([parts rangeOfString:CDD_BRACES_O].location != NSNotFound) {

			NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\{([^\\{^\\}]+)\\}" options:NSRegularExpressionCaseInsensitive error:nil];
			__block NSString *blParts;
			[regex enumerateMatchesInString:parts options:0
							  range:NSMakeRange(0, [parts length])
						 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
			{
				for (int i = 1; i< [result numberOfRanges]; i++) {
					blParts = [parts stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"{%@}",[parts substringWithRange:[result rangeAtIndex:i]]] withString:representedStructFromStruct([NSString stringWithFormat:@"{%@}",[parts substringWithRange:[result rangeAtIndex:i]]],nil,NO,0)];
					break;
				}
			}];
			parts = blParts;

		}
		NSString *rebuiltStruct = [NSString stringWithFormat:@"{%@=%@}",structName,parts];
		NSString *final = representedStructFromStruct(rebuiltStruct,nil,NO,YES);
		return final;
	}

	return inStruct;
}



/****** Unions Parser ******/


NSString *representedUnionFromUnion(NSString *inUnion) {

	if ([inUnion rangeOfString:@"\""].location == NSNotFound) {


			if ([inUnion rangeOfString:@"{?="].location == 0) {

				NSString *types = [inUnion substringFromIndex:3];
				types = [types substringToIndex:types.length-1];
				for (NSDictionary *dict in allStructsFound) {
					if ([[dict objectForKey:@"types"] isEqual:types]) {
						return [dict objectForKey:@"name"];
					}
				}
				return inUnion;
			}
			else{
				if ([inUnion rangeOfString:@"="].location == NSNotFound) {
					inUnion = [inUnion stringByReplacingOccurrencesOfString:CDD_BRACES_O withString:CDD_EMPTY];
					inUnion = [inUnion stringByReplacingOccurrencesOfString:CDD_BRACES_C withString:CDD_EMPTY];
					return inUnion;
				}
				int firstIson = [inUnion rangeOfString:@"="].location;
				inUnion = [inUnion substringToIndex:firstIson];
				inUnion = [inUnion substringFromIndex:1];
				return inUnion;
			}
	}

	int firstParenthesis = [inUnion rangeOfString:CDD_PARENTHESIS_O].location;
	int ison = [inUnion rangeOfString:@"="].location;
	NSString *unionName = [inUnion substringWithRange:NSMakeRange(firstParenthesis+1,ison-1)];

	NSString *parts = [inUnion substringFromIndex:ison+1];
	parts = [parts substringToIndex:parts.length-1]; // remove last character "}"

	if ([parts rangeOfString:@"\"\"{"].location != NSNotFound) {
		parts = [parts stringByReplacingOccurrencesOfString:@"\"\"{" withString:@"\"field0\"{"];
	}

	if ([parts rangeOfString:CDD_PARENTHESIS_O].location != NSNotFound) {

		while ([parts rangeOfString:CDD_PARENTHESIS_O].location != NSNotFound) {

			NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\(([^\\(^\\)]+)\\)" options:NSRegularExpressionCaseInsensitive error:nil];
			__block NSString *unionParts;
			[regex enumerateMatchesInString:parts options:0
							  range:NSMakeRange(0, [parts length])
						 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
			{
				for (int i = 1; i< [result numberOfRanges]; i++) {
					unionParts = [parts stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"(%@)",[parts substringWithRange:[result rangeAtIndex:i]]] withString:representedUnionFromUnion([NSString stringWithFormat:@"(%@)",[parts substringWithRange:[result rangeAtIndex:i]]])];
					break;
				}
			}];
			parts = unionParts;
		}

	}


	if ([parts rangeOfString:CDD_BRACES_O].location != NSNotFound) {

		while ([parts rangeOfString:CDD_BRACES_O].location != NSNotFound) {

			NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\\{([^\\{^\\}]+)\\}" options:NSRegularExpressionCaseInsensitive error:nil];
			__block NSString *structParts;
			[regex enumerateMatchesInString:parts options:0
							  range:NSMakeRange(0, [parts length])
						 usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
			{
				for (int i = 1; i< [result numberOfRanges]; i++) {
					structParts = [parts stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"{%@}",[parts substringWithRange:[result rangeAtIndex:i]]] withString:representedStructFromStruct([NSString stringWithFormat:@"{%@}",[parts substringWithRange:[result rangeAtIndex:i]]],nil,NO,NO)];
					break;
				}
			}];
			parts = structParts;
        }

	}


	if  (hasMalformedID(parts)) {

		while ([parts rangeOfString:@"@"].location != NSNotFound && hasMalformedID(parts)) {

			NSString *trialString = [parts substringFromIndex:[parts rangeOfString:@"@"].location+2];

			if ([trialString rangeOfString:@"\""].location != [trialString rangeOfString:@"\"\""].location && [trialString rangeOfString:@"\""].location != trialString.length-1 && [trialString rangeOfString:CDD_BRACKETS_C].location != [trialString rangeOfString:@"\""].location+1) {
				int location = [parts rangeOfString:@"@"].location;
				parts = [parts stringByReplacingCharactersInRange:NSMakeRange(location-1,3) withString:@"\"id\""];
			}

			int location = [parts rangeOfString:@"@"].location;

			if ([parts rangeOfString:@"@"].location != NSNotFound) {
				NSString *asubstring = [parts substringFromIndex:location+2];

				int nextlocation = [asubstring rangeOfString:@"\""].location;
				asubstring = [asubstring substringWithRange:NSMakeRange(0,nextlocation)];
				if ([classesInStructs indexOfObject:asubstring] == NSNotFound) {
					[classesInStructs addObject:asubstring];
				}

				parts = [parts stringByReplacingOccurrencesOfString:[NSString stringWithFormat:@"@\"%@\"",asubstring] withString:[NSString stringWithFormat:@"^%@",asubstring]];
			}

		}
	}


	NSMutableArray *brokenParts = [[parts componentsSeparatedByString:@"\""] mutableCopy];
	[brokenParts removeObjectAtIndex:0];
	NSString *types = CDD_EMPTY;

	BOOL wasKnown = 1;

	if ([unionName isEqual:@"?"]) {
		wasKnown = 0;
		unionName = [NSString stringWithFormat:@"SCD_Union_%@%d",classID,(int)[allStructsFound count]];
	}

	if ([unionName rangeOfString:@"_"].location == 0) {

		unionName = [unionName substringFromIndex:1];
	}

	NSString *representation = wasKnown ? [NSString stringWithFormat:@"typedef union %@ {\n",unionName] : @"typedef union {\n";
	int upCount = 0;

	for (int i = 0; i < [brokenParts count]-1; i+=2) { // always an even number
		NSString *nam = [brokenParts objectAtIndex:i];
		upCount++;
		if ([nam rangeOfString:@"field0"].location != NSNotFound) {
			nam = [nam stringByReplacingOccurrencesOfString:@"field0" withString:[NSString stringWithFormat:@"field%d",upCount]];
		}
		NSString *typ = [brokenParts objectAtIndex:i+1];
		types = [types stringByAppendingString:[brokenParts objectAtIndex:i+1]];
		representation = [representation stringByAppendingString:[NSString stringWithFormat:@"\t%@ %@;\n",commonTypes(typ,&nam,NO),nam]];
	}

	representation = [representation stringByAppendingString:@"} "];
	representation = [representation stringByAppendingString:[NSString stringWithFormat:@"%@;\n\n",unionName]];
	BOOL found = NO;

	for (NSDictionary *dict in allStructsFound) {
		if ([[dict objectForKey:@"name"] isEqual:unionName]) {
			found = YES;
			return unionName;
			break;
		}
	}

	if (!found) {
		for (NSDictionary *dict in allStructsFound) {
			if ([[dict objectForKey:@"types"] isEqual:types] && !wasKnown) {
				found = YES;
				return [dict objectForKey:@"name"];
				break;
			}
		}
	}

	[allStructsFound addObject:[NSDictionary dictionaryWithObjectsAndKeys:representation,@"representation",unionName,@"name",types,@"types",nil]];

	return unionName != nil ? unionName : inUnion;

}


/****** Generic Types Parser ******/

NSString * commonTypes(NSString *atype,NSString **inName,BOOL inIvarList) {

	BOOL isRef = NO;
	BOOL isPointer = NO;
	BOOL isCArray = NO;
	BOOL isConst = NO;
	BOOL isOut = NO;
	BOOL isByCopy = NO;
	BOOL isByRef = NO;
	BOOL isOneWay = NO;


	/* Stripping off any extra identifiers to leave only the actual type for parsing later on */

	if ([atype rangeOfString:@"o"].location == 0 && ![commonTypes([atype substringFromIndex:1],nil,NO) isEqual:[atype substringFromIndex:1]]) {
		isOut = YES;
		atype = [atype substringFromIndex:1];
	}

	if ([atype rangeOfString:@"O"].location == 0 && ![commonTypes([atype substringFromIndex:1],nil,NO) isEqual:[atype substringFromIndex:1]]) {
		isByCopy = YES;
		atype = [atype substringFromIndex:1];
	}

	if ([atype rangeOfString:@"R"].location == 0 && ![commonTypes([atype substringFromIndex:1],nil,NO) isEqual:[atype substringFromIndex:1]]) {
		isByRef = YES;
		atype = [atype substringFromIndex:1];
	}

	if ([atype rangeOfString:@"V"].location == 0 && ![commonTypes([atype substringFromIndex:1],nil,NO) isEqual:[atype substringFromIndex:1]]) {
		isOneWay = YES;
		atype = [atype substringFromIndex:1];
	}

	if ([atype rangeOfString:@"r^{"].location == 0) {
		isConst = YES;
		atype = [atype substringFromIndex:2];
		isPointer = YES;
		shouldImportStructs = 1;
	}

	if ([atype rangeOfString:@"r"].location == 0) {
		isConst = YES;
		atype = [atype substringFromIndex:1];
	}

	if ([atype isEqual:@"^?"]) {
		atype = @"/*function pointer*/void*";
	}


	if ([atype rangeOfString:@"^"].location != NSNotFound) {
		isPointer = YES;
		atype = [atype  stringByReplacingOccurrencesOfString:@"^" withString:CDD_EMPTY];
	}

	if ([atype rangeOfString:CDD_PARENTHESIS_O].location == 0) {
		atype = representedUnionFromUnion(atype);
	}

	int arrayCount = 0;
	if ([atype rangeOfString:CDD_BRACKETS_O].location == 0) {

		isCArray = YES;

		if ([atype rangeOfString:CDD_BRACES_O].location != NSNotFound) {
			atype = [atype stringByReplacingOccurrencesOfString:CDD_BRACKETS_O withString:CDD_EMPTY];
			atype = [atype stringByReplacingOccurrencesOfString:CDD_BRACKETS_C withString:CDD_EMPTY];
			int firstBrace = [atype rangeOfString:CDD_BRACES_O].location;
			arrayCount = [[atype stringByReplacingCharactersInRange:NSMakeRange(firstBrace,atype.length-firstBrace) withString:CDD_EMPTY] intValue];
			atype = [atype stringByReplacingCharactersInRange:NSMakeRange(0,firstBrace) withString:CDD_EMPTY];
		}

		else{
			isCArray = NO;

			__block NSString *tempString = [atype mutableCopy];
			__block NSMutableArray *numberOfArray = [NSMutableArray array];
			while ([tempString rangeOfString:CDD_BRACKETS_O].location != NSNotFound) {

				NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"(\\[([^\\[^\\]]+)\\])" options:nil error:nil];

        		[regex enumerateMatchesInString:tempString options:0
            	                      range:NSMakeRange(0, [tempString length])
                	             usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop)
	        	{
    	        	for (int i = 1; i< [result numberOfRanges]; i++) {
    	        		NSString *foundString = [tempString substringWithRange:[result rangeAtIndex:i]];
	    	        	tempString = [tempString stringByReplacingOccurrencesOfString:foundString withString:CDD_EMPTY];
    	    	        [numberOfArray addObject:foundString]; //e.g. [2] or [100c]
        	         	break;
            		}
	        	}];
	        }




	        NSString *stringContainingType;
	        for (NSString *aString in numberOfArray) {

	        	NSCharacterSet * set = [[NSCharacterSet characterSetWithCharactersInString:@"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLKMNOPQRSTUVWXYZ@#$%^&*()!<>?:\"|}{"] invertedSet];

				if ([aString rangeOfCharacterFromSet:set].location != NSNotFound) {
  					stringContainingType = aString;
  					break;
  				}
			}

			[numberOfArray removeObject:stringContainingType];
	        NSCharacterSet * set  = [NSCharacterSet characterSetWithCharactersInString:@"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLKMNOPQRSTUVWXYZ@#$%^&*()!<>?:\"|}{"];
			int letterLocation = [stringContainingType rangeOfCharacterFromSet:set].location == NSNotFound ? -1 : [stringContainingType rangeOfCharacterFromSet:set].location;
			NSString *outtype = letterLocation == -1 ? stringContainingType : [stringContainingType substringFromIndex:letterLocation];
			outtype = [outtype stringByReplacingOccurrencesOfString:CDD_BRACKETS_C withString:CDD_EMPTY];
			stringContainingType = [stringContainingType stringByReplacingOccurrencesOfString:outtype withString:CDD_EMPTY];
			for (NSString *subarr in numberOfArray) {
				stringContainingType = [subarr stringByAppendingString:stringContainingType];
			}
			atype = outtype;
			if ([atype isEqual:@"v"]) {
				atype = @"void*";
			}
			if (inName != nil) {
				*inName = [*inName stringByAppendingString:stringContainingType];
			}
		}
	}



	if ([atype rangeOfString:@"=}"].location != NSNotFound && [atype rangeOfString:CDD_BRACES_O].location == 0 && [atype rangeOfString:@"?"].location == NSNotFound  && [atype rangeOfString:@"\""].location == NSNotFound) {
		shouldImportStructs = 1;
		NSString *writeString = [atype stringByReplacingOccurrencesOfString:CDD_BRACES_O withString:CDD_EMPTY];
		writeString = [writeString stringByReplacingOccurrencesOfString:CDD_BRACES_C withString:CDD_EMPTY];
		writeString = [writeString stringByReplacingOccurrencesOfString:@"=" withString:CDD_EMPTY];
		NSString *constString = isConst ? @"const " : CDD_EMPTY;
		writeString = [NSString stringWithFormat:@"typedef %@struct %@* ",constString,writeString];



		atype = [atype stringByReplacingOccurrencesOfString:@"{__" withString:CDD_EMPTY];
		atype = [atype stringByReplacingOccurrencesOfString:CDD_BRACES_O withString:CDD_EMPTY];
		atype = [atype stringByReplacingOccurrencesOfString:@" = }" withString:CDD_EMPTY];

		if ([atype rangeOfString:@"_"].location == 0) {

			atype = [atype substringFromIndex:1];
		}

		BOOL found = NO;
		for (NSDictionary *dict in allStructsFound) {
			if ([[dict objectForKey:@"name"] isEqual:atype] ) {
				found = YES;
				break;
			}
		}

		if (!found) {
			writeString = [writeString stringByAppendingString:[NSString stringWithFormat:@"%@Ref;\n\n",representedStructFromStruct(atype,nil,0,NO)]];
			[allStructsFound addObject:[NSDictionary dictionaryWithObjectsAndKeys:[NSArray arrayWithObject:CDD_EMPTY],@"types",writeString,@"representation",atype,@"name",nil]];
		}

		isRef = YES;
		isPointer = NO; // -> Ref
	}



	if ([atype rangeOfString:CDD_BRACES_O].location == 0) {


		if (inName != nil) {
			atype = representedStructFromStruct(atype,*inName,inIvarList,YES);
		}
		else{
			atype = representedStructFromStruct(atype,nil,inIvarList,YES);
		}
		if ([atype rangeOfString:@"_"].location == 0) {
			atype = [atype substringFromIndex:1];
		}
		shouldImportStructs = 1;
	}


	if ([atype rangeOfString:@"b"].location == 0 && atype.length > 1) {

		NSCharacterSet *numberSet = [NSCharacterSet characterSetWithCharactersInString:@"0123456789"];
		if ([atype rangeOfCharacterFromSet:numberSet].location == 1) {
			NSString *bitValue = [atype substringFromIndex:1];
			atype= @"unsigned";
			if (inName != nil) {
				*inName = [*inName stringByAppendingString:[NSString stringWithFormat:@" : %@",bitValue]];
			}
		}
	}

	if ([atype rangeOfString:@"N"].location == 0 && ![commonTypes([atype substringFromIndex:1],nil,NO) isEqual:[atype substringFromIndex:1]]) {

		atype = commonTypes([atype substringFromIndex:1],nil,NO);
		atype = [NSString stringWithFormat:@"inout %@",atype];
	}

	if ([atype isEqual:  @"d"]) { atype = @"double"; }
	if ([atype isEqual:  @"i"]) { atype = @"int"; }
	if ([atype isEqual:  @"f"]) { atype = @"float"; }

	if ([atype isEqual:  @"c"]) { atype = @"char"; }
	if ([atype isEqual:  @"s"]) { atype = @"short"; }
	if ([atype isEqual:  @"I"]) { atype = @"unsigned"; }
	if ([atype isEqual:  @"l"]) { atype = @"long"; }
	if ([atype isEqual:  @"q"]) { atype = @"long long"; }
	if ([atype isEqual:  @"L"]) { atype = @"unsigned long"; }
	if ([atype isEqual:  @"C"]) { atype = @"unsigned char"; }
	if ([atype isEqual:  @"S"]) { atype = @"unsigned short"; }
	if ([atype isEqual:  @"Q"]) { atype = @"unsigned long long"; }
	//if ([atype isEqual:  @"Q"]) { atype = @"uint64_t"; }

	if ([atype isEqual:  @"B"]) { atype = @"BOOL"; }
	if ([atype isEqual:  @"v"]) { atype = @"void"; }
	if ([atype isEqual:  @"*"]) { atype = @"char*"; }
	if ([atype isEqual:  @":"]) { atype = @"SEL"; }
	if ([atype isEqual:  @"?"]) { atype = @"/*function pointer*/void*"; }
	if ([atype isEqual:  @"#"]) { atype = @"Class"; }
	if ([atype isEqual:  @"@"]) { atype = @"id"; }
	if ([atype isEqual:  @"@?"]) { atype = @"/*^block*/id"; }
	if ([atype isEqual:  @"Vv"]) { atype = @"void"; }
	if ([atype isEqual:  @"rv"]) { atype = @"const void*"; }




	if (isRef) {
		if ([atype rangeOfString:@"_"].location == 0) {
			atype = [atype substringFromIndex:1];
		}
		atype = [atype isEqual:@"NSZone"] ? @"NSZone*" : [atype stringByAppendingString:@"Ref"];
	}

	if (isPointer) {
		atype = [atype stringByAppendingString:@"*"];
	}

	if (isConst) {
		atype = [@"const " stringByAppendingString:atype];
	}

	if (isCArray && inName != nil) { //more checking to do, some framework were crashing if not nil, shouldn't be nil

		*inName = [*inName stringByAppendingString:[NSString stringWithFormat:@"[%d]",arrayCount]];
	}

	if (isOut) {
		atype = [@"out " stringByAppendingString:atype];
	}

	if (isByCopy) {
		atype = [@"bycopy " stringByAppendingString:atype];
	}

	if (isByRef) {
		atype = [@"byref " stringByAppendingString:atype];
	}

	if (isOneWay) {
		atype = [@"oneway " stringByAppendingString:atype];
	}


	return atype;

}

/****** Methods Parser ******/

NSString * generateMethodLines(Class someclass,BOOL isInstanceMethod,NSMutableArray *propertiesArray) {

	unsigned int outCount;

	NSString *returnString = CDD_EMPTY;
	Method * methodsArray = class_copyMethodList(someclass,&outCount);

	for (unsigned x = 0; x < outCount; x++) {

        Method currentMethod = methodsArray[x];
		SEL sele= method_getName(currentMethod);
		unsigned methodArgs = method_getNumberOfArguments(currentMethod);
		char * returnType = method_copyReturnType(currentMethod);
		const char *selectorName = sel_getName(sele);
		NSString *returnTypeSameAsProperty = nil;
		NSString *SelectorNameNS = [NSString stringWithCString:selectorName encoding:NSUTF8StringEncoding];
		if ([SelectorNameNS rangeOfString:@"."].location == 0) { //.cxx.destruct etc
			continue;
		}
		for (NSDictionary *dict in propertiesArray) {
			NSString *propertyName = [dict objectForKey:@"name"];
			if ([propertyName isEqual:SelectorNameNS]) {
				returnTypeSameAsProperty = [[dict objectForKey:@"type"] retain];
				break;
			}
		}
		NSString *startSign = isInstanceMethod ? @"-" : @"+";

		NSString *startTypes = returnTypeSameAsProperty ? [NSString stringWithFormat:@"\n%@(%@)",startSign,returnTypeSameAsProperty] : [NSString stringWithFormat:@"\n%@(%@)",startSign,commonTypes([NSString stringWithCString:returnType encoding:NSUTF8StringEncoding],nil,NO)];
		[returnTypeSameAsProperty release];
		free(returnType);

		returnString = [[[returnString autorelease] stringByAppendingString:startTypes] retain];

		if (methodArgs > 2) {
			NSArray *selValuesArray = [SelectorNameNS componentsSeparatedByString:@":"];
			for (unsigned i = 2; i < methodArgs; i++) {
				char * methodType= method_copyArgumentType( currentMethod,i);
				NSString *methodTypeSameAsProperty = nil;
				if (methodArgs == 3) {
					for (NSDictionary *dict in propertiesArray) {
						NSString *propertyName = [dict objectForKey:@"name"];
						NSString *firstCapitalized = [[propertyName substringToIndex:1] capitalizedString];
						NSString *capitalizedFirst = [firstCapitalized stringByAppendingString:[propertyName substringFromIndex:1]];
						if ([[selValuesArray objectAtIndex:0] isEqual:[NSString stringWithFormat:@"set%@",capitalizedFirst] ]) {
							methodTypeSameAsProperty = [[dict objectForKey:@"type"] retain];
							break;
						}
					}
				}
				if (methodTypeSameAsProperty) {
					returnString = [[[returnString autorelease] stringByAppendingString:[NSString stringWithFormat:@"%@:(%@)arg%d ",[selValuesArray objectAtIndex:i-2],methodTypeSameAsProperty,i-1]] retain];
				}
				else{
					returnString = [[[returnString autorelease] stringByAppendingString:[NSString stringWithFormat:@"%@:(%@)arg%d ",[selValuesArray objectAtIndex:i-2],commonTypes([NSString stringWithCString:methodType encoding:NSUTF8StringEncoding],nil,NO),i-1]] retain];
				}
				[methodTypeSameAsProperty release];
				free(methodType);
			}
		}

		else{
			returnString = [[[returnString autorelease] stringByAppendingString:[NSString stringWithFormat:@"%@",SelectorNameNS]] retain];
		}

		returnString = [[[returnString autorelease] stringByAppendingString:@";"] retain];
	}

	free(methodsArray);

	return returnString;
}
