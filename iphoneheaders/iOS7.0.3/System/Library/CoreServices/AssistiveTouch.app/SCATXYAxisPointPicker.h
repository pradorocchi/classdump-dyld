/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATPointPicker.h>

@class SCATFocusContext;

@interface SCATXYAxisPointPicker : SCATPointPicker {

	SCATFocusContext* _sweepFocusContext;

}

@property (nonatomic,retain) SCATFocusContext * sweepFocusContext;              //@synthesize sweepFocusContext=_sweepFocusContext - In the implementation block
-(BOOL)isRefiningPoint;
-(void)didSweepOverPoint:(CGPoint)arg1 ;
-(void)setSweepFocusContext:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(BOOL)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(BOOL)shouldKeepScannerAwake;
-(BOOL)providesElements;
-(id)initWithMenu:(id)arg1 ;
-(BOOL)allowsSelectionRefinement;
-(int)pickerType;
-(id)sweepFocusContext;
-(void)dealloc;
@end

