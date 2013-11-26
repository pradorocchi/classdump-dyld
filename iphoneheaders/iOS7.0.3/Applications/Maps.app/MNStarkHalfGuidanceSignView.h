/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/ManeuverGuidanceObserver.h>

@protocol MNStarkHalfGuidanceSignViewDelegate;
@class UILabel, MNGuidanceManeuverView, , ManeuverGuidance;

@interface MNStarkHalfGuidanceSignView : UIView <ManeuverGuidanceObserver> {

	double _distance;
	BOOL _instructionsTextIsCurrent;
	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	MNGuidanceManeuverView* _maneuverView;
	BOOL _isShowingDistanceText;
	BOOL _isShowingManeuver;
	BOOL _didPerformInitialLayout;
	<MNStarkHalfGuidanceSignViewDelegate>* _delegate;
	ManeuverGuidance* _guidance;

}

@property (assign,nonatomic) <MNStarkHalfGuidanceSignViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ManeuverGuidance * guidance;                                   //@synthesize guidance=_guidance - In the implementation block
-(id)guidance;
-(void)maneuverGuidanceDistanceDidChange:(id)arg1 ;
-(void)maneuverGuidanceDetailsDidChange:(id)arg1 ;
-(void)setGuidance:(id)arg1 ;
-(void)_updateDetailsFromGuidance;
-(void)_relayoutAnimatedIfNeeded;
-(BOOL)_shouldBeShowingDistanceText;
-(BOOL)_shouldBeShowingManeuver;
-(void)_updateViewPositionsAndShowingState;
-(CGRect)_boundingRectOfInstructionsText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
@end

