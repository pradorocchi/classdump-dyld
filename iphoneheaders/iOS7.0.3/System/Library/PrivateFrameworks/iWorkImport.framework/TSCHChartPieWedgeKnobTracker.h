/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHKnobTracker.h>

@class NSIndexSet, NSMutableDictionary, NSDictionary;

@interface TSCHChartPieWedgeKnobTracker : TSCHKnobTracker {

	CGPoint mDragStartPoint;
	CGPoint mLastDragPoint;
	NSIndexSet* mSeriesIndices;
	NSMutableDictionary* mSeriesIndexedPieWedgeExplosions;

}

@property (nonatomic,readonly) NSIndexSet * seriesIndices; 
@property (nonatomic,readonly) NSDictionary * seriesIndexedPieWedgeExplosions; 
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)beginMovingKnob;
-(void)p_updateDrawableLayoutValues;
-(void)endMovingKnob;
-(BOOL)wantsAutoscroll;
-(CGPoint)knobDragPosition;
-(id)seriesIndexedPieWedgeExplosions;
-(id)p_trackingObject;
-(void)mergeSeriesIndexedPieWedgeExplosions:(id)arg1 ;
-(id)p_pieWedgeKnob;
-(float)p_singleDirectlyManipulatedExplosion;
-(void)p_updateHUDWithExplosion:(float)arg1 point:(CGPoint)arg2 ;
-(void)p_hideHUDToPoint:(CGPoint)arg1 ;
-(void)p_updateHUDWithPoint:(CGPoint)arg1 shouldHide:(BOOL)arg2 ;
-(void)p_sendCommand;
-(void)p_hideHUD;
-(BOOL)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(id)seriesIndices;
-(void)dealloc;
-(double)delay;
@end

