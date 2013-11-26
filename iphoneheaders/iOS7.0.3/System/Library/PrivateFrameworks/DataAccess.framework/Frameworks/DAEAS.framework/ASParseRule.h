/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary;

@interface ASParseRule : NSObject {

	int _minimumNumber;
	int _maximumNumber;
	int _codePage;
	int _token;
	Class _objectClass;
	SEL _setterMethod;
	int _dataclass;
	NSDictionary* _subclassRuleSet;
	NSDictionary* _callbackDict;
	NSDictionary* _streamCallbackDict;

}
-(void)dealloc;
-(int)codePage;
-(id)initWithMinimumNumber:(int)arg1 maximumNumber:(int)arg2 codePage:(int)arg3 token:(int)arg4 objectClass:(Class)arg5 setterMethod:(SEL)arg6 dataclass:(int)arg7 callbackDict:(id)arg8 streamCallbackDict:(id)arg9 subclassRuleSet:(id)arg10 ;
-(int)dataclass;
-(Class)objectClass;
-(id)subclassRuleSet;
-(SEL)setterMethod;
-(int)minimumNumber;
-(int)maximumNumber;
-(id)callbackDict;
-(id)streamCallbackDict;
-(int)token;
@end

