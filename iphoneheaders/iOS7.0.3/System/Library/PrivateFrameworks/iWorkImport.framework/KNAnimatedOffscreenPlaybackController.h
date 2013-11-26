/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNDocumentRoot, KNPlaybackSession, KNAnimatedSlideView, NSMutableSet, CALayer, KNSlideNode, NSSet;

@interface KNAnimatedOffscreenPlaybackController : NSObject <TSDCanvasDelegate> {

	KNDocumentRoot* mDocumentRoot;
	KNPlaybackSession* mSession;
	KNAnimatedSlideView* mAnimator;
	NSMutableSet* mActiveBuildRenderers;
	NSMutableSet* mMovieRenderers;
	double mCurrentEventAnimationsStartTime;
	double mCurrentEventAnimationsNonDelayedEndTime;
	double mCurrentEventAnimationsDelay;
	double mCurrentEventPauseStartTime;
	int mConcealingStyle;
	CALayer* mConcealingLayer;
	BOOL mIsAnimating;
	BOOL mIsPaused;

}

@property (nonatomic,readonly) KNDocumentRoot * documentRoot; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned currentEventIndex; 
@property (nonatomic,readonly) KNSlideNode * firstSlideNode; 
@property (nonatomic,readonly) KNSlideNode * nextSlideNode; 
@property (nonatomic,readonly) unsigned currentSlideNodeEventCount; 
@property (nonatomic,readonly) NSSet * movieRenderers; 
-(id)currentSlideNode;
-(void)p_invalidateAnimator;
-(void)p_renderCurrentEvent;
-(unsigned)currentEventIndex;
-(id)firstSlideNode;
-(BOOL)p_isCurrentEventTransition;
-(void)p_addAnimationsForBuildRenderer:(id)arg1 atBuildStartTime:(double)arg2 relativeToTime:(double)arg3 ;
-(void)pauseCurrentEventAnimationsWithConcealingStyle:(int)arg1 atLayerTime:(double)arg2 ;
-(void)p_updateConcealingStyle:(int)arg1 atTime:(double)arg2 ;
-(void)p_animateConcealingLayerToOpacity:(float)arg1 fromDefaultOpacity:(float)arg2 atTime:(double)arg3 ;
-(id)initWithDocumentRoot:(id)arg1 layerSize:(CGSize)arg2 ;
-(void)gotoSlideNode:(id)arg1 eventIndex:(unsigned)arg2 resetBuildTextures:(BOOL)arg3 ;
-(id)nextSlideNode;
-(unsigned)currentSlideNodeEventCount;
-(void)beginCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)updateCurrentEventAnimationsForLayerTime:(double)arg1 ;
-(void)endCurrentEventAnimations;
-(double)currentEventAnimationsRemainingTimeAfterLayerTime:(double)arg1 ;
-(void)pauseCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)resumeCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)updateMovieRenderersForLayerTime:(double)arg1 ;
-(id)movieRenderers;
-(void)dealloc;
-(id)layer;
-(id)init;
-(void)invalidate;
-(id)documentRoot;
@end

