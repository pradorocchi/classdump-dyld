/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CrossFadeView : UIView {

	BOOL _scaleSize;
	UIView* _startView;
	UIView* _endView;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,readonly) UIView * startView;              //@synthesize startView=_startView - In the implementation block
@property (nonatomic,readonly) UIView * endView;                //@synthesize endView=_endView - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;               //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                 //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) BOOL scaleSize;                    //@synthesize scaleSize=_scaleSize - In the implementation block
-(void)setStartView:(id)arg1 ;
-(void)setEndView:(id)arg1 ;
-(void)setToEndState;
-(void)setToStartState;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)scaleSize;
-(id)startView;
-(id)endView;
-(id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(CGRect)arg3 endFrame:(CGRect)arg4 ;
-(void)animateToStartStateWithDuration:(double)arg1 completion:(/*^block*/ id)arg2 ;
-(void)animateToEndStateWithDuration:(double)arg1 completion:(/*^block*/ id)arg2 ;
-(void)springAnimateToStartStateWithTimingFunction:(int)arg1 ;
-(void)springAnimateToEndStateWithTimingFunction:(int)arg1 ;
-(void)haltAnimation;
-(void)setScaleSize:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void).cxx_destruct;
@end

