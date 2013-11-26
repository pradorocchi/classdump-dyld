/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol QLDelayedScrollViewDelegate;
@class ;

@interface QLDelayedScrollView : UIScrollView {

	<QLDelayedScrollViewDelegate>* _delayedScrollViewDelegate;
	CGRect _newFrame;
	CGRect _newBounds;
	BOOL _isRotating;
	CGRect _oldScrollerBounds;
	CGRect _rotationRect;
	unsigned _rotationEdgePin;
	float _oldWidth;

}
-(void)_setIsRotating:(BOOL)arg1 ;
-(void)_centerRotationRectWithWebViewToScale:(id)arg1 ;
-(void)_redrawWebView:(id)arg1 withOldWidth:(float)arg2 andNewSize:(CGSize)arg3 enablingTileDrawing:(BOOL)arg4 ;
-(void)didRotateToInterfaceOrientation:(int)arg1 ;
-(void)setDelayedScrollViewDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
@end

