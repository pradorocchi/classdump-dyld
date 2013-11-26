/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/WBSFluidProgressControllerDelegate.h>

@protocol FluidProgressViewDelegate;
@class UIView, ;

@interface FluidProgressView : UIView <WBSFluidProgressControllerDelegate> {

	UIView* _progressBar;
	BOOL _progressAnimationSuppressed;
	float _progress;
	<FluidProgressViewDelegate>* _delegate;

}

@property (assign,nonatomic) BOOL progressAnimationSuppressed;                             //@synthesize progressAnimationSuppressed=_progressAnimationSuppressed - In the implementation block
@property (assign,nonatomic) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) <FluidProgressViewDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingProgress,nonatomic,readonly) BOOL showingProgress; 
-(void)setProgressBarFillColor:(id)arg1 ;
-(CGRect)_progressBarBoundsForValue:(double)arg1 ;
-(void)_finishProgressBarWithDuration:(double)arg1 ;
-(void)_animateUsingDefaultTiming:(BOOL)arg1 stepAnimationTime:(float)arg2 options:(unsigned)arg3 animations:(/*^block*/ id)arg4 completion:(/*^block*/ id)arg5 ;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 duringFluidProgressState:(id)arg2 ;
-(BOOL)isShowingProgress;
-(BOOL)progressAnimationSuppressed;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)delegate;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2 ;
-(void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2 ;
-(void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 ;
@end

