/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <MessageUI/MFMailComposeRemoteViewControllerDelegate.h>

@protocol MFMailComposeViewControllerDelegate;
@class , MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, _UIAsyncInvocation, NSMutableDictionary, NSMutableArray, NSString, NSError;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate> {

	<MFMailComposeViewControllerDelegate>* _mailComposeDelegate;
	MFMailComposePlaceholderViewController* _placeholderViewController;
	MFMailComposeRemoteViewController* _serviceViewController;
	_UIAsyncInvocation* _cancellationInvocation;
	NSMutableDictionary* _compositionValues;
	NSMutableArray* _attachments;
	NSString* _placeholderSubject;
	int _composeResult;
	NSError* _composeResultError;
	double _presentationDelayBeganTimestamp;
	unsigned _hasDelayedPresentation : 1;
	unsigned _didEndDelayedPresentation : 1;
	unsigned _compositionValuesAreFinalized : 1;
	unsigned _remoteViewControllerIsConfigured : 1;
	unsigned _isAppearing : 1;
	unsigned _didAppear : 1;
	unsigned _didFinish : 1;
	unsigned _delegateRespondsToBodyFinishedLoadingWithResult : 1;
	id _autorotationDelegate;

}

@property (assign,nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate;              //@synthesize mailComposeDelegate=_mailComposeDelegate - In the implementation block
@property (assign,nonatomic) id autorotationDelegate;                                                  //@synthesize autorotationDelegate=_autorotationDelegate - In the implementation block
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setShowKeyboardImmediately:(BOOL)arg1 ;
-(id)mailComposeDelegate;
-(void)_serviceViewControllerReady:(id)arg1 error:(id)arg2 ;
-(void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1 ;
-(void)_cancelComposition:(id)arg1 ;
-(void)_notifyCompositionDidFinish;
-(void)_beginDelayingCompositionPresenation;
-(double)_delayedPresentationTimeout;
-(void)_didEndDelayingCompositionPresentation;
-(void)_configureRemoteViewContoller;
-(void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1 ;
-(void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1 ;
-(void)compositionFinishedWithResult:(int)arg1 error:(id)arg2 ;
-(void)_endDelayingCompositionPresentation;
-(void)_cancelRemoteServiceViewControllerRequest;
-(void)_setCompositionValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setPlaceHolderSubject:(id)arg1 ;
-(void)compositionViewServiceTerminatedWithError:(id)arg1 ;
-(id)autorotationDelegate;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/ id)arg1 ;
-(void)setAutosaveIdentifier:(id)arg1 ;
-(void)setMailComposeDelegate:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 ;
-(id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/ id)arg2 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)setAutorotationDelegate:(id)arg1 ;
-(void)finalizeCompositionValues;
-(void)setToRecipients:(id)arg1 ;
@end

