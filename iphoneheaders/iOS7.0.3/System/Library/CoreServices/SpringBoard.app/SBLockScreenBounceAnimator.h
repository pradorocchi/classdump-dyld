/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBResponderTouchDelegate.h>

@class NSMutableSet, UIView, SBBouncingSystem, UIDynamicAnimator, SBBouncingItem, SBBounceBehavior, UIGestureRecognizer, SBBounceSettings, NSSet;

@interface SBLockScreenBounceAnimator : NSObject <UIDynamicAnimatorDelegate, _UISettingsKeyObserver, SBResponderTouchDelegate> {

	NSMutableSet* _tapExcludedViews;
	BOOL _isAnimating;
	BOOL _bounceEnabled;
	UIView* _view;
	SBBouncingSystem* _system;
	UIDynamicAnimator* _animator;
	SBBouncingItem* _item;
	SBBounceBehavior* _behavior;
	UIGestureRecognizer* _tapRecognizer;
	UIGestureRecognizer* _panRecognizer;
	/*^block*/ id _prepareBlock;
	/*^block*/ id _translateBlock;
	/*^block*/ id _canceledBlock;
	/*^block*/ id _completedBlock;
	SBBounceSettings* _settings;

}

@property (copy) id prepareBlock;                                      //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (copy) id translateBlock;                                    //@synthesize translateBlock=_translateBlock - In the implementation block
@property (copy) id canceledBlock;                                     //@synthesize canceledBlock=_canceledBlock - In the implementation block
@property (copy) id completedBlock;                                    //@synthesize completedBlock=_completedBlock - In the implementation block
@property (nonatomic,retain) SBBounceSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
-(void)setBounceEnabled:(BOOL)arg1 ;
-(void)removeTapExcludedView:(id)arg1 ;
-(void)addTapExcludedView:(id)arg1 ;
-(id)initWithView:(id)arg1 allowPan:(BOOL)arg2 ;
-(void)setTranslateBlock:(/*^block*/ id)arg1 ;
-(void)setCompletedBlock:(/*^block*/ id)arg1 ;
-(void)setCanceledBlock:(/*^block*/ id)arg1 ;
-(void)cancelAnimation;
-(void)setPrepareBlock:(/*^block*/ id)arg1 ;
-(void)_createAnimator;
-(void)_addTapRecognizer;
-(void)_addPanRecognizer;
-(void)_removeAnimator;
-(void)_resetAnimator;
-(void)_removeTapRecognizer;
-(void)_beginAnimating;
-(void)responder:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)responder:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3 ;
-(void)responder:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3 ;
-(id)tapExcludedViews;
-(/*^block*/ id)prepareBlock;
-(/*^block*/ id)translateBlock;
-(/*^block*/ id)canceledBlock;
-(/*^block*/ id)completedBlock;
-(void)dealloc;
-(BOOL)isAnimating;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)_updateSettings;
@end

