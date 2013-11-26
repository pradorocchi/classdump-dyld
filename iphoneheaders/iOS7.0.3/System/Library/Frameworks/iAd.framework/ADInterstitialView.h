/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@class ADInterstitialAd, ADTapGestureRecognizer, ADRemoteView, UIView;

@interface ADInterstitialView : UIView {

	ADInterstitialAd* _interstitialAd;
	BOOL _dimmed;
	ADTapGestureRecognizer* _tapGestureRecognizer;
	ADRemoteView* _remoteView;
	UIView* _dimmerView;
	ADTapGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) ADTapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) ADRemoteView * remoteView;                                    //@synthesize remoteView=_remoteView - In the implementation block
@property (nonatomic,retain) UIView * dimmerView;                                          //@synthesize dimmerView=_dimmerView - In the implementation block
@property (nonatomic,retain) ADTapGestureRecognizer * gestureRecognizer;                   //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                  //@synthesize dimmed=_dimmed - In the implementation block
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(void)setGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizer;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setRemoteView:(id)arg1 ;
-(id)remoteView;
-(void)setRemoteWindowContextId:(unsigned)arg1 ;
-(id)dimmerView;
-(void)setDimmerView:(id)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(id)tapGestureRecognizer;
-(void)_gestureHandler:(id)arg1 ;
-(id)interstitialAd;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

