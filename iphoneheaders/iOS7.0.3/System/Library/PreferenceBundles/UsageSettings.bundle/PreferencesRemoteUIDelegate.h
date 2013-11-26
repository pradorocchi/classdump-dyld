/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>
#import <AppleAccountUI/RUILoaderDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol DelayedPushDelegate;
@class UINavigationController, NSMutableArray, RUILoader, NSOperationQueue, PreferencesRemoteUIDelegateTableCellButton, UIAlertView, UIActionSheet, CommerceRemoteUIDelegate, ;

@interface PreferencesRemoteUIDelegate : NSObject <RUIObjectModelDelegate, RUILoaderDelegate, UIAlertViewDelegate, UIActionSheetDelegate> {

	UINavigationController* _navigationController;
	NSMutableArray* _objectModels;
	RUILoader* _loader;
	NSMutableArray* _deleteLoaders;
	NSOperationQueue* _deleteQueue;
	PreferencesRemoteUIDelegateTableCellButton* _button;
	UIAlertView* _alertView;
	UIActionSheet* _actionSheet;
	CommerceRemoteUIDelegate* _commerceDelegate;
	<DelayedPushDelegate>* _delegate;
	int _forceActionSignal;
	BOOL _preventPresentation;
	int _deleteAllDocumentsAttemptCount;
	RUILoader* _lastDocumentDeleteLoader;

}

@property (assign,nonatomic) <DelayedPushDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL preventPresentation;                      //@synthesize preventPresentation=_preventPresentation - In the implementation block
@property (retain) RUILoader * lastDocumentDeleteLoader;                    //@synthesize lastDocumentDeleteLoader=_lastDocumentDeleteLoader - In the implementation block
-(void)loadQuotaInfo;
-(void)cleanupLoader;
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg1 ;
-(void)popAndReloadFromRemoteUI:(BOOL)arg1 additionalHeaders:(id)arg2 ;
-(void)setPreventPresentation:(BOOL)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 additionalHeaders:(id)arg3 ;
-(void)willShowController:(id)arg1 ;
-(void)setLastDocumentDeleteLoader:(id)arg1 ;
-(void)deleteAllDocuments;
-(void)confirmationConfirmed:(id)arg1 ;
-(void)confirmationCanceled:(id)arg1 ;
-(void)confirmDeleteWithTitle:(id)arg1 prompt:(id)arg2 explaination:(id)arg3 andContext:(id)arg4 ;
-(void)confirmDeleteAll;
-(id)lastDocumentDeleteLoader;
-(void)reloadQuotaInfo;
-(BOOL)preventPresentation;
-(id)initWithNavigationController:(id)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(BOOL)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
@end

