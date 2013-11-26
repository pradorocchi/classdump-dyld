/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Social/SLSheetViewHostProtocol.h>

@class NSLayoutConstraint, UIView, NSMutableDictionary, SLService, NSString, SLRemoteComposeViewController;

@interface SLComposeViewController : UIViewController <SLSheetViewHostProtocol> {

	NSLayoutConstraint* _keyboardTopConstraint;
	UIView* _keyboardTrackingView;
	int _savedStatusBarStyle;
	NSMutableDictionary* _delayedActions;
	BOOL _wasPresented;
	/*^block*/ id _completionHandler;
	BOOL _didFailLoadingRemoteViewController;
	SLService* _service;
	int _numVideosAdded;
	int _numImagesAdded;
	int _numURLsAdded;
	NSString* _serviceType;
	SLRemoteComposeViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSString * serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) SLRemoteComposeViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(BOOL)configurationSupportsShareSheetOfType:(id)arg1 ;
+(BOOL)canShareItems:(id)arg1 forServiceType:(id)arg2 ;
+(BOOL)isAvailableForServiceType:(id)arg1 ;
+(id)composeViewControllerForServiceType:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(id)initWithServiceViewControllerClassName:(id)arg1 hostingBundleIdentifer:(id)arg2 ;
-(void)loadServiceViewControllerWithClassName:(id)arg1 fromServiceBundleWithIdentifier:(id)arg2 ;
-(void)remoteViewControllerLoadDidTimeout;
-(BOOL)canAddContent;
-(void)_addDelayedAction:(/*^block*/ id)arg1 forEvent:(id)arg2 ;
-(int)_countForAttachmentType:(int)arg1 ;
-(int)_limitForAttachmentType:(int)arg1 ;
-(id)_urlForUntypedAsset:(id)arg1 ;
-(void)_resetAttachmentCountForType:(int)arg1 ;
-(BOOL)_canAddAttachment:(id)arg1 ;
-(void)_incrementAttachmentCountForType:(int)arg1 ;
-(void)_performActionsForEvent:(id)arg1 ;
-(void)completeWithResult:(int)arg1 ;
-(void)remoteController:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)_handleRemoteViewFailure;
-(void)didLoadSheetViewController;
-(BOOL)supportsVideoAsset:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(id)_delayedActions;
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_useCustomDimmingView;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)removeAllImages;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(id)remoteViewController;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)supportsImageAsset:(id)arg1 ;
-(BOOL)addImageAsset:(id)arg1 ;
-(/*^block*/ id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(BOOL)addAttachment:(id)arg1 ;
-(BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2 ;
-(BOOL)addURL:(id)arg1 ;
-(id)serviceType;
-(void)userDidCancel;
-(void)userDidPost;
-(void)sheetFailedWithError:(id)arg1 ;
-(void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2 ;
-(void)shouldShowNetworkActivityIndicator:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)removeAllURLs;
-(BOOL)canSendTweet;
@end

