/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <PhotosUI/PLAlbumStreamingOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotosUI/PUVideoTrimQueueControllerDelegate.h>
#import <PhotosUI/PUPhotoStreamComposeServiceDelegate.h>

@class PUPhotosPickerViewController, PUVideoTrimQueueController, PUPhotoStreamComposeServiceViewController, UIViewController, UIBarButtonItem, UIPopoverController, UISegmentedControl, PLCloudSharedAlbum;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PLAlbumStreamingOptionsViewControllerDelegate, UIPopoverControllerDelegate, PUVideoTrimQueueControllerDelegate, PUPhotoStreamComposeServiceDelegate> {

	PUPhotosPickerViewController* _activePhotosPickerViewController;
	PUVideoTrimQueueController* _trimController;
	PUPhotoStreamComposeServiceViewController* _composeServiceController;
	BOOL _displayingOptions;
	BOOL __canContributeToCloudSharedAlbum;
	UIViewController* __optionsViewController;
	UIBarButtonItem* __optionsBarButtonItem;
	UIPopoverController* __optionsPopoverController;
	UISegmentedControl* __switcherSegmentedControl;
	UIBarButtonItem* __switcherBarButtonItem;
	int __selectedItemIndex;

}

@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (assign,setter=setDisplayingOptions:,getter=isDisplayingOptions,nonatomic) BOOL displayingOptions;                    //@synthesize displayingOptions=_displayingOptions - In the implementation block
@property (setter=_setOptionsViewController:,nonatomic,retain) UIViewController * _optionsViewController;                       //@synthesize _optionsViewController=__optionsViewController - In the implementation block
@property (setter=_setOptionsBarButtonItem:,nonatomic,retain) UIBarButtonItem * _optionsBarButtonItem;                          //@synthesize _optionsBarButtonItem=__optionsBarButtonItem - In the implementation block
@property (setter=_setOptionsPopoverController:,nonatomic,retain) UIPopoverController * _optionsPopoverController;              //@synthesize _optionsPopoverController=__optionsPopoverController - In the implementation block
@property (assign,setter=_setCanContributeToCloudSharedAlbum:,nonatomic) BOOL _canContributeToCloudSharedAlbum;                 //@synthesize _canContributeToCloudSharedAlbum=__canContributeToCloudSharedAlbum - In the implementation block
@property (setter=_setSwitcherSegmentedControl:,nonatomic,retain) UISegmentedControl * _switcherSegmentedControl;               //@synthesize _switcherSegmentedControl=__switcherSegmentedControl - In the implementation block
@property (setter=_setSwitcherBarButtonItem:,nonatomic,retain) UIBarButtonItem * _switcherBarButtonItem;                        //@synthesize _switcherBarButtonItem=__switcherBarButtonItem - In the implementation block
@property (assign,setter=_setSelectedItemIndex:,nonatomic) int _selectedItemIndex;                                              //@synthesize _selectedItemIndex=__selectedItemIndex - In the implementation block
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setAlbum:(NSObject*)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(BOOL)wantsGlobalFooter;
-(void)configureGlobalFooterView:(id)arg1 ;
-(BOOL)canDeleteContent;
-(BOOL)wantsAddContentInToolbar;
-(BOOL)canAddToOtherAlbumContent;
-(BOOL)wantsAddPlaceholderAtEndOfSection:(int)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowToolbar;
-(BOOL)shouldShowTabBar;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(id)newToolbarItems;
-(void)didSelectAddPlaceholderInSection:(int)arg1 ;
-(int)_selectedItemIndex;
-(void)controller:(id)arg1 didFinishTrimmingAssets:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingAssets:(id)arg2 ;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(void)_setCanContributeToCloudSharedAlbum:(BOOL)arg1 ;
-(BOOL)_shouldShowOptionsSwitcherInToolbar;
-(void)_handleSwitcherSegmentedControl:(id)arg1 ;
-(void)_setSwitcherSegmentedControl:(id)arg1 ;
-(void)_setSwitcherBarButtonItem:(id)arg1 ;
-(BOOL)_appAllowsSupressionOfAlerts;
-(id)_suppressionContexts;
-(void)_dismissOptionsPopoverAnimated:(BOOL)arg1 ;
-(void)_updateOptionsViewInsets;
-(BOOL)_canContributeToCloudSharedAlbum;
-(id)_switcherBarButtonItem;
-(BOOL)_canDisplayOptions;
-(void)_updateOptionsView;
-(BOOL)isDisplayingOptions;
-(id)_optionsViewController;
-(id)_newOptionsViewController;
-(void)_setOptionsViewController:(id)arg1 ;
-(id)_optionsBarButtonItem;
-(void)_optionsBarButtonItemPressed:(id)arg1 ;
-(void)_setOptionsBarButtonItem:(id)arg1 ;
-(id)_optionsPopoverController;
-(void)_setOptionsPopoverController:(id)arg1 ;
-(void)setDisplayingOptions:(BOOL)arg1 ;
-(void)_setSelectedItemIndex:(int)arg1 ;
-(void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2 ;
-(id)_switcherSegmentedControl;
-(void).cxx_destruct;
@end

