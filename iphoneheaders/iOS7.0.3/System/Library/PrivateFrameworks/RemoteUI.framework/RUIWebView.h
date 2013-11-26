/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RemoteUI/RUIElement.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString, NSURL;

@interface RUIWebView : RUIElement <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _html;
	NSURL* _baseURL;
	id _delegate;

}

@property (nonatomic,copy) NSString * html;                //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
-(id)sourceURL;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)baseURL;
-(void)setBaseURL:(id)arg1 ;
-(id)userStyleSheet;
-(id)html;
-(void)setHtml:(id)arg1 ;
@end

