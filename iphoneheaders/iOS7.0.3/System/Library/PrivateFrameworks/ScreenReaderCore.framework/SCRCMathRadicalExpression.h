/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathRadicalExpression : SCRCMathExpression {

	SCRCMathExpression* _radicand;
	SCRCMathExpression* _rootIndex;

}

@property (nonatomic,retain) SCRCMathExpression * radicand;               //@synthesize radicand=_radicand - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * rootIndex;              //@synthesize rootIndex=_rootIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned)fractionLevel;
-(id)mathMLString;
-(void)setRadicand:(id)arg1 ;
-(void)setRootIndex:(id)arg1 ;
-(id)radicand;
-(id)rootIndex;
-(BOOL)_isSquareRoot;
-(BOOL)_isCubeRoot;
@end

