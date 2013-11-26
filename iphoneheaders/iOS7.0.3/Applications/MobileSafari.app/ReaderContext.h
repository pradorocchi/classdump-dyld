/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/safarifetcherd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ReaderControllerDelegate;
#import <safarifetcherd/safarifetcherd-Structs.h>
@class WebView, NSTimer, ;

@interface ReaderContext : NSObject {

	int _retainCount;
	ReaderController* _readerController;
	ReaderJSController* _readerJSController;
	WebView* _webView;
	NSTimer* _clearUnusedReaderResourcesTimer;
	<ReaderControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) WebView * webView;                                //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) ReaderController* readerController;               //@synthesize readerController=_readerController - In the implementation block
@property (assign,nonatomic) <ReaderControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isLoadingNextPage;
-(id)mailingAndPrintingFrame;
-(BOOL)isReaderAvailable;
-(void)stopLoadingNextPage;
-(BOOL)hasMultiplePages;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)createArticleFinder;
-(ReaderController*)readerController;
-(void)loadReaderDocument;
-(void)_clearReaderViewAndController;
-(void)cancelClearUnusedReaderResourcesTimer;
-(id)readerURL;
-(void)_clearUnusedReaderResources;
-(int)readerOperationMode;
-(BOOL)networkIsReachable;
-(void)initReaderJSController:(id)arg1 ;
-(void)createWebViewIfNeededWithPreferences:(id)arg1 ;
-(void)clearAvailability;
-(ReaderJSController*)_readerJSController;
-(void)loadNewArticle;
-(void)clearUnusedReaderResourcesSoon;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned)retainCount;
-(id)delegate;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithWebView:(id)arg1 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
@end

