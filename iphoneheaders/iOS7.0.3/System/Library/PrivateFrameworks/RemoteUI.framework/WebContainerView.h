/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class UIWebView;

@interface WebContainerView : UIView {

	UIWebView* _webView;
	BOOL _highlighted;
	BOOL _reallyHighlighted;

}

@property (nonatomic,retain) UIWebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(id)webView;
-(void)setWebView:(id)arg1 ;
-(void)_setHighlightedNow;
@end

