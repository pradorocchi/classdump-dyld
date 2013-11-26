/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>

@interface TSDButtonKnobTracker : TSDKnobTracker {

	id mTarget;
	SEL mAction;

}

@property (assign,nonatomic) id target; 
@property (assign,nonatomic) SEL action; 
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)endMovingKnob;
-(BOOL)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(BOOL)shouldHideOtherKnobs;
-(BOOL)operationShouldBeDynamic;
-(BOOL)allowHUDToDisplay;
-(BOOL)p_knobContainsCurrentPosition;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end

