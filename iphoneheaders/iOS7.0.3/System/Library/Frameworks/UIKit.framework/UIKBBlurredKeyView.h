/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>

@class UIKBKeyView, UIKBBackdropView;

@interface UIKBBlurredKeyView : UIKBKeyView {

	UIKBKeyView* _keyView;
	UIKBBackdropView* _backdropView;

}
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)renderConfig;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)key;
-(void)displayLayer:(id)arg1 ;
-(void)setDrawFrame:(CGRect)arg1 ;
-(id)keyplane;
-(void)dimKeyCaps:(float)arg1 duration:(float)arg2 ;
-(CGRect)drawFrame;
@end

