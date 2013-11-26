/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIBarButtonItem.h>
#import <MapKit/MKUserTrackingButtonTarget.h>

@protocol MKUserTrackingView;
@class UIButton, _MKUserTrackingButtonController, UIImage, , UIToolbar, UINavigationBar, UIView, MKMapView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem <MKUserTrackingButtonTarget> {

	BOOL _hasCustomAssociatedView;
	UIButton* _customButton;
	_MKUserTrackingButtonController* _controller;
	BOOL _isLegacy;
	UIImage* _trackingEmptyImage;
	UIImage* _trackingNoneImage;
	UIImage* _trackingFollowImage;
	UIImage* _trackingFollowWithHeadingImage;
	<MKUserTrackingView>* _userTrackingView;
	UIToolbar* _toolbar;
	UINavigationBar* _navigationBar;
	UIView* _associatedView;

}

@property (nonatomic,retain) MKMapView * mapView; 
@property (assign,setter=_setState:,nonatomic) int _state; 
@property (nonatomic,retain) UIToolbar * _toolbar;                                                               //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UINavigationBar * _navigationBar;                                                   //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * _associatedView;                                                           //@synthesize associatedView=_associatedView - In the implementation block
@property (setter=_setUserTrackingView:,nonatomic,retain) <MKUserTrackingView> * _userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
+(Class)_activityIndicatorClass;
-(void)_goToNextMode:(id)arg1 ;
-(id)_trackingNoneImage;
-(void)set_associatedView:(id)arg1 ;
-(id)_initWithUserTrackingView:(id)arg1 ;
-(id)initWithWorldView:(id)arg1 forceSilverStyle:(BOOL)arg2 ;
-(id)_associatedView;
-(id)_userTrackingView;
-(void)_setUserTrackingView:(id)arg1 ;
-(void)set_toolbar:(id)arg1 ;
-(void)_repositionViews;
-(void)set_navigationBar:(id)arg1 ;
-(int)_styleForState:(int)arg1 ;
-(void)_updateForState:(int)arg1 ;
-(BOOL)_isHighlightedForState:(int)arg1 ;
-(id)_trackingEmptyImage;
-(id)_trackingFollowImage;
-(id)_trackingFollowWithHeadingImage;
-(id)initWithMapView:(id)arg1 ;
-(id)initWithWorldView:(id)arg1 ;
-(id)_toolbar;
-(id)_navigationBar;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)createViewForNavigationItem:(id)arg1 ;
-(int)_state;
-(BOOL)_isInMiniBar;
-(id)createViewForToolbar:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(int)arg1 ;
-(int)_activityIndicatorStyle;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
@end

