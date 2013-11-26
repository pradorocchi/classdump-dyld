/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface TSCEFunctionSpec : NSObject {

	NSString* mFunctionName;
	short mMinArguments;
	short mMaxArguments;
	short mRepeatingGroupSize;
	NSArray* mArguments;
	NSArray* mRepeatingArguments;
	BOOL mIsOperator;
	int mShipVersion;
	int mFunctionIndex;

}

@property (readonly) int functionIndex; 
+(id)specDictionary;
+(id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8 ;
+(id)functionSpecForFunctionIndex:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(BOOL)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8 ;
-(id)localizedFunctionName;
-(id)argumentSpecForIndex:(unsigned)arg1 ;
-(void)p_ValidateArguments;
-(id)localizedToolTipString;
-(short)minArguments;
-(short)maxArguments;
-(BOOL)isOperator;
-(int)versionShippedIn;
-(id)nativeSyntaxStringForArgument:(int)arg1 ;
-(int)functionIndex;
-(unsigned)numArguments;
-(void)dealloc;
-(id)description;
-(id)arguments;
-(id)displayString;
-(id)functionName;
@end

