/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXInterestAreaClippedViewDelegate;
@class , UIBezierPath, UIView;

@interface GAXInterestAreaClippedView : UIView {

	<GAXInterestAreaClippedViewDelegate>* _delegate;
	UIBezierPath* _clippingPath;
	float _backgroundPatternScaleFactor;
	UIView* _backgroundView;

}

@property (assign,nonatomic) <GAXInterestAreaClippedViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIBezierPath * clippingPath;                                    //@synthesize clippingPath=_clippingPath - In the implementation block
@property (assign,nonatomic) CGSize backgroundSize; 
@property (assign,nonatomic) float backgroundPatternScaleFactor;                           //@synthesize backgroundPatternScaleFactor=_backgroundPatternScaleFactor - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)_updateMaskLayer;
-(CGPoint)_centerForBackground;
-(void)_updateMaskLayerFrame;
-(void)_updateBackgroundViewCenter;
-(void)setBackgroundPatternScaleFactor:(float)arg1 ;
-(void)setBackgroundSize:(CGSize)arg1 ;
-(float)backgroundPatternScaleFactor;
-(void)setClippingPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(void)_commonInit;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(CGSize)backgroundSize;
-(id)clippingPath;
@end

