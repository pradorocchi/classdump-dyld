/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <WebUI/WebUIDelegate.h>
#import <MobileSafari/BookmarksBarViewDelegate.h>
#import <MobileSafari/BookmarksNavigationControllerDelegate.h>
#import <MobileSafari/BrowserToolbarDelegate.h>
#import <MobileSafari/CloudTabNavigationControllerDelegate.h>
#import <MobileSafari/ReadingListViewControllerDelegate.h>
#import <MobileSafari/SocialLinksViewControllerDelegate.h>
#import <MobileSafari/TabDocumentDelegate.h>
#import <MobileSafari/CatalogViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/_UIBasicAnimationFactory.h>
#import <MobileSafari/NavigationBarDelegate.h>
#import <MobileSafari/DynamicBarAnimatorDelegate.h>
#import <MobileSafari/BrowserPanel.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <MobileSafari/FindOnPageToolbarDelegate.h>
#import <UIKit/UIWebPDFViewHandlerDelegate.h>
#import <UIKit/UIWebFindOnPageHighlighterDelegate.h>
#import <MobileSafari/NavigationSnapshotControllerDelegate.h>
#import <MobileSafari/HistoryDelegate.h>
#import <MobileSafari/ContinuousReadingViewControllerDelegate.h>

@protocol BrowserPanel, UIWebFindOnPageHighlighter;
@class UIWindow, TabController, BrowserToolbar, BrowserRootViewController, AddressView, UIView, BrowserControllerScrollView, UIWebBrowserView, NavigationSnapshotController, QuickLookBannerController, UITapGestureRecognizer, , RotatablePopoverController, NSURL, NSMutableArray, TabDocument, NSTimer, NSString, WebUIAuthenticationManager, WebFrame, RecentlyClosedTabViewController, UIAlertView, DynamicBarAnimator, NSDate, UIButton, UIToolbar, UIStatusBar, BookmarksNavigationController, BookmarksBarView, ContinuousReadingBannerView, GradientView, ContinuousReadingController, NSNumber, NavigationBar, ContinuousReadingPreviewView, ContinuousReadingViewController, ContinuousReadingItem;

@interface BrowserController : WebUIDelegate <BookmarksBarViewDelegate, BookmarksNavigationControllerDelegate, BrowserToolbarDelegate, CloudTabNavigationControllerDelegate, ReadingListViewControllerDelegate, SocialLinksViewControllerDelegate, TabDocumentDelegate, CatalogViewControllerDelegate, UIGestureRecognizerDelegatePrivate, _UIBasicAnimationFactory, NavigationBarDelegate, DynamicBarAnimatorDelegate, BrowserPanel, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, UIScrollViewDelegate, UISplitViewControllerDelegate, FindOnPageToolbarDelegate, UIWebPDFViewHandlerDelegate, UIWebFindOnPageHighlighterDelegate, NavigationSnapshotControllerDelegate, HistoryDelegate, ContinuousReadingViewControllerDelegate> {

	UIWindow* _window;
	TabController* _tabController;
	BrowserToolbar* _buttonBar;
	BrowserRootViewController* _rootViewController;
	AddressView* _addressView;
	UIView* _backgroundColorView;
	BrowserControllerScrollView* _scrollView;
	UIWebBrowserView* _browserView;
	UIView* _rootView;
	UIView* _pageView;
	NavigationSnapshotController* _navigationSnapshotController;
	id _lockedBookmarksDatabaseAlert;
	QuickLookBannerController* _quickLookBannerController;
	UITapGestureRecognizer* _quickLookTapRecognizer;
	BOOL _tabBarItemsFixed;
	<BrowserPanel>* _browserPanel;
	<BrowserPanel>* _nextBrowserPanel;
	RotatablePopoverController* _currentPopoverController;
	BOOL _isShowingCurrentPanel;
	NSURL* _mailToURL;
	NSMutableArray* _documentsPendingClose;
	<UIWebFindOnPageHighlighter>* _findOnPageHighlighter;
	BOOL _isRotating;
	int _orientation;
	int _previousOrientation;
	BOOL _isZooming;
	float _lastScrollViewZoomScale;
	BOOL _isProgressEnabled;
	float _progress;
	BOOL _resourcesLoading;
	BOOL _showingProgressIndicator;
	TabDocument* _documentWhoseProgressIsShown;
	unsigned _addressViewPinCount;
	NSTimer* _idleTimerDurationTimer;
	double _idleTimerDuration;
	TabDocument* _speculativeLoadDocument;
	NSString* _speculativeLoadURL;
	BOOL _isSpeculativeLoadingEnabled;
	int _currentlyLoadingResourcesCount;
	unsigned _coalescedUpdateMask;
	BOOL _isRunningTabExposeTest;
	unsigned _tabExposeTestLoadCount;
	unsigned _tabExposeTestIterationsRemaining;
	NSString* _currentLocaleIdentifier;
	BOOL _geolocationDialogAllowed;
	BOOL _antiPhishingServiceInitialized;
	BOOL _isPrivateBrowsingEnabled;
	WebUIAuthenticationManager* _authenticationManager;
	WebFrame* _frameToBePrinted;
	BOOL _zoomToHighlightSelection;
	BOOL _leaveKeyboardUpOnPanelReveal;
	CGRect _inputViewScreenBoundsAfterRotation;
	float _lastAdjustmentForKeyboard;
	RecentlyClosedTabViewController* _recentlyClosedTabController;
	NSString* _fileDownloadPath;
	UIAlertView* _privateBrowsingClearAllTabsAlert;
	NSString* _searchCountKey;
	BOOL _applicationIsOpaque;
	BOOL _scrollViewIsDragging;
	BOOL _shouldShowBarsAfterDraggingDownward;
	DynamicBarAnimator* _dynamicBarAnimator;
	int _dynamicBarAnimatorStateBeforeNavigationGesture;
	UITapGestureRecognizer* _showBarsFromBottomBarRecognizer;
	BOOL _pageScrollsWithBottomBar;
	BOOL _updatingGeometryFromDynamicBarAnimator;
	NSDate* _suspendDate;
	TabDocument* _progressSuppressingDocument;
	float _lastBottomContentInsetAdjustment;
	unsigned _suppressesColorSettingsCount;
	BOOL _cloudTabsEnabled;
	UIView* _readerBackgroundView;
	BOOL _readerViewIsStale;
	UIButton* _privateBrowsingButton;
	UIButton* _tabViewPrivateBrowsingButton;
	BOOL _showingTabView;
	UIToolbar* _tiltedTabToolbar;
	UIView* _tabBarClipperView;
	UIStatusBar* _scrollingStatusBar;
	BookmarksNavigationController* _bookmarksNavigationController;
	UIView* _topBackgroundColorView;
	UIView* _bottomBackgroundColorView;
	BookmarksBarView* _bookmarksBar;
	ContinuousReadingBannerView* _continuousBannerViewForCurrentPage;
	NSMutableArray* _recentSearches;
	GradientView* _topPrivateBrowsingGradient;
	GradientView* _bottomPrivateBrowsingGradient;
	WBUNetworkDataUsage _speculativeLoadNetworkDataUsage;
	BOOL _readerShouldBeShownIfPossible;
	BOOL _interfaceFillsScreen;
	BOOL _fullScreenInPortrait;
	BOOL _showingTabBar;
	TabDocument* _nextContinuousItemDocument;
	ContinuousReadingController* _continuousReadingController;
	NSNumber* _doNotTrackEnabledPreference;
	NavigationBar* _navigationBar;
	int _favoritesState;
	ContinuousReadingPreviewView* _continuousReadingPreviewView;
	ContinuousReadingViewController* _continuousReadingViewController;
	ContinuousReadingItem* _currentContinuousReadingItem;

}

@property (nonatomic,retain) RotatablePopoverController * currentPopoverController;                          //@synthesize currentPopoverController=_currentPopoverController - In the implementation block
@property (nonatomic,retain) NSURL * mailToURL;                                                              //@synthesize mailToURL=_mailToURL - In the implementation block
@property (assign,nonatomic) BOOL readerViewIsStale;                                                         //@synthesize readerViewIsStale=_readerViewIsStale - In the implementation block
@property (assign,nonatomic) BOOL readerShouldBeShownIfPossible;                                             //@synthesize readerShouldBeShownIfPossible=_readerShouldBeShownIfPossible - In the implementation block
@property (nonatomic,retain) TabDocument * nextContinuousItemDocument;                                       //@synthesize nextContinuousItemDocument=_nextContinuousItemDocument - In the implementation block
@property (nonatomic,retain) ContinuousReadingController * continuousReadingController;                      //@synthesize continuousReadingController=_continuousReadingController - In the implementation block
@property (assign,nonatomic) BOOL interfaceFillsScreen;                                                      //@synthesize interfaceFillsScreen=_interfaceFillsScreen - In the implementation block
@property (nonatomic,readonly) BOOL fullScreenInPortrait;                                                    //@synthesize fullScreenInPortrait=_fullScreenInPortrait - In the implementation block
@property (assign,getter=isShowingTabBar,nonatomic) BOOL showingTabBar;                                      //@synthesize showingTabBar=_showingTabBar - In the implementation block
@property (nonatomic,copy) NSNumber * doNotTrackEnabledPreference;                                           //@synthesize doNotTrackEnabledPreference=_doNotTrackEnabledPreference - In the implementation block
@property (nonatomic,readonly) NavigationBar * navigationBar;                                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) int favoritesState;                                                             //@synthesize favoritesState=_favoritesState - In the implementation block
@property (getter=isShowingFavorites,nonatomic,readonly) BOOL showingFavorites; 
@property (nonatomic,retain) ContinuousReadingPreviewView * continuousReadingPreviewView;                    //@synthesize continuousReadingPreviewView=_continuousReadingPreviewView - In the implementation block
@property (nonatomic,retain) ContinuousReadingViewController * continuousReadingViewController;              //@synthesize continuousReadingViewController=_continuousReadingViewController - In the implementation block
@property (nonatomic,retain) ContinuousReadingItem * currentContinuousReadingItem;                           //@synthesize currentContinuousReadingItem=_currentContinuousReadingItem - In the implementation block
+(id)sharedBrowserController;
-(void)setCurrentPopoverController:(id)arg1 ;
-(id)currentPopoverController;
-(id)tabController;
-(void)snapshotTabDocument:(id)arg1 size:(CGSize)arg2 options:(unsigned)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_setFrameToBePrinted:(id)arg1 ;
-(id)browserPanel;
-(void)willHideBrowserPanel:(id)arg1 ;
-(void)closeBrowserPanel:(id)arg1 ;
-(void)didHideBrowserPanel:(id)arg1 ;
-(BOOL)isShowingReader;
-(void)showPrintingDuringLoadAlert;
-(BOOL)addReadingListBookmarkForCurrentTabUpdatingController:(id)arg1 ;
-(id)_frameToBePrinted;
-(void)willShowBrowserPanel:(id)arg1 ;
-(void)didShowBrowserPanel:(id)arg1 ;
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(id)addressView;
-(void)updateSearchEngine;
-(void)setEllipsedTextViewNeedsUpdate:(BOOL)arg1 ;
-(id)buttonBar;
-(void)stopFromAddressView:(id)arg1 ;
-(void)reloadFromAddressView:(id)arg1 ;
-(void)setShowingReader:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dismissCurrentPopover;
-(void)cancelSpeculativeLoad;
-(void)updateSpeculativeLoadURL:(id)arg1 ;
-(unsigned)currentAddressViewLayoutFlags;
-(CGRect)addressViewFrameWithLayoutFlags:(unsigned)arg1 ;
-(BOOL)showBrowserPanelType:(int)arg1 ;
-(CGRect)addressViewFrame;
-(BOOL)hideBrowserPanelType:(int)arg1 ;
-(void)goToAddress:(id)arg1 fromAddressView:(id)arg2 ;
-(BOOL)hideBrowserPanel;
-(void)doSearch:(id)arg1 fromAddressView:(id)arg2 ;
-(void)setTitleTextViewNeedsUpdate:(BOOL)arg1 ;
-(void)pinAddressView;
-(void)unpinAddressView;
-(void)_initSearchEngineIfNeeded;
-(void)addressView:(id)arg1 completionItem:(id)arg2 wasAcceptedForString:(id)arg3 ;
-(void)catalogViewController:(id)arg1 didSelectFindOnPageWithHighlighter:(id)arg2 ;
-(void)willSuspend;
-(void)setProgress:(float)arg1 forceUpdate:(BOOL)arg2 ;
-(void)setReloadImageViewNeedsUpdate:(BOOL)arg1 ;
-(void)suspendForEventsOnly:(BOOL)arg1 ;
-(void)didReadDefaults;
-(void)checkForSyncedDatabase;
-(id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 fromExternalApplication:(BOOL)arg4 ;
-(void)setFavoritesState:(int)arg1 ;
-(id)handleExternalURL:(id)arg1 ;
-(void)updateTabDocument:(id)arg1 forExternalURL:(id)arg2 ;
-(void)setupWithURL:(id)arg1 ;
-(void)updateDoNotTrackPreferences;
-(void)updatePrivateBrowsingPreferences;
-(void)updateSpeculativeLoadingPreferences;
-(void)updateInternalPreferences;
-(BOOL)isAtEndOfPage;
-(void)scrollDown;
-(void)updateNavigationSnapshotForActiveTabDocument;
-(id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2 ;
-(void)_setCloudTabsEnabled:(BOOL)arg1 ;
-(void)setCookiePolicyMessageReceived;
-(void)clearHistoryMessageReceived;
-(void)autoFillStateChangedMessageReceived;
-(void)clearAutoFillMessageReceived;
-(void)toggleAlwaysShowBookmarksBarMessageReceived;
-(void)fraudWarningsToggledFromSettings;
-(void)carrierBundledChanged;
-(void)clearSpeculativeLoadDocument;
-(void)clearNextContinuousItemDocument;
-(BOOL)prepareTabExposeTest;
-(void)toggleBookmarksFromButtonBar;
-(void)updateButtonBarFrameForOrientation:(int)arg1 ;
-(void)showDemoModeFeatureDisabledAlert;
-(void)dismissCurrentPopover:(BOOL)arg1 ;
-(void)bookmarksBarView:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)bookmarksNavigationController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)bookmarksNavigationControllerReloadDidFail:(id)arg1 ;
-(void)bookmarksNavigationControllerDidPressDoneButton:(id)arg1 ;
-(void)bookmarksNavigationControllerDidTapOutsideFavorites:(id)arg1 ;
-(void)showLockedBookmarksDatabaseAlertInView:(id)arg1 forBookmarkAddition:(BOOL)arg2 ;
-(id)privateBrowsingBarButtonItem;
-(BOOL)isPrivateBrowsingAvailable;
-(void)clearUserHistory;
-(void)readingListViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)socialLinksViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)updateViewsAfterStatusBarChange;
-(void)updateScrollViewFrame;
-(void)updateButtonBarFrame;
-(void)updateAddressViewFrame;
-(void)updateExposedScrollViewRect;
-(void)updateStoreBannerFrame;
-(void)updateQuickLookBannerViewFrame;
-(CGRect)frameForCatalogView;
-(id)_topScrollView;
-(void)_setIdleTimerDuration:(double)arg1 ;
-(void)_updatePrivateBrowsingBarButtonItem;
-(void)updateButtonBarContentsAnimated:(BOOL)arg1 ;
-(void)updatePrivateBrowsingGradient;
-(BOOL)_showingAModalAlertWillHang;
-(void)_resignWebViewFirstResponder;
-(void)setShowingTabBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_resizeToContentFrame;
-(BOOL)isShowingFavorites;
-(id)scrollingNavigationView;
-(BOOL)_canSuppressNavigationBarBlur;
-(void)_updateTopBackgroundColorView;
-(void)updateButtonBarFrameForOrientation:(int)arg1 forBrowserPanel:(id)arg2 ;
-(float)buttonBarHeight;
-(id)continuousReadingViewController;
-(void)updateContinuousPreviewViewFrame;
-(float)bottomBarOffset;
-(void)_updateBottomBackgroundColorView;
-(float)_addressViewOverlapHeight;
-(float)_verticalOffsetForStoreBanner;
-(float)_storeBannerOverlapHeight;
-(CGRect)contentFrameInScrollView;
-(CGRect)readerContentFrameInScrollView;
-(id)nextContinuousItemDocument;
-(BOOL)_shouldShowBackgroundViewForTabDocument:(id)arg1 ;
-(CGRect)scrollViewFrameForBrowserSize:(CGSize)arg1 ;
-(void)updateScrollIndicatorInsets;
-(void)updateScrollViewContentSize;
-(CGSize)scrollViewContentSize;
-(void)updateDynamicBarGeometry;
-(void)updateBackgroundViewFrame;
-(void)_updateReaderBackgroundViewFrame;
-(void)updateProgress:(BOOL)arg1 forTabDocument:(id)arg2 ;
-(void)updateWebViewSizeAttributes;
-(void)toggleQuickLookBannerView;
-(void)_endSuppressingColorSettingsUpdate;
-(void)_beginSuppressingColorSettingsUpdate;
-(void)_updateApplicationOpaqueness;
-(void)_dynamicBarStateDidChange;
-(void)_showBarsFromBottomBarTap:(id)arg1 ;
-(void)updateButtons;
-(void)updateScrollViewContentInset;
-(BOOL)_isInContinuousMode;
-(void)hideBarsAnimated:(BOOL)arg1 ;
-(void)_loadRecentSearchesIfNeeded;
-(void)saveRecentSearches;
-(BOOL)_favoritesAreSticky;
-(BOOL)_favoritesFieldFocused;
-(void)setFavoritesState:(int)arg1 animated:(BOOL)arg2 ;
-(int)_notFocusedStickyState;
-(BOOL)hasAnyFavorites;
-(void)setFavoritesAreSticky:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateButtonBarContentsForBrowserPanel:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateButtonBarContentsForBrowserPanel:(id)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(id)_favoritesToolbarItems;
-(id)_tiltedTabToolbar;
-(BOOL)_favoritesFieldShouldBeExpanded;
-(BOOL)_shouldShowButtonBarForPanel:(id)arg1 ;
-(void)_setProgressSuppressingDocument:(id)arg1 ;
-(void)setBrowserPanel:(id)arg1 ;
-(void)_completionItem:(id)arg1 wasAcceptedForString:(id)arg2 ;
-(void)setFavoritesFieldFocused:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_applicationBackgroundColor;
-(id)_viewToInsertNavigationBarAbove;
-(void)_inputViewWillRotate:(id)arg1 ;
-(void)_remoteInspectorHasSessionChanged:(id)arg1 ;
-(void)_passwordGenerationAssistanceBecameAvailable:(id)arg1 ;
-(void)_removeStaleSavedTabSnapshots;
-(void)updateFavoritesForNewDocument;
-(void)updateIdleTimerDuration;
-(void)_togglePrivateBrowsingWithConfirmation:(BOOL)arg1 ;
-(void)addRecentSearch:(id)arg1 ;
-(void)_finishTogglingPrivateBrowsing;
-(void)_togglePrivateBrowsingFromBarButtonItem;
-(id)_newPrivateBrowsingBarButtonItemUsingButton:(id*)arg1 ;
-(void)_showCloseAllTabsAlertForPrivateBrowsingPreference:(BOOL)arg1 ;
-(void)writePrivateBrowsingPreference:(BOOL)arg1 ;
-(void)setDoNotTrackEnabledPreference:(id)arg1 ;
-(void)_updateTabBarAndBookmarksBarStyles;
-(BOOL)_isScrolledToOrPastBottom;
-(void)didCompleteGesturesOrScrolling;
-(void)didCompleteScrolling;
-(void)showBars;
-(void)_updateCurrentPageBannerView;
-(void)_commitToSpeculativeLoad;
-(void)updateAddress:(BOOL)arg1 forTabDocument:(id)arg2 ;
-(CGPoint)_originForOverlayAccessories;
-(CGRect)_quickLookFrame;
-(void)showQuickLookBannerView;
-(void)removeQuickLookBannerView;
-(id)continuousReadingController;
-(void)setCurrentContinuousReadingItem:(id)arg1 ;
-(id)continuousReadingPreviewView;
-(id)_tabDocumentForNextContinuousItem;
-(void)setContinuousReadingPreviewView:(id)arg1 ;
-(void)updateTitle:(BOOL)arg1 forTabDocument:(id)arg2 ;
-(void)updateBanners:(BOOL)arg1 forTabDocument:(id)arg2 ;
-(void)updateBackgroundColorForTabDocument:(id)arg1 ;
-(void)_updateEVOrganizationName;
-(BOOL)_shouldTrackNetworkDataUsage;
-(void)_cancelSpeculativeLoadForDocument:(id)arg1 ;
-(void)_closeSpeculativelyLoadedDocument:(id)arg1 ;
-(void)_beginSpeculativeLoadForURL:(id)arg1 ;
-(void)_commitToSpeculativeLoadForDocument:(id)arg1 ;
-(void)clearRecentSearches;
-(void)updateInterface:(BOOL)arg1 ;
-(void)_scrollToTopInView:(id)arg1 notifyingBrowserView:(id)arg2 ;
-(void)updateQuickLookFrameViewIfNecessary;
-(void)hideReaderForTabDocument:(id)arg1 animated:(BOOL)arg2 deactivationMode:(int)arg3 ;
-(void)showReaderForTabDocument:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setReaderVisible:(BOOL)arg1 forTabDocument:(id)arg2 deactivationMode:(int)arg3 animated:(BOOL)arg4 ;
-(float)readerViewScrollOffset;
-(void)document:(id)arg1 changedView:(id)arg2 ;
-(void)_readerVisibilityDidChange;
-(float)_pdfPageNumberLabelYOffset;
-(id)_tabDocumentForPDFViewHandler:(id)arg1 ;
-(void)_animateLinkImage:(CGImageRef)arg1 flipped:(BOOL)arg2 fromRect:(CGRect)arg3 intoButton:(int)arg4 inView:(id)arg5 afterLinkImageDisappears:(/*^block*/ id)arg6 ;
-(void)_animateWithActionInfo:(id)arg1 intoButton:(int)arg2 afterLinkImageDisappears:(/*^block*/ id)arg3 ;
-(void)_animateSafariIconLinkFromPoint:(CGPoint)arg1 ;
-(id)_openInNewPagePDFLinkActionForURL:(id)arg1 ;
-(id)_addToReadingListActionForURL:(id)arg1 ;
-(id)_panelSuperview;
-(void)snapshotTabDocument:(id)arg1 size:(CGSize)arg2 topBackdropHeight:(float)arg3 options:(unsigned)arg4 completion:(/*^block*/ id)arg5 ;
-(id)tabViewBackdropSettingsForNavigationBar:(id)arg1 ;
-(void)updatePreferredStatusBarStyleAnimated:(BOOL)arg1 ;
-(void)navigationBarBackdropDidApplySettings:(id)arg1 ;
-(void)removeStoreBannerFromTabDocument:(id)arg1 animated:(BOOL)arg2 ;
-(id)currentContinuousReadingItem;
-(void)_prepareTabDocumentForNextContinuousItem;
-(void)setNextContinuousItemDocument:(id)arg1 ;
-(BOOL)readerShouldBeShownIfPossible;
-(CGRect)_frameForCurrentPageBannerView;
-(id)_readerView;
-(void)_updateCurrentPageBannerViewBeforeContinuousTransition;
-(void)commitToTabDocumentForNextContinuousItem;
-(void)_updateCurrentPageBannerViewAfterContinuousTransition;
-(void)scrollBrowserViewToTop;
-(void)cancelFavorites;
-(void)catalogViewController:(id)arg1 didSelectAddress:(id)arg2 ;
-(void)catalogViewController:(id)arg1 didSelectSearch:(id)arg2 ;
-(void)catalogViewController:(id)arg1 mightSelectAddress:(id)arg2 ;
-(void)catalogViewController:(id)arg1 completionItem:(id)arg2 wasAcceptedForString:(id)arg3 ;
-(void)catalogViewControllerDidBeginEditing:(id)arg1 ;
-(void)catalogViewControllerDidEndEditing:(id)arg1 ;
-(void)compressedNavigationBarWasTapped:(id)arg1 ;
-(void)navigationBarURLWasTapped:(id)arg1 ;
-(void)navigationBarReaderButtonWasTapped:(id)arg1 ;
-(void)navigationBarCancelButtonWasTapped:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(float)arg2 ;
-(id)textForCurrentResultLabel;
-(id)textForToolbarLabel;
-(void)updateSearchText:(id)arg1 ;
-(BOOL)hasMatches;
-(void)navigationSnapshotControllerGestureBegan:(id)arg1 ;
-(void)navigationSnapshotControllerGestureEnded:(id)arg1 willNavigate:(BOOL)arg2 toHistoryPosition:(int)arg3 ;
-(void)navigationSnapshotController:(id)arg1 willNavigateAtEndOfGesture:(BOOL)arg2 toHistoryPosition:(int)arg3 ;
-(void)navigationSnapshotControllerWillUnhideWebContent:(id)arg1 ;
-(id)navigationSnapshotControllerDocumentToSnapshot:(id)arg1 ;
-(BOOL)navigationSnapshotController:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)navigationSnapshotControllerShouldDelaySnapshotForOngoingLoad:(id)arg1 ;
-(void)history:(id)arg1 didNavigateInMainFrameWithNavigationData:(id)arg2 inWebView:(id)arg3 ;
-(void)continuousReadingViewControllerWillCommitToLoadNextItem:(id)arg1 ;
-(void)continuousReadingViewControllerDidCommitToLoadNextItem:(id)arg1 ;
-(void)continuousReadingViewControllerViewDidScroll:(id)arg1 ;
-(BOOL)isAnyPageLoaded;
-(void)clearPrivateBrowsingData;
-(BOOL)shouldNotTrackUser;
-(void)willShowViewAboveWebContentWithSuspendBehavior:(int)arg1 ;
-(void)willHideViewAboveWebContentWithSuspendBehavior:(int)arg1 ;
-(void)setShowingTabBar:(BOOL)arg1 ;
-(void)updateButtonBarFrameForBrowserPanel:(id)arg1 ;
-(float)_bottomBarVisibleHeight;
-(BOOL)canHideBars;
-(void)hideBars;
-(id)recentSearches;
-(id)recentSearchesMatchingPrefix:(id)arg1 ;
-(void)privateBrowsingAlertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)tabViewPrivateBrowsingBarButtonItem;
-(void)didCompleteGestures;
-(void)setProgressEnabled:(BOOL)arg1 ;
-(void)setInitialZoomScaleForPPT:(float)arg1 ;
-(BOOL)shouldDeferHistoryUpdatesForWebView:(id)arg1 ;
-(void)reportNetworkDataUsage:(WBUNetworkDataUsage)arg1 forDocument:(id)arg2 ;
-(void)userEmptiedCachesMessageReceived;
-(void)tabDocumentSecureContentStatusHasChanged:(id)arg1 ;
-(id)containerViewForAuthenticationPanel;
-(void)setLeaveKeyboardUpOnPanelReveal:(BOOL)arg1 ;
-(void)setScrollViewZoomEnabled:(BOOL)arg1 ;
-(void)configureReaderView:(id)arg1 ;
-(void)setReaderShouldBeShownIfPossible:(BOOL)arg1 ;
-(CGSize)sizeForIconSnapshot;
-(void)willPresentTiltedTabView;
-(void)didPresentTiltedTabView;
-(void)willDismissTiltedTabView;
-(void)didDismissTiltedTabView;
-(id)borrowContentViewForTab:(id)arg1 withTopBackdropView:(id*)arg2 ofHeight:(float)arg3 ;
-(void)reinsertBorrowedContentView;
-(void)reloadKeyPressed;
-(void)stopLoadingKeyPressed;
-(void)navigateBackKeyPressed;
-(void)navigateForwardKeyPressed;
-(void)focusAddressFieldKeyPressed;
-(void)newTabKeyPressed;
-(void)closeActiveTabKeyPressed;
-(id)mailToURL;
-(void)setMailToURL:(id)arg1 ;
-(BOOL)readerViewIsStale;
-(void)setReaderViewIsStale:(BOOL)arg1 ;
-(void)setContinuousReadingController:(id)arg1 ;
-(BOOL)interfaceFillsScreen;
-(void)setInterfaceFillsScreen:(BOOL)arg1 ;
-(BOOL)fullScreenInPortrait;
-(BOOL)isShowingTabBar;
-(id)doNotTrackEnabledPreference;
-(int)favoritesState;
-(void)setContinuousReadingViewController:(id)arg1 ;
-(BOOL)_isShowingFullScreenPlugInUI;
-(void)_gesturesEnded;
-(id)_pdfView;
-(float)_minZoomScale;
-(float)_maxZoomScale;
-(void)getRotationContentSettings:(SCD_Struct_Br6*)arg1 ;
-(id)zoomAndTabTestURL;
-(void)_forceDismissModalViewController:(BOOL)arg1 ;
-(void)_presentModalViewController:(id)arg1 fromButtonIdentifier:(int)arg2 ;
-(void)_forceDismissModalViewController;
-(void)_createInitialLaunchImageForWebClip:(id)arg1 ;
-(id)_hostForFindOnPagePanel;
-(void)_setUserInteractionEnabled:(BOOL)arg1 ;
-(void)_setShowingBookmarks:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_setShowingActionPanel:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_setShowingMailComposePanel:(BOOL)arg1 ;
-(void)_setShowingPrintPanel:(BOOL)arg1 ;
-(void)_setShowingAlert:(BOOL)arg1 ;
-(void)_setShowingICSController:(BOOL)arg1 ;
-(void)_setShowingFindOnPagePanel:(BOOL)arg1 ;
-(void)_animateScrollToAddressField;
-(void)_setEnteringURL:(BOOL)arg1 ;
-(void)_setShowingCurrentPanel:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_setShowingButtonBar:(BOOL)arg1 ;
-(void)_setNextBrowserPanel:(id)arg1 ;
-(void)_setShowingCurrentPanel:(BOOL)arg1 ;
-(void)_delayedShowLockedBookmarksDatabaseAlertForBookmarkAddition;
-(id)_panelForPanelType:(int)arg1 ;
-(void)_transitionToBrowserPanel:(id)arg1 ;
-(BOOL)_togglePanelType:(int)arg1 ;
-(void)_doSearch:(id)arg1 ;
-(void)beginEnteringURL;
-(void)_animateNode:(id)arg1 intoButton:(int)arg2 afterLinkImageDisappears:(/*^block*/ id)arg3 ;
-(void)_animateTabDocument:(id)arg1 intoBackgroundFromLinkNode:(id)arg2 ;
-(id)_openInNewPageActionForElement:(id)arg1 withTargetURL:(id)arg2 ;
-(id)_addToReadingListActionForElement:(id)arg1 withTargetURL:(id)arg2 ;
-(id)_actionsForElement:(id)arg1 withTargetURL:(id)arg2 suggestedActions:(id)arg3 ;
-(void)composeEmailWithMailToURL:(id)arg1 ;
-(void)goToBookmark:(id)arg1 ;
-(void)goToURL:(id)arg1 ;
-(void)_goToAutomaticReadingListItem:(id)arg1 ;
-(void)goToCloudTab:(id)arg1 ;
-(void)goToNavigationDestination:(id)arg1 ;
-(BOOL)createAndAddToHomeScreenBundleForWebClip:(id)arg1 ;
-(void)showLockedBookmarksDatabaseAlertForBookmarkAdditionAfterDelay;
-(void)backFromButtonBar;
-(void)forwardFromButtonBar;
-(void)showActionPanelFromButtonBar;
-(void)showTabsFromButtonBar;
-(void)presentBackPopoverFromButtonBar;
-(void)presentForwardPopoverFromButtonBar;
-(void)presentAddTabPopoverFromButtonBar;
-(void)showCloudTabsFromButtonBar;
-(void)addTabFromButtonBar;
-(CGPoint)targetPointForButtonBarLinkImageAnimationIntoLayer:(id)arg1 proposedTargetPoint:(CGPoint)arg2 ;
-(void)presentAlertSheet:(id)arg1 ;
-(void)popupAlert:(id)arg1 ;
-(void)shareURLOrArticle;
-(void)showPassBookControllerForPass:(id)arg1 ;
-(void)showICSControllerForPath:(id)arg1 ;
-(void)cloudTabNavigationController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(void)_initializeAntiPhishingService;
-(void)_shutDownAntiPhishingService;
-(void)initializeAntiPhishingServiceIfNeeded;
-(BOOL)_canUpdateInterfaceWithTabDocument:(id)arg1 ;
-(void)setResourcesLoading:(BOOL)arg1 ;
-(void)didStartLoadingResource;
-(void)didStopLoadingResource;
-(void)_addAuthenticationChallenge:(id)arg1 displayNow:(BOOL)arg2 ;
-(void)resetViewOnTabDocument:(id)arg1 ;
-(void)setShowingStoreBanner:(id)arg1 isShowing:(BOOL)arg2 ;
-(void)switchFromTabDocument:(id)arg1 toTabDocument:(id)arg2 ;
-(id)loadURLInNewWindow:(id)arg1 inBackground:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_blankTabDocumentToReuse;
-(void)runTabExposeTest;
-(void)_runTabExposeTest;
-(void)tabDocumentDidUpdatePersistentState:(id)arg1 ;
-(void)tabDocumentDidUpdateURL:(id)arg1 ;
-(void)tabDocumentDidStartLoading:(id)arg1 ;
-(void)tabDocumentWillStartLoadFromUserClick:(id)arg1 ;
-(BOOL)tabDocumentCanClearRenderTreeSizeThresholdForReset:(id)arg1 ;
-(BOOL)tabDocumentCanDownloadFile:(id)arg1 ;
-(BOOL)tabDocumentCanRedirectToExternalApplication:(id)arg1 ;
-(void)tabDocumentDidCancelRedirectToExternalApplication:(id)arg1 ;
-(void)tabDocument:(id)arg1 didFinishLoadingWithError:(BOOL)arg2 ;
-(void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)arg1 ;
-(void)tabDocumentDidUpdateTitle:(id)arg1 ;
-(void)tabDocumentDidUpdateBackForward:(id)arg1 ;
-(void)tabDocumentProgressDidStall:(id)arg1 ;
-(void)tabDocument:(id)arg1 progressChanged:(float)arg2 ;
-(void)tabDocumentStartedLoadingResource:(id)arg1 ;
-(void)tabDocumentStoppedLoadingResource:(id)arg1 ;
-(void)tabDocument:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)tabDocument:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(BOOL)tabDocument:(id)arg1 handleCertificateError:(id)arg2 forDataSource:(id)arg3 ;
-(void)showAlertForTabDocument:(id)arg1 ;
-(void)hideAlertForTabDocument:(id)arg1 ;
-(void)tabDocument:(id)arg1 didDetectReaderAvailability:(BOOL)arg2 ;
-(void)tabControllerDocumentCountDidChange:(id)arg1 ;
-(void)tabController:(id)arg1 didSwitchFromTabDocument:(id)arg2 toTabDocument:(id)arg3 ;
-(id)blankTabTitleForTabDocument:(id)arg1 ;
-(BOOL)closePendingDocuments;
-(BOOL)isRunningTabExposeTest;
-(void)finishedTabExposeTest;
-(void)composeEmailWithMailToURL:(id)arg1 forTabDocument:(id)arg2 ;
-(void)tabDocumentDidCompleteCheckForStoreBanner:(id)arg1 ;
-(void)setStoreBannerPinnedToTop:(BOOL)arg1 forTabDocument:(id)arg2 ;
-(void)performCoalescedUpdates;
-(void)_performCoalescedUpdate:(BOOL)arg1 type:(int)arg2 ;
-(void)_updateProgressIndicator;
-(void)_updateCurrentResultLabel;
-(void)_setFindOnPageAnimationStateActivityIndicator:(BOOL)arg1 ;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)window;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)navigationBar;
-(int)orientation;
-(BOOL)isRotating;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)isZooming;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(CGSize)arg3 ;
-(CGPoint)contentOffset;
-(float)zoomScale;
-(void)setZoomScale:(float)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_initSubviews;
-(void)done;
-(void)resume;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 asResultOfZoom:(BOOL)arg4 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg1 ;
-(void)webThreadWebViewDidLayout:(id)arg1 ;
-(void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg1 ;
-(void)didResetViewForNewPage:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)webViewDidDrawTiles:(id)arg1 ;
-(void)webView:(id)arg1 willClickElement:(id)arg2 ;
-(void)webViewDidClick:(id)arg1 ;
-(void)webViewDidNotClick:(id)arg1 ;
-(void)webViewWillShowInteractionHighlight:(id)arg1 ;
-(id)superviewForImageSheetForWebView:(id)arg1 ;
-(id)webView:(id)arg1 actionsForImageElement:(id)arg2 withTargetURL:(id)arg3 suggestedActions:(id)arg4 ;
-(id)webView:(id)arg1 actionsForLinkElement:(id)arg2 withTargetURL:(id)arg3 suggestedActions:(id)arg4 ;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(id).cxx_construct;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)goBack;
-(void)goForward;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)setDocumentView:(id)arg1 ;
-(void)webView:(id)arg1 willAssistFormNode:(id)arg2 ;
-(BOOL)webViewRotateShouldCenterSelectionRect:(id)arg1 ;
-(float)minimumVerticalContentOffset;
-(float)heightToKeepVisible;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(CGRect)frameForPDFViewWithHandler:(id)arg1 proposedFrame:(CGRect)arg2 ;
-(void)pdfViewHandler:(id)arg1 willClickLink:(id)arg2 ;
-(void)pdfViewHandler:(id)arg1 linkClicked:(id)arg2 ;
-(id)pdfViewHandler:(id)arg1 actionsForURL:(id)arg2 suggestedActions:(id)arg3 ;
-(id)hostViewForLinkSheet:(id)arg1 ;
-(CGPoint)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2 ;
-(void)highlightSearchResultBounds:(CGRect)arg1 resultRects:(id)arg2 contentViews:(id)arg3 forPDFViewHandler:(id)arg4 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)findOnPageHighlighterDidHighlightMatch:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidBegin:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidTimeOut:(id)arg1 ;
-(void)findOnPageHighlighterSearchWasCancelled:(id)arg1 ;
-(void)findOnPageHighlighterSearchLimitHit:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidFinish:(id)arg1 ;
-(void)findOnPageHighlighter:(id)arg1 hasPartialSearchResults:(id)arg2 ;
-(void)loadURL:(id)arg1 ;
-(void)next;
-(void)_resetIdleTimer;
-(void)previous;
-(void)webViewFocus:(id)arg1 ;
-(BOOL)webViewShouldInterruptJavaScript:(id)arg1 ;
-(void)webView:(id)arg1 didDrawRect:(CGRect)arg2 ;
-(BOOL)webViewCanCheckGeolocationAuthorizationStatus:(id)arg1 ;
-(id)userAgentForURL:(id)arg1 ;
-(void)sheetControllerDidShowSheet:(id)arg1 ;
-(void)sheetController:(id)arg1 performAction:(int)arg2 forAlert:(id)arg3 ;
-(void)sheetControllerDidHideSheet:(id)arg1 ;
-(void)cancelFromAuthenticationManager:(id)arg1 forChallenge:(id)arg2 ;
-(void)logInFromAuthenticationManager:(id)arg1 withCredential:(id)arg2 forChallenge:(id)arg3 ;
-(id)browserView;
-(BOOL)privateBrowsingEnabled;
@end

