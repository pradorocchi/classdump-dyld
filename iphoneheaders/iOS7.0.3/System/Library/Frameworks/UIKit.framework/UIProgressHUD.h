/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIProgressIndicator, UILabel, UIImageView, UIWindow;

@interface UIProgressHUD : UIView {

	UIProgressIndicator* _progressIndicator;
	UILabel* _progressMessage;
	UIImageView* _doneView;
	UIWindow* _parentWindow;
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	}  _progressHUDFlags;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setFontSize:(int)arg1 ;
-(void)hide;
-(id)_progressIndicator;
-(void)setShowsText:(BOOL)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)done;
-(id)initWithWindow:(id)arg1 ;
-(void)show:(BOOL)arg1 ;
@end

