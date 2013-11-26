/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPAudioDeviceControllerDelegate.h>
#import <CoreFoundation/NSCoding.h>

@class MPAudioVideoRoutingActionSheet, MPAudioDeviceController, UIButton, UILabel, MPAudioVideoRoutingPopoverController, MPVolumeSlider, UIImage;

@interface MPVolumeView : UIView <MPAudioDeviceControllerDelegate, NSCoding> {

	MPAudioVideoRoutingActionSheet* _actionSheet;
	MPAudioDeviceController* _audioDeviceController;
	BOOL _hasNonDefaultRouteButtonImages;
	BOOL _hasNonDefaultMaxVolumeSliderImage;
	BOOL _hasNonDefaultMinVolumeSliderImage;
	BOOL _hidesRouteLabelWhenNoRouteChoice;
	UIButton* _routeButton;
	BOOL _routeButtonShowsTouchWhenHighlighted;
	BOOL _routeDiscoveryEnabled;
	UILabel* _routeLabel;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
	BOOL _showingButton;
	BOOL _showingLabel;
	BOOL _showingSlider;
	BOOL _showsRouteButton;
	BOOL _showsVolumeSlider;
	int _style;
	MPVolumeSlider* _volumeSlider;
	BOOL _volumeSliderShrinksFromBothEnds;
	BOOL _wirelessRouteIsPicked;
	BOOL _wirelessRoutesAvailable;
	unsigned _routePopoverPermittedArrowDirections;

}

@property (assign,nonatomic) BOOL showsVolumeSlider; 
@property (assign,nonatomic) BOOL showsRouteButton; 
@property (getter=areWirelessRoutesAvailable,nonatomic,readonly) BOOL wirelessRoutesAvailable; 
@property (getter=isWirelessRouteActive,nonatomic,readonly) BOOL wirelessRouteActive; 
@property (nonatomic,retain) UIImage * volumeWarningSliderImage; 
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) MPVolumeSlider * volumeSlider; 
@property (assign,nonatomic) BOOL volumeSliderShrinksFromBothEnds; 
@property (assign,nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isShowingRouteButton; 
@property (assign,nonatomic) BOOL routeButtonShowsTouchWhenHighlighted; 
@property (assign,nonatomic) unsigned routePopoverPermittedArrowDirections;                                 //@synthesize routePopoverPermittedArrowDirections=_routePopoverPermittedArrowDirections - In the implementation block
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(void)_createSubviews;
-(void)_registerNotifications;
-(void)_initWithStyle:(int)arg1 ;
-(void)_unregisterNotifications;
-(void)_setShowsVolumeSlider:(BOOL)arg1 ;
-(void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setRouteDiscoveryEnabled:(BOOL)arg1 ;
-(void)_updateWirelessRouteStatus;
-(void)_getDefaultVolumeSliderFrame:(CGRect*)arg1 routeButtonFrame:(CGRect*)arg2 forBounds:(CGRect)arg3 ;
-(BOOL)routeButtonShowsTouchWhenHighlighted;
-(id)_defaultRouteButtonImageAsSelected:(BOOL)arg1 ;
-(void)_displayAudioRoutePicker;
-(CGRect)volumeSliderRectForBounds:(CGRect)arg1 ;
-(CGRect)routeButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)isShowingRouteButton;
-(BOOL)isWirelessRouteActive;
-(BOOL)areWirelessRoutesAvailable;
-(id)minimumVolumeSliderImageForState:(unsigned)arg1 ;
-(id)maximumVolumeSliderImageForState:(unsigned)arg1 ;
-(id)volumeWarningSliderImage;
-(id)routeButtonImageForState:(unsigned)arg1 ;
-(void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setVolumeWarningSliderImage:(id)arg1 ;
-(void)setRouteButtonImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setRouteButtonShowsTouchWhenHighlighted:(BOOL)arg1 ;
-(void)setShowsRouteButton:(BOOL)arg1 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(void)setVolumeThumbImage:(id)arg1 forState:(unsigned)arg2 ;
-(BOOL)showsRouteButton;
-(BOOL)showsVolumeSlider;
-(id)volumeThumbImageForState:(unsigned)arg1 ;
-(CGRect)volumeThumbRectForBounds:(CGRect)arg1 volumeSliderRect:(CGRect)arg2 value:(float)arg3 ;
-(id)volumeSlider;
-(BOOL)hidesRouteLabelWhenNoRouteChoice;
-(BOOL)volumeSliderShrinksFromBothEnds;
-(void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1 ;
-(void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1 ;
-(void)dismissActiveOverlaysAnimated:(BOOL)arg1 ;
-(BOOL)isShowingActiveOverlays;
-(void)_setVolumeAudioCategory:(id)arg1 ;
-(id)_routeButton;
-(unsigned)routePopoverPermittedArrowDirections;
-(void)setRoutePopoverPermittedArrowDirections:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)isVisible;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void).cxx_destruct;
@end

