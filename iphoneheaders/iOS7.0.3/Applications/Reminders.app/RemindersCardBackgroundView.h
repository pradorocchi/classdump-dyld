/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol RemindersCardViewDelegate;
@class RemindersScrollingBackgroundView, UIView, CALayer, NSLayoutConstraint, NSArray, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIInterpolatingMotionEffect, NSString, ;

@interface RemindersCardBackgroundView : UIView <UIGestureRecognizerDelegate> {

	RemindersScrollingBackgroundView* _scrollingTextureView;
	UIView* _maskingView;
	UIView* _dimmingView;
	CALayer* _cardLayer;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSArray* _scrollingTextureMaskConstraints;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _canPan;
	UIInterpolatingMotionEffect* _horizontalMotionEffect;
	UIInterpolatingMotionEffect* _verticalMotionEffect;
	NSString* _cardControllerID;
	<RemindersCardViewDelegate>* _delegate;
	float _verticalMotionRelativeValue;
	float _horizontalMotionRelativeValue;

}

@property (nonatomic,retain) NSString * cardControllerID;                         //@synthesize cardControllerID=_cardControllerID - In the implementation block
@property (assign,nonatomic) <RemindersCardViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float verticalMotionRelativeValue;                   //@synthesize verticalMotionRelativeValue=_verticalMotionRelativeValue - In the implementation block
@property (assign,nonatomic) float horizontalMotionRelativeValue;                 //@synthesize horizontalMotionRelativeValue=_horizontalMotionRelativeValue - In the implementation block
+(id)roundedTextureImage;
+(UIEdgeInsets)edgeInsets;
-(void)useScrollingTexture:(BOOL)arg1 ;
-(void)setHeight:(float)arg1 animated:(BOOL)arg2 ;
-(id)cardControllerID;
-(void)setCardControllerID:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)setDimmer:(float)arg1 animated:(BOOL)arg2 ;
-(void)setHorizontalMotionRelativeValue:(float)arg1 ;
-(void)setVerticalMotionRelativeValue:(float)arg1 ;
-(void)setHorizontalMotionEnabled:(BOOL)arg1 ;
-(void)setVerticalMotionEnabled:(BOOL)arg1 ;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_removePanAndLongPressGestureRecognizers;
-(float)verticalMotionRelativeValue;
-(float)horizontalMotionRelativeValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGRect)contentRect;
-(void)_handlePanGesture:(id)arg1 ;
-(void).cxx_destruct;
@end

