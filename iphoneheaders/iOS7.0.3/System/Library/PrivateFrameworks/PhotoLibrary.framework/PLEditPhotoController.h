/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/PLImageAdjustmentViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotoLibrary/PLEffectSelectionViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class UIScrollView, UIView, PLImageAdjustmentView, UILabel, UINavigationBar, UIToolbar, PLEffectSelectionViewController, PLProgressHUD, UIActionSheet, UIAlertView, UIPopoverController, NSDictionary, NSUndoManager, NSTimer, NSMutableArray, NSArray, PLManagedAsset, UIImage, CIFilter, NSObject, NSMutableDictionary, CIContext, EAGLContext;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PLEffectSelectionViewControllerDelegate> {

	UIScrollView* _scrollView;
	UIView* _zoomView;
	PLImageAdjustmentView* _editView;
	UILabel* _messageView;
	UINavigationBar* _navigationBar;
	UIToolbar* _toolbar;
	PLEffectSelectionViewController* _effectSelectionViewController;
	PLProgressHUD* _savingHUD;
	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	UIPopoverController* _popover;
	int _initialOrientation;
	NSDictionary* _initialAdjustmentState;
	NSUndoManager* _undoManager;
	NSDictionary* _previousAdjustmentState;
	NSUndoManager* _previousUndoManager;
	NSTimer* _messageTimer;
	NSMutableArray* _navBarItems;
	NSArray* _originalItems;
	PLManagedAsset* _editedPhoto;
	PLManagedAsset* _pendingPhoto;
	UIImage* _adjustedImage;
	NSArray* _autoAdjustmentFilters;
	CGRect _enhanceCalcRect;
	NSArray* _autoRedEyeCorrections;
	CIFilter* _autoRedEyeFilter;
	CIFilter* _redEyeFilter;
	NSArray* _effectFilters;
	CGRect _normalizedCropRect;
	float _straightenAngle;
	float _rotationAngle;
	NSDictionary* _cachedMetadata;
	UIImage* _scaledCachedImage;
	UIImage* _smallThumbnailImage;
	UIImage* _largeThumbnailImage;
	NSObject<OS_dispatch_queue>* _cachedImageQueue;
	/*^block*/ id _didEndZoomingBlock;
	/*^block*/ id _editCompletionBlock;
	/*^block*/ id _actionCompletionBlock;
	unsigned _redEyeCycleCount;
	unsigned _didInitializeNavigationItem : 1;
	unsigned _toolbarWasHidden : 1;
	unsigned _isUserAction : 1;
	unsigned _isCroppingImage : 1;
	unsigned _didTapForRedEyeCorrection : 1;
	unsigned _didEverTapForRedEyeCorrection : 1;
	unsigned _isCanceling : 1;
	unsigned _isOrderedOut : 1;
	unsigned _autoAdjustmentEnabled : 1;
	unsigned _preloadingEnhancementFilters : 1;
	unsigned _applyingAutoEnhance : 1;
	unsigned _modal : 1;
	unsigned _isUsingProxyImage : 1;
	unsigned _shouldPublishToPhotoStreams : 1;
	unsigned _needsFilteredFullSizeImage : 1;
	unsigned _preloadedEffectFilters : 1;
	unsigned _stopPreloadEffectFilters : 1;
	BOOL _supportsEffects;
	unsigned _nextPreloadEffectFilterIndex;
	NSMutableDictionary* _thumbnailCache;
	NSDictionary* _thumbnailCacheAdjustmentState;
	CIContext* _ciContextThumbnails;
	CIContext* _ciContextFullSize;
	CIContext* _ciContextMainThread;
	EAGLContext* _glesContextThumbnails;
	EAGLContext* _glesContextFullSize;
	NSObject<OS_dispatch_queue>* _effectQueueThumbnails;
	NSObject<OS_dispatch_queue>* _effectQueueFullSize;
	int _currentMode;
	BOOL _savesAdjustmentsToCameraRoll;
	BOOL __toolbarHidden;

}

@property (nonatomic,readonly) CGRect normalizedCropRect; 
@property (nonatomic,readonly) float straightenAngle; 
@property (assign,nonatomic) float rotationAngle;                                        //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,nonatomic) BOOL autoAdjustmentEnabled; 
@property (nonatomic,retain) PLManagedAsset * editedPhoto; 
@property (nonatomic,readonly) PLManagedAsset * pendingPhoto; 
@property (nonatomic,retain) UINavigationBar * navigationBar; 
@property (nonatomic,retain) UIToolbar * toolbar; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,copy) id actionCompletionBlock;                                     //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (assign,setter=_setToolbarHidden:,nonatomic) BOOL _toolbarHidden;              //@synthesize _toolbarHidden=__toolbarHidden - In the implementation block
+(void)initialize;
-(void)_setUndoManager:(id)arg1 ;
-(void)dealloc;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(id)navigationBar;
-(id)navigationItem;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(void)undo:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setNavigationBar:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(BOOL)hidesBottomBarWhenPushed;
-(void)setToolbarItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)toolbar;
-(void)setToolbar:(id)arg1 ;
-(id)scrollView;
-(void)_updateButtons;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)save:(id)arg1 ;
-(void)setRotationAngle:(float)arg1 ;
-(float)rotationAngle;
-(id)editedPhoto;
-(id)pendingPhoto;
-(void)cancel:(id)arg1 ;
-(void)updatePendingPhoto;
-(float)zoomToFitScale;
-(void)setMinimumZoom:(float)arg1 maximumZoom:(float)arg2 ;
-(void)zoomToScale:(float)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(BOOL)savesAdjustmentsToCameraRoll;
-(void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)forceCompletion;
-(void)_dismissSavingHUD;
-(BOOL)_dismissPopoverViews;
-(void)_setEditedPhoto:(id)arg1 resetFilters:(BOOL)arg2 ;
-(void)_setEditedImage:(id)arg1 isProxyImage:(BOOL)arg2 updateCropAndStraighten:(BOOL)arg3 ;
-(void)_presentSavingHUD;
-(void)_updateControls;
-(void)_startEditingWithAsset:(id)arg1 ;
-(void)setEditedPhoto:(id)arg1 ;
-(id)_adjustmentState;
-(id)_scaledCachedImage;
-(id)newAdjustedImageWithoutGeometryUsingContext:(id)arg1 ;
-(BOOL)_currentStateIsEqualToAdjustmentState:(id)arg1 ;
-(void)_preloadEnhancementFilters;
-(void)_updateEditedImage:(BOOL)arg1 ;
-(void)_displayAutoAdjustmentMessage;
-(BOOL)_isZoomedToScale:(float)arg1 ;
-(void)_pushNewUndoManager;
-(void)_updateToolbar;
-(void)_updateCropInsetsForOrientation:(int)arg1 ;
-(void)_updateMessageOverlayFrame;
-(void)sizeToFit:(BOOL)arg1 ;
-(float)rotatedZoomToFitScale;
-(void)_layoutToolbar;
-(void)revertToOriginal:(id)arg1 ;
-(id)_rightButtonForMode:(int)arg1 enableDone:(BOOL)arg2 enableSave:(BOOL)arg3 ;
-(id)_startToolbarItems;
-(id)_cropAndStraightenToolbarItems;
-(void)rotatePhoto:(id)arg1 ;
-(id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(int)arg5 ;
-(void)enhancePhoto:(id)arg1 ;
-(void)selectEditMode:(id)arg1 ;
-(void)showConstraints:(id)arg1 ;
-(void)revertToSaved:(id)arg1 ;
-(void)applySubmode:(id)arg1 ;
-(void)showMessage:(id)arg1 duration:(double)arg2 ;
-(void)hideMessage:(id)arg1 ;
-(void)setActionCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_dismissEffectSelection;
-(void)_displayAllRedEyeCorrections;
-(void)_popModalState;
-(void)_pushModalState;
-(void)_updateToolbarSetHiddenState:(BOOL)arg1 ;
-(void)_updateModeButtons;
-(void)_presentEffectSelection;
-(void)_setAdjustmentState:(id)arg1 ;
-(id)_originalState;
-(void)_setAutoAdjustmentFilters:(id)arg1 ;
-(void)_loadFiltersFromDatabase;
-(BOOL)autoAdjustmentEnabled;
-(void)setAutoAdjustmentEnabled:(BOOL)arg1 ;
-(void)_rotatePhotoByAngle:(float)arg1 ;
-(void)_setEditMode:(int)arg1 ;
-(id)_constrainActionSheet;
-(void)_verifyProgress:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)saveAdjustments;
-(id)_buttonWithTag:(int)arg1 ;
-(void)orderOut:(BOOL)arg1 forceCompletion:(BOOL)arg2 ;
-(void)_updateEnhanceButton;
-(void)_setEditedImage:(id)arg1 isProxyImage:(BOOL)arg2 updateCropAndStraighten:(BOOL)arg3 forceAnimate:(BOOL)arg4 ;
-(CGRect)normalizedCropRect;
-(float)straightenAngle;
-(id)_redEyeLabel;
-(id)_currentToolbarItems;
-(void)_setControlsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_undoTransformImage:(CGRect)arg1 angle:(float)arg2 ;
-(void)setStraightenAngle:(float)arg1 normalizedCropRect:(CGRect)arg2 ;
-(BOOL)removeRedEyePoint:(CGPoint)arg1 ;
-(void)addRedEyePoint:(CGPoint)arg1 ;
-(void)_computeFullSizeFilteredImage;
-(void)_setAspectRatio:(CGSize)arg1 ;
-(BOOL)hasRedEyeCorrections;
-(void)_preloadEffectFilters;
-(id)_newCIImageFromUIImage:(id)arg1 ;
-(id)_cropAndStraightenFiltersForImageSize:(CGSize)arg1 forceSquareCrop:(BOOL)arg2 forceUseGeometry:(BOOL)arg3 ;
-(id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3 ciContext:(id)arg4 ;
-(id)_currentNonGeometryFiltersWithEffectFilters:(id)arg1 ;
-(void)_saveAdjustmentsToOriginal;
-(void)_saveXMPPropertiesToPhoto:(id)arg1 ;
-(void)_saveFiltersToAsset:(id)arg1 ;
-(void)_updateAggregateInfoForCurrentAdjustmentState;
-(void)_saveAdjustmentsToCopy;
-(id)_croppedStraightenedImage;
-(void)_setAutoRedEyeFilterFromArray:(id)arg1 ;
-(void)_autoAdjustImage;
-(void)_removeRedEyeCorrections:(id)arg1 ;
-(id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(BOOL)arg2 ;
-(void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(BOOL)arg3 ;
-(void)_displayRedEyeCorrections:(id)arg1 ;
-(void)editViewDidCropImage:(id)arg1 ;
-(CGSize)editedImageSize;
-(void)_dismissProgressAlertIfNeeded;
-(void)_cleanupFilters;
-(BOOL)_setRedEyeCorrections:(id)arg1 changedCorrections:(id*)arg2 ;
-(BOOL)_adjustmentState:(id)arg1 isEqualTo:(id)arg2 ;
-(CGSize)_editedImageFullSize;
-(void)_setToolbarHidden:(BOOL)arg1 ;
-(void)_preloadNextEffectFilter;
-(void)_fetchSmallThumbnailForEffectFilter:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_largeThumbnailImage;
-(id)_smallThumbnailImage;
-(void)_thumbnailImageWithEffectFilters:(id)arg1 inputImage:(id)arg2 applyOrientation:(BOOL)arg3 forceSquareCrop:(BOOL)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_computeFullSizeFilteredImageWithAdjustmentState:(id)arg1 ;
-(void)didUndoNotification:(id)arg1 ;
-(void)didRedoNotification:(id)arg1 ;
-(void)editViewWillCropImage:(id)arg1 ;
-(void)editViewDidTouchImage:(id)arg1 location:(CGPoint)arg2 ;
-(void)effectSelectionViewController:(id)arg1 requestsThumbnailWithEffect:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)effectSelectionViewController:(id)arg1 didSelectEffect:(id)arg2 ;
-(id)_masterImagePath;
-(id)_autoAdjustmentFilters;
-(id)redEyePoints;
-(/*^block*/ id)actionCompletionBlock;
-(BOOL)_toolbarHidden;
-(void)assetContainerDidChange:(id)arg1 ;
@end

