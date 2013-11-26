/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLPreviewItem, QLPreviewContentControllerProtocol;
@class , NSString, QLPreviewItemsSource, UIViewController, _UIAsyncInvocation, NSTimer, UINavigationController, UIBarButtonItem, UILabel, MPVolumeView, UIView, NSNumberFormatter, QLArchiveViewer, UIDocumentInteractionController, NSMutableDictionary;

@interface QLPreviewControllerReserved : NSObject {

	<QLPreviewItem>* previewItem;
	id delegate;
	BOOL blockRemoteImages;
	BOOL useCustomActionButton;
	BOOL showActionAsDefaultButton;
	NSString* loadingTextForMissingFiles;
	int mode;
	QLPreviewItemsSource* itemsSource;
	UIViewController<QLPreviewContentControllerProtocol>* previewContentController;
	_UIAsyncInvocation* cancelViewServiceRequest;
	NSTimer* timeoutTimer;
	/*^block*/ id readyBlock;
	int previousToolbarStyle;
	BOOL previousToolbarWasTranslucent;
	BOOL previousNavBarWasTranslucent;
	int previousStatusBarStyle;
	UINavigationController* navigationController;
	int overlayState;
	UIBarButtonItem* archiveItem;
	UIBarButtonItem* listItem;
	UIBarButtonItem* titleItem;
	UIBarButtonItem* actionItem;
	BOOL scrubbing;
	UIBarButtonItem* indexItem;
	UILabel* indexLabel;
	UIBarButtonItem* playPauseButton;
	UIBarButtonItem* routeButton;
	MPVolumeView* volumeView;
	MPVolumeView* volumeViewHidden;
	BOOL internalViewsLoaded;
	UIView* mainView;
	unsigned statusBarWasHidden : 1;
	unsigned toolbarWasHidden : 1;
	unsigned isInUIDICPopover : 1;
	NSNumberFormatter* indexFormatter;
	QLArchiveViewer* archiveViewer;
	UIDocumentInteractionController* interactionController;
	NSMutableDictionary* pdfPreviewDataCache;
	NSMutableDictionary* avStateForPreviewItems;
	BOOL sourceIsManaged;

}
-(void)dealloc;
-(id)init;
@end

