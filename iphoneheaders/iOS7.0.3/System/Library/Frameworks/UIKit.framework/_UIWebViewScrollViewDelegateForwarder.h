/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class , UIWebView;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

	<UIScrollViewDelegate>* _delegate;
	UIWebView* _webView;

}

@property (assign,nonatomic) <UIScrollViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIWebView * webView;                            //@synthesize webView=_webView - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)webView;
-(void)forwardInvocation:(id)arg1 ;
-(void)setWebView:(id)arg1 ;
@end

