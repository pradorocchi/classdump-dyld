/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRefreshControlContentView.h>

@class UIView, _UIRefreshControlModernReplicatorView, UILabel;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {

	BOOL _animationsAreValid;
	UIView* _replicatorContainer;
	_UIRefreshControlModernReplicatorView* _replicatorView;
	UIView* _seed;
	BOOL _hasFinishedRevealing;
	UILabel* _textLabel;
	BOOL _areAnimationsValid;
	float _currentPopStiffness;

}

@property (nonatomic,readonly) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) float currentPopStiffness;              //@synthesize currentPopStiffness=_currentPopStiffness - In the implementation block
@property (assign,nonatomic) BOOL areAnimationsValid;                //@synthesize areAnimationsValid=_areAnimationsValid - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAttributedTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(void)setTintColor:(id)arg1 ;
-(id)textLabel;
-(id)_effectiveTintColor;
-(id)attributedTitle;
-(float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(float)maximumSnappingHeight;
-(void)setCurrentPopStiffness:(float)arg1 ;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setAreAnimationsValid:(BOOL)arg1 ;
-(void)_snappingMagic;
-(double)_currentTimeOffset;
-(BOOL)areAnimationsValid;
-(void)_updateTimeOffsetOfRelevantLayers;
-(void)_resetToRevealingState;
-(void)_spin;
-(void)_tickDueToProgrammaticRefresh;
-(void)_goAway;
-(void)_cleanUpAfterRevealing;
-(void)_setSpunAppearance;
-(void)_tick;
-(id)_effectiveTintColorWithAlpha:(float)arg1 ;
-(void)_reveal;
-(float)currentPopStiffness;
-(float)_percentageShowing;
-(float)_effectiveScrollViewHeight;
@end

