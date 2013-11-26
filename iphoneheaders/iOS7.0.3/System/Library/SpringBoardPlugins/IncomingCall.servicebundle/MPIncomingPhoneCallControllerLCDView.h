/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TPLCDView.h>

@class NSString, UIGestureRecognizer;

@interface MPIncomingPhoneCallControllerLCDView : TPLCDView {

	BOOL _inCyclingMode;
	NSString* _label1;
	NSString* _label2;
	double _cyclingInterval;
	BOOL _shouldCycleIndefinitely;
	BOOL _animating;
	int _labelShowing;
	UIGestureRecognizer* _tapGestureRecognizer;
	BOOL _cycleWhenLabelTapped;

}

@property (assign) BOOL cycleWhenLabelTapped;              //@synthesize cycleWhenLabelTapped=_cycleWhenLabelTapped - In the implementation block
-(void)_cycleToLabel1;
-(void)_labelTapped;
-(void)_cycleToLabel2;
-(void)stopCycling;
-(void)setCycleWhenLabelTapped:(BOOL)arg1 ;
-(void)startCyclingBetweenLabel1:(id)arg1 label2:(id)arg2 withInterval:(double)arg3 afterDelay:(double)arg4 indefinitely:(BOOL)arg5 ;
-(BOOL)cycleWhenLabelTapped;
-(void)dealloc;
-(void)setLabel:(id)arg1 animate:(BOOL)arg2 ;
-(void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

