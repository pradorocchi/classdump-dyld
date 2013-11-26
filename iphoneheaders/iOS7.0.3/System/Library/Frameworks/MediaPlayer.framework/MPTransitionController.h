/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIView, NSMutableSet, MPViewController, UIViewController;

@interface MPTransitionController : NSObject {

	CFDictionaryRef _observers;
	float _duration;
	UIView* _rootView;
	NSMutableSet* _persistentViewsToFadeOut;
	NSMutableSet* _viewsToFadeOut;
	NSMutableSet* _persistentViewsToFadeIn;
	NSMutableSet* _viewsToFadeIn;
	MPViewController* _fromViewController;
	int _fromInterfaceOrientation;
	MPViewController* _toViewController;
	int _toInterfaceOrientation;
	UIViewController* _toContainerViewController;

}

@property (assign,nonatomic) float duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int fromInterfaceOrientation;                              //@synthesize fromInterfaceOrientation=_fromInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * fromViewController;                     //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                         //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) int toInterfaceOrientation;                                //@synthesize toInterfaceOrientation=_toInterfaceOrientation - In the implementation block
@property (nonatomic,retain) MPViewController * toViewController;                       //@synthesize toViewController=_toViewController - In the implementation block
@property (nonatomic,retain) UIViewController * toContainerViewController;              //@synthesize toContainerViewController=_toContainerViewController - In the implementation block
-(void)addObserver:(id)arg1 didEndSelector:(SEL)arg2 ;
-(void)transition:(unsigned)arg1 ;
-(void)performTransition:(unsigned)arg1 ;
-(id)rootView;
-(void)setToContainerViewController:(id)arg1 ;
-(void)fadeViewsForRestore:(BOOL)arg1 ;
-(void)didFinishTransition:(BOOL)arg1 ;
-(void)setToInterfaceOrientation:(int)arg1 ;
-(void)setFromInterfaceOrientation:(int)arg1 ;
-(id)toContainerViewController;
-(void)messageObserversWithSuccess:(BOOL)arg1 ;
-(void)willBeginTransition:(unsigned)arg1 ;
-(void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2 ;
-(void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2 ;
-(int)fromInterfaceOrientation;
-(void)setFromViewController:(id)arg1 ;
-(void)setRootView:(id)arg1 ;
-(int)toInterfaceOrientation;
-(void)setToViewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)fromViewController;
-(id)toViewController;
-(void).cxx_destruct;
@end

