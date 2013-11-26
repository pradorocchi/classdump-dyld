/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <CoreFoundation/NSCoding.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIWebViewInternal, UIScrollView, NSURLRequest;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {

	UIWebViewInternal* _internal;

}

@property (assign,nonatomic) <UIWebViewDelegate> * delegate; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) NSURLRequest * request; 
@property (getter=canGoBack,nonatomic,readonly) BOOL canGoBack; 
@property (getter=canGoForward,nonatomic,readonly) BOOL canGoForward; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (assign,nonatomic) BOOL scalesPageToFit; 
@property (assign,nonatomic) BOOL detectsPhoneNumbers; 
@property (assign,nonatomic) unsigned dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsInlineMediaPlayback; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (assign,nonatomic) BOOL mediaPlaybackAllowsAirPlay; 
@property (assign,nonatomic) BOOL suppressesIncrementalRendering; 
@property (assign,nonatomic) BOOL keyboardDisplayRequiresUserAction; 
@property (assign,nonatomic) int paginationMode; 
@property (assign,nonatomic) int paginationBreakingMode; 
@property (assign,nonatomic) float pageLength; 
@property (assign,nonatomic) float gapBetweenPages; 
@property (nonatomic,readonly) unsigned pageCount; 
+(void)initialize;
+(id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned)arg2 ;
+(void)_fixPathsForSandboxDirectoryChange;
+(void)_updatePersistentStoragePaths;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(CGImageRef)createSnapshotWithRect:(CGRect)arg1 ;
-(BOOL)_appliesExclusiveTouchToSubviewTree;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(Class)_printFormatterClass;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg1 ;
-(void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(id)_scrollView;
-(void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)mediaPlaybackAllowsAirPlay;
-(id)request;
-(void)setDetectsPhoneNumbers:(BOOL)arg1 ;
-(BOOL)detectsPhoneNumbers;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(BOOL)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(BOOL)arg1 ;
-(unsigned)pageCount;
-(id)_documentView;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(BOOL)scalesPageToFit;
-(BOOL)isLoading;
-(void)_updateViewSettings;
-(id)_browserView;
-(void)_setScalesPageToFitViewportSettings;
-(void)_setRichTextReaderViewportSettings;
-(void)_updateBrowserViewExposedScrollViewRect;
-(void)_updateCheckeredPattern;
-(void)_setDrawInWebThread:(BOOL)arg1 ;
-(void)_updateOpaqueAndBackgroundColor;
-(void)_didRotate:(id)arg1 ;
-(void)setScalesPageToFit:(BOOL)arg1 ;
-(void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(BOOL)arg2 shouldEnableReachability:(BOOL)arg3 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(void)setAllowsInlineMediaPlayback:(BOOL)arg1 ;
-(BOOL)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(BOOL)mediaPlaybackRequiresUserAction;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)_rescaleDocument;
-(void)_frameOrBoundsChanged;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(void)_didCompleteScrolling;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)_reportError:(id)arg1 ;
-(void)_updateRequest;
-(id)_makeAlertView;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(int)paginationMode;
-(int)_paginationMode;
-(void)setPaginationMode:(int)arg1 ;
-(void)_setPaginationMode:(int)arg1 ;
-(int)paginationBreakingMode;
-(BOOL)_paginationBehavesLikeColumns;
-(void)setPaginationBreakingMode:(int)arg1 ;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(float)pageLength;
-(float)_pageLength;
-(void)setPageLength:(float)arg1 ;
-(void)_setPageLength:(float)arg1 ;
-(float)gapBetweenPages;
-(float)_gapBetweenPages;
-(void)setGapBetweenPages:(float)arg1 ;
-(void)_setGapBetweenPages:(float)arg1 ;
-(unsigned)_pageCount;
-(BOOL)keyboardDisplayRequiresUserAction;
-(void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 enableReachability:(BOOL)arg2 ;
-(id)scrollView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_beginRotation;
-(void)_finishRotation;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3 ;
-(void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4 ;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned)arg3 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webViewSupportedOrientationsUpdated:(id)arg1 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(BOOL)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4 ;
-(id)_initWithWebView:(id)arg1 ;
-(id)_pdfViewHandler;
-(void)_setOverridesOrientationChangeEventHandling:(BOOL)arg1 ;
-(void)_setDrawsCheckeredPattern:(BOOL)arg1 ;
-(void)_setWebSelectionEnabled:(BOOL)arg1 ;
-(void)_setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(BOOL)_alwaysDispatchesScrollEvents;
-(void)_setAudioSessionCategoryOverride:(unsigned)arg1 ;
-(unsigned)_audioSessionCategoryOverride;
-(void)_setNetworkInterfaceName:(id)arg1 ;
-(id)_networkInterfaceName;
-(void)configureWithSettings:(id)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

