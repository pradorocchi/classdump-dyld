/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/MKWorldViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Maps/StarkLikelyRouteUpdaterObserver.h>

@protocol StarkRouteGeniusAdoptedViewsProvider;
@class VKAttributedRouteMatch, StarkSingleLikelyRouteSignView, StarkCurrentLocationSignView, UIView, UILabel, UIButton, UITapGestureRecognizer, MKWorldView, VKPolylineOverlay, VKPolylineOverlayPainter, StarkUserLocationView, StarkRouteGeniusBorderView, StarkLikelyRouteUpdater, , StarkLikelyRoute;

@interface StarkSingleLikelyRouteView : UIView <MKWorldViewDelegate, UIGestureRecognizerDelegate, StarkLikelyRouteUpdaterObserver> {

	BOOL _hasCreatedOwnViews;
	StarkSingleLikelyRouteSignView* _signView;
	StarkCurrentLocationSignView* _signViewForCurrentLocation;
	id _mapTapTarget;
	SEL _mapTapAction;
	UIView* _signTitleBarSeparator;
	UILabel* _signTitleBarLabel;
	UIButton* _closeButton;
	UITapGestureRecognizer* _tapRecognizer;
	MKWorldView* _worldView;
	VKPolylineOverlay* _routeLine;
	VKPolylineOverlayPainter* _routeLinePainter;
	StarkUserLocationView* _userLocationView;
	StarkRouteGeniusBorderView* _borderView;
	BOOL _animatingToWorldView;
	BOOL _signHidden;
	VKAttributedRouteMatch* _lastKnownMatch;
	BOOL _worldViewSuppressed;
	StarkLikelyRouteUpdater* _likelyRouteUpdater;
	int _interactionModel;
	<StarkRouteGeniusAdoptedViewsProvider>* _adoptedViewsProvider;

}

@property (assign,nonatomic) <StarkRouteGeniusAdoptedViewsProvider> * adoptedViewsProvider;              //@synthesize adoptedViewsProvider=_adoptedViewsProvider - In the implementation block
@property (nonatomic,retain) StarkLikelyRouteUpdater * likelyRouteUpdater;                               //@synthesize likelyRouteUpdater=_likelyRouteUpdater - In the implementation block
@property (nonatomic,readonly) StarkLikelyRoute * route; 
@property (assign,getter=isBorderHidden,nonatomic) BOOL borderHidden; 
@property (assign,nonatomic) int interactionModel;                                                       //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,getter=isWorldViewSuppressed,nonatomic) BOOL worldViewSuppressed;                      //@synthesize worldViewSuppressed=_worldViewSuppressed - In the implementation block
@property (nonatomic,readonly) VKAttributedRouteMatch * currentRouteMatch; 
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(void)addCloseButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMapTapTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAdoptedViewsProvider:(id)arg1 ;
-(id)likelyRouteUpdater;
-(void)setLikelyRouteUpdater:(id)arg1 ;
-(void)likelyRouteMayHaveChanged;
-(void)animateIn:(id)arg1 ;
-(void)getRelinquishedWorldView:(out id*)arg1 userLocationView:(out id*)arg2 forTransitioningOutWithAnimation:(id)arg3 ;
-(BOOL)isBorderHidden;
-(void)setBorderHidden:(BOOL)arg1 ;
-(void)_displayRouteInWorldViewIfNeeded;
-(BOOL)isWorldViewSuppressed;
-(id)adoptedViewsProvider;
-(void)_setupWorldView;
-(void)_tappedMap:(id)arg1 ;
-(void)_updateWorldViewInsets;
-(void)_recenterCameraOnRoute;
-(void)likelyRouteUpdaterRerouted:(id)arg1 ;
-(void)likelyRouteUpdater:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)setWorldViewSuppressed:(BOOL)arg1 ;
-(void)removeCloseButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)willAnimateIn;
-(id)worldView:(id)arg1 painterForOverlay:(id)arg2 ;
-(id)worldView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)_updateSubviews;
-(id)route;
@end

