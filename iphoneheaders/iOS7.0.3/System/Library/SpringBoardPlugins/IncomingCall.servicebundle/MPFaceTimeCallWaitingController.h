/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IncomingCall/MPIncomingFaceTimeCallController.h>

@class UIView;

@interface MPFaceTimeCallWaitingController : MPIncomingFaceTimeCallController {

	int _backgroundType;
	UIView* _callWaitingCenterView;

}

@property (assign,nonatomic) int backgroundType;              //@synthesize backgroundType=_backgroundType - In the implementation block
-(id)defaultBackgroundView;
-(void)updateImageFromPerson:(void*)arg1 ;
-(int)deactivationStyle;
-(void)performDeclineAction;
-(id)additionalURLQueryParameters;
-(BOOL)shouldZoomOutBackgroundView;
-(void)updateTopBarWithName:(id)arg1 image:(id)arg2 ;
-(void)showBackgroundViewAnimated:(BOOL)arg1 ;
-(void)_updateDisplayControllerForOrientation:(int)arg1 ;
-(void)_updateBackgroundType;
-(void)_updateBackgroundViewForCurrentBackgroundType;
-(void)addCallWaitingButton:(BOOL)arg1 ;
-(BOOL)showsOnTopOfCurrentUI;
-(void)endCurrentAndAnswerButtonTapped:(id)arg1 ;
-(void)decline;
-(void)dealloc;
-(void)viewDidLoad;
-(void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2 ;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2 ;
-(void)setBackgroundType:(int)arg1 ;
-(int)backgroundType;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)hasTranslucentBackground;
-(id)newTopBar;
-(id)newBottomBar;
-(BOOL)isShowingWallpaper;
-(id)initWithChat:(id)arg1 ;
-(void)accept;
@end

