/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression {

	NSString* _content;

}

@property (nonatomic,copy) NSString * content;              //@synthesize content=_content - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)integerValue;
-(id)content;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(BOOL)canBeUsedWithBase;
-(BOOL)isInteger;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(id)_functionNames;
-(void)setContent:(id)arg1 ;
@end

