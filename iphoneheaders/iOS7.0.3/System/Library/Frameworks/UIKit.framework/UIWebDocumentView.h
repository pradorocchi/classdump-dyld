/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebTiledView.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/_UIRotatingActionSheetDelegate.h>
#import <UIKit/UITextAutoscrolling.h>
#import <UIKit/UIAutoscrollContainer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputPrivate.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UIModalViewDelegate.h>
#import <UIKit/UITextInputTokenizer.h>
#import <UIKit/_UIWebDoubleTapDelegate.h>
#import <UIKit/UIWebFileUploadPanelDelegate.h>

@protocol UITextInputDelegate;
@class WebView, WebViewReachabilityObserver, DOMHTMLElement, UIAutoscroll, CALayer, NSArray, UITextInputTraits, , UITapGestureRecognizer, _UIWebHighlightLongPressGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, _UIWebViewportHandler, WebThreadSafeUndoManager, UIWebSelectionAssistant, UITextInteractionAssistant, UITextChecker, UIWebFileUploadPanel, DOMElement, DOMRange, _UITextServiceSession, WebHistoryItem, UITextRange, NSDictionary, UITextPosition, UIView, UIColor, UIImage;

@interface UIWebDocumentView : UIWebTiledView <UIActionSheetDelegate, _UIRotatingActionSheetDelegate, UITextAutoscrolling, UIAutoscrollContainer, UIGestureRecognizerDelegate, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UIModalViewDelegate, UITextInputTokenizer, _UIWebDoubleTapDelegate, UIWebFileUploadPanelDelegate> {

	WebView* _webView;
	WebViewReachabilityObserver* _reachabilityObserver;
	id m_parentTextView;
	id _delegate;
	id _textSuggestionDelegate;
	CGRect _doubleTapRect;
	CGRect _mainDocumentDoubleTapRect;
	CGPoint _scrollPoint;
	CGPoint _doubleTapStartPosition;
	double _doubleTapStartTime;
	CGSize _pendingSize;
	int _orientation;
	DOMHTMLElement* _standaloneEditingElement;
	CGPoint _mouseDownPoint;
	double _mouseDownTime;
	UIAutoscroll* _autoscroll;
	CFDictionaryRef _plugInViews;
	int m_selectionGranularity;
	CALayer* _contentLayersHostingLayer;
	CALayer* _flattenedRotatingContentLayer;
	NSArray* _additionalSubviews;
	UITextInputTraits* _traits;
	<UITextInputDelegate>* _inputDelegate;
	UITapGestureRecognizer* _singleTapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerDoubleTapGestureRecognizer;
	_UIWebHighlightLongPressGestureRecognizer* _highlightLongPressGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIPanGestureRecognizer* _twoFingerPanGestureRecognizer;
	SCD_Struct_UI37 _interaction;
	_UIWebViewportHandler* _viewportHandler;
	int _documentType;
	float _documentScale;
	float _previousDocumentScale;
	CGSize _fixedLayoutOriginRoundingDelta;
	CGSize _fixedLayoutSizeRoundingDelta;
	unsigned _mouseDownCount;
	unsigned _dataDetectorTypes;
	unsigned _webCoreNeedsSetNeedsDisplay : 1;
	unsigned _webCoreNeedsDraw : 1;
	unsigned _ignoresFocusingMouse : 1;
	unsigned _ignoresKeyEvents : 1;
	unsigned _autoresizes : 1;
	unsigned _ignoresViewportOverflowWhenAutoresizing : 1;
	unsigned _shouldIgnoreCustomViewport : 1;
	unsigned _updatingSize : 1;
	unsigned _scalesToFit : 1;
	unsigned _updatesScrollView : 1;
	unsigned _hasCustomScale : 1;
	unsigned _shouldRestoreScrollPosition : 1;
	unsigned _pageNeedsReset : 1;
	unsigned _hasScrollPoint : 1;
	unsigned _gesturesDisabled : 1;
	unsigned _doubleTapRectIsReplaced : 1;
	unsigned _standaloneEditableView : 1;
	unsigned _widgetEditingView : 1;
	unsigned _mouseDragged : 1;
	unsigned _mouseReentrancyGuard : 1;
	unsigned _isShowingFullScreenPlugIn : 1;
	unsigned _isSettingRedrawFrame : 1;
	unsigned _needsScrollNotifications : 1;
	unsigned _loadsSynchronously : 1;
	unsigned _mouseDown : 1;
	unsigned _usePreTimberlineTransparencyBehavior : 1;
	unsigned _geolocationDialogAllowed : 1;
	unsigned _usingMinimalTilesDuringLoading : 1;
	unsigned _sheetsCount : 2;
	unsigned _didFirstVisuallyNonEmptyLayout : 1;
	unsigned _loadInProgress : 1;
	unsigned _uiwdvIsResigningFirstResponder : 1;
	unsigned _sizeUpdatesSuspended : 1;
	unsigned _sizeUpdateOccurredWhileSuspended : 1;
	unsigned _shouldOnlyRecognizeGesturesOnActiveElements : 1;
	unsigned _ignoresFocusEventFromFirstResponderChange : 1;
	unsigned _shouldCloseWebViewAtDealloc : 1;
	unsigned _shouldRemoveUserStyleSheet : 1;
	unsigned _hasDrawnTiles : 1;
	unsigned _showingTextStyleOptions : 1;
	unsigned _subviewCachesNeedUpdate : 1;
	unsigned _avoidFixedPositionUpdateViaDidScroll : 1;
	unsigned _inspectorSearchingForNode : 1;
	unsigned _previousScrollWasScrollToTop : 1;
	unsigned _pageIsLoadedFromPageCache : 1;
	unsigned _shouldSendWillShowInteractionHighlight : 1;
	WebThreadSafeUndoManager* _undoManager;
	UIWebSelectionAssistant* _webSelectionAssistant;
	UITextInteractionAssistant* _textSelectionAssistant;
	UITextChecker* _textChecker;
	UIEdgeInsets _caretInsets;
	UIWebFileUploadPanel* _fileUploadPanel;
	int _selectionAffinity;
	DOMElement* _dictationResultPlaceholder;
	id _dictationResultPlaceholderRemovalObserver;
	DOMRange* _rangeToRestoreAfterDictation;
	UIWebViewportConfiguration _defaultViewportConfigurations[5];
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	WebHistoryItem* _latestCommittedPageLoadHistoryItem;
	BOOL _suppressesIncrementalRendering;
	unsigned _renderTreeSize;
	unsigned _renderTreeSizeThresholdForReset;
	CGRect _exposedScrollViewRect;

}

@property (setter=_setAcceptsFirstResponder:,getter=_acceptsFirstResponder) BOOL _acceptsFirstResponder; 
@property (nonatomic,readonly) int selectionState; 
@property (assign,nonatomic) CGPoint autoscrollContentOffset; 
@property (assign,getter=isDoubleTapEnabled,nonatomic) BOOL doubleTapEnabled; 
@property (assign,nonatomic) BOOL shouldIgnoreCustomViewport; 
@property (assign,nonatomic) BOOL shouldOnlyRecognizeGesturesOnActiveElements; 
@property (assign,nonatomic) BOOL sizeUpdatesSuspended; 
@property (assign,nonatomic) BOOL mediaPlaybackAllowsAirPlay; 
@property (assign,nonatomic) BOOL suppressesIncrementalRendering;                                                     //@synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering - In the implementation block
@property (assign,nonatomic) CGRect exposedScrollViewRect;                                                            //@synthesize exposedScrollViewRect=_exposedScrollViewRect - In the implementation block
@property (nonatomic,readonly) unsigned renderTreeSize;                                                               //@synthesize renderTreeSize=_renderTreeSize - In the implementation block
@property (assign,nonatomic) unsigned renderTreeSizeThresholdForReset;                                                //@synthesize renderTreeSizeThresholdForReset=_renderTreeSizeThresholdForReset - In the implementation block
@property (nonatomic,retain) DOMRange * rangeToRestoreAfterDictation;                                                 //@synthesize rangeToRestoreAfterDictation=_rangeToRestoreAfterDictation - In the implementation block
@property (assign,nonatomic,@dynamic) int autocapitalizationType; 
@property (assign,nonatomic,@dynamic) int autocorrectionType; 
@property (assign,nonatomic,@dynamic) int spellCheckingType; 
@property (assign,nonatomic,@dynamic) int keyboardType; 
@property (assign,nonatomic,@dynamic) int keyboardAppearance; 
@property (assign,nonatomic,@dynamic) int returnKeyType; 
@property (assign,nonatomic,@dynamic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic,@dynamic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
@property (assign,nonatomic,@dynamic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,@dynamic,retain) UIColor * insertionPointColor; 
@property (nonatomic,@dynamic,retain) UIColor * selectionBarColor; 
@property (nonatomic,@dynamic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,@dynamic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic,@dynamic) unsigned insertionPointWidth; 
@property (assign,nonatomic,@dynamic) int textLoupeVisibility; 
@property (assign,nonatomic,@dynamic) int textSelectionBehavior; 
@property (assign,nonatomic,@dynamic) id textSuggestionDelegate; 
@property (assign,nonatomic,@dynamic) BOOL isSingleLineDocument; 
@property (assign,nonatomic,@dynamic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic,@dynamic) BOOL acceptsEmoji; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic,@dynamic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (assign,nonatomic) int selectionGranularity; 
+(void)initialize;
+(Class)layerClass;
+(id)standardTextViewPreferences;
+(double)getTimestamp;
+(BOOL)hasLandscapeOrientation;
+(id)_createDefaultHighlightView;
+(id)_sharedHighlightView;
-(id)mf_URLsForAttachmentsInRange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)subviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)isEditable;
-(id)scriptingInfoWithChildren;
-(id)contentView;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(id)_responderForBecomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)deferredBecomeFirstResponder;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGRect)visibleBounds;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(CGImageRef)createSnapshotWithRect:(CGRect)arg1 ;
-(void)_didScroll;
-(id)text;
-(BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2 ;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1 ;
-(CGRect)contentFrameForView:(id)arg1 ;
-(void)_setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id)textInputTraits;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)setTypingAttributes:(id)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(id)typingAttributes;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id)inputDelegate;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(int)selectionAffinity;
-(void)setSelectionAffinity:(int)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(id)_textSelectingContainer;
-(id)textColorForCaretSelection;
-(NSRange)selectionRange;
-(BOOL)hasMarkedText;
-(BOOL)canResignFirstResponder;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(id)selectedDOMRange;
-(id)webView;
-(id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4 ;
-(void)setIgnoresFocusingMouse:(BOOL)arg1 ;
-(void)setLoadsSynchronously:(BOOL)arg1 ;
-(void)_setParentTextView:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)makeWKFirstResponder;
-(void)selectAll:(id)arg1 ;
-(BOOL)clearWKFirstResponder;
-(void)_removeDefinitionController:(BOOL)arg1 ;
-(void)setSelectionToEnd;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)selectWord;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(void)ensureSelection;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(BOOL)hasSelection;
-(void)forwardInvocation:(id)arg1 ;
-(id)_focusedOrMainFrame;
-(BOOL)hasContent;
-(void)setAllowsDataDetectorsSheet:(BOOL)arg1 ;
-(unsigned)effectiveDataDetectorTypes;
-(void)tapInteractionWithLocation:(CGPoint)arg1 ;
-(void)startInteractionWithLocation:(CGPoint)arg1 ;
-(void)continueInteractionWithLocation:(CGPoint)arg1 ;
-(void)validateInteractionWithLocation:(CGPoint)arg1 ;
-(void)cancelInteraction;
-(BOOL)startActionSheet;
-(BOOL)isInInteraction;
-(BOOL)willInteractWithLocation:(CGPoint)arg1 ;
-(void)selectionChanged;
-(int)selectionGranularity;
-(void)setSelectionGranularity:(int)arg1 ;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)disableClearsOnInsertion;
-(void)updateSelection;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)setSelectionToStart;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(float)arg1 ;
-(Class)_printFormatterClass;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(float)_documentScale;
-(void)didRemovePlugInView:(id)arg1 ;
-(void)_setSubviewCachesNeedUpdate:(BOOL)arg1 ;
-(BOOL)requiresKeyEvents;
-(id)_parentTextView;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)handleKeyWebEvent:(id)arg1 ;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(void)addInputString:(id)arg1 withFlags:(unsigned)arg2 ;
-(void)collapseSelection;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(CGRect)caretRect;
-(void)clearSelection;
-(void)addInputString:(id)arg1 ;
-(void)deleteFromInput;
-(void)replaceCurrentWordWithText:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(unsigned short)characterInRelationToCaretSelection:(int)arg1 ;
-(unsigned short)characterAfterCaretSelection;
-(id)rectsForNSRange:(NSRange)arg1 ;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1 ;
-(int)wordOffsetInRange:(id)arg1 ;
-(int)selectionState;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(id)rangeByMovingCurrentSelection:(int)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg1 ;
-(void)extendCurrentSelection:(int)arg1 ;
-(CGRect)convertCaretRect:(CGRect)arg1 ;
-(BOOL)hasEditableSelection;
-(void)_reachabilityManagerNotifiedIsReachable:(BOOL)arg1 ;
-(void)setInitialScale:(float)arg1 forDocumentTypes:(int)arg2 ;
-(void)setMinimumScale:(float)arg1 forDocumentTypes:(int)arg2 ;
-(void)setMaximumScale:(float)arg1 forDocumentTypes:(int)arg2 ;
-(void)setAllowsUserScaling:(BOOL)arg1 forDocumentTypes:(int)arg2 ;
-(void)setViewportSize:(CGSize)arg1 forDocumentTypes:(int)arg2 ;
-(CGRect)webViewFrameForUIFrame:(CGRect)arg1 ;
-(id)initWithWebView:(id)arg1 frame:(CGRect)arg2 ;
-(void)installGestureRecognizers;
-(void)setMinimumSize:(CGSize)arg1 ;
-(void)_restoreViewportSettingsWithSize:(CGSize)arg1 ;
-(void)sendOrientationEventForOrientation:(int)arg1 ;
-(void)selectionChanged:(id)arg1 ;
-(void)_resetShowingTextStyle:(id)arg1 ;
-(void)_inspectorDidStartSearchingForNode:(id)arg1 ;
-(void)_inspectorDidStopSearchingForNode:(id)arg1 ;
-(id)_groupName;
-(BOOL)_dataDetectionIsActivated;
-(void)cancelInteractionWithImmediateDisplay:(BOOL)arg1 ;
-(void)_cleanupSheet;
-(void)_updateScrollViewBoundaryZoomScales;
-(void)completeInteraction;
-(void)stopLoading:(id)arg1 ;
-(void)_runLoadBlock:(/*^block*/ id)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)_cleanUpFrameStateAndLoad:(/*^block*/ id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)_updateWebKitExposedScrollViewRect;
-(void)_notifyContentHostingLayersOfScaleChange;
-(void)_notifyPlugInViewsOfScaleChange;
-(void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
-(float)initialScale;
-(float)maximumScale;
-(float)minimumScale;
-(void)_setDocumentScale:(float)arg1 ;
-(void)_updateFixedPositionedObjectsLayoutRectUsingWebThread:(BOOL)arg1 synchronize:(BOOL)arg2 ;
-(void)_applyViewportArguments:(id)arg1 ;
-(void)_setDocumentType:(int)arg1 overrideCustomConfigurations:(BOOL)arg2 viewportArguments:(id)arg3 ;
-(void)_updateSize;
-(CGRect)documentBounds;
-(void)_setDocumentType:(int)arg1 ;
-(BOOL)isClassicViewportMode;
-(void)sendScrollEventIfNecessaryWasUserScroll:(BOOL)arg1 ;
-(void)_updateFixedPositioningObjectsLayoutDuringScroll;
-(void)setTilingArea:(int)arg1 ;
-(void)resetTilingAfterLoadComplete;
-(void)_selectionLayoutChangedByScrolling:(BOOL)arg1 ;
-(void)_editableSelectionLayoutChangedByScrolling:(BOOL)arg1 ;
-(void)_resetFormDataForFrame:(id)arg1 ;
-(void)_clearDoubleTapRect;
-(void)_clearAllConsoleMessages;
-(void)_WAKViewSizeDidChange:(id)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 updateCurrentViewportConfigurationSize:(BOOL)arg2 ;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_restoreScrollPointForce:(BOOL)arg1 ;
-(void)_showPendingContentLayers;
-(void)_saveStateToHistoryItem:(id)arg1 ;
-(BOOL)_shouldResetForNewPage;
-(void)_resetForNewPage;
-(void)_cancelLongPressGestureRecognizer;
-(void)_updateFixedPositionContent;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(CGRect)_documentViewVisibleRect;
-(float)_zoomedDocumentScale;
-(CGRect)_layoutRectForFixedPositionObjects;
-(CGRect)_adjustedLayoutRectForFixedPositionObjects;
-(BOOL)isInsideRichlyEditableTextWidget;
-(id)formElement;
-(BOOL)hasRichlyEditableSelection;
-(BOOL)fragmentContainsRichContent:(id)arg1 ;
-(id)_supportedPasteboardTypesForCurrentSelection;
-(void)_updateSubviewCaches;
-(void)_reshapePlugInViews;
-(id)_collectAdditionalSubviews;
-(BOOL)_shouldUpdateSubviewCachesForPlugins;
-(BOOL)_isInspectorSearchingForNode;
-(void)webViewDidDrawTiles:(id)arg1 ;
-(void)_restoreFlattenedContentLayers;
-(void)updateInteractionElements;
-(void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)mediaPlaybackAllowsAirPlay;
-(BOOL)_acceptsFirstResponder;
-(void)_removeShortcutController:(BOOL)arg1 ;
-(void)setInteractionAssistantGestureRecognizers;
-(void)_undoManagerDidUndo:(id)arg1 ;
-(void)_undoManagerDidRedo:(id)arg1 ;
-(BOOL)isEditingSingleLineElement;
-(id)rangeToRestoreAfterDictation;
-(void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2 ;
-(void)setRangeToRestoreAfterDictation:(id)arg1 ;
-(id)dictationResultMetadataForRange:(id)arg1 ;
-(BOOL)hasRangedSelection;
-(BOOL)isCaretInEmptyParagraph;
-(BOOL)_dictationPlaceholderHasBeenRemoved;
-(CGRect)convertRectFromSelectedFrameCoordinates:(CGRect)arg1 ;
-(void)_finishedUsingDictationPlaceholder;
-(void)clearMarkedText;
-(void)setCaretChangeListener:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 withEvents:(BOOL)arg2 ;
-(BOOL)isShowingFullScreenPlugInUI;
-(id)selectionRectsForDOMRange:(id)arg1 ;
-(CGRect)_shortcutPresentationRect;
-(void)toggleBaseWritingDirection;
-(int)selectionBaseWritingDirection;
-(BOOL)inPopover;
-(void)sendScrollEventIfNecessary;
-(void)_notifyPlugInViewsOfWillBeginZooming;
-(void)_notifyPlugInViewsOfDidZoom;
-(void)_notifyPlugInViewsOfDidEndZooming;
-(unsigned)_contentSizeInExposedRect:(CGRect)arg1 topLayer:(id)arg2 visibleLayerCount:(int*)arg3 ;
-(BOOL)_shouldFlattenContentLayersForRect:(CGRect)arg1 ;
-(void*)_createIOSurfaceFromRect:(CGRect)arg1 ;
-(BOOL)containsOnlySelectableElements;
-(id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(CGRect)caretRectForVisiblePosition:(id)arg1 ;
-(id)webVisiblePositionForPoint:(CGPoint)arg1 ;
-(void)setBaseWritingDirection:(int)arg1 ;
-(float)minimumScaleForMinimumSize:(CGSize)arg1 ;
-(float)minimumScaleForSize:(CGSize)arg1 ;
-(float)maximumDoubleTapScale;
-(id)enclosingScrollView;
-(float)zoomedDocumentScale;
-(float)currentDocumentScale;
-(CGRect)visibleContentRect;
-(CGRect)rectOfInterestForPoint:(CGPoint)arg1 ;
-(SCD_Struct_UI33)doubleTapScalesForSize:(CGSize)arg1 ;
-(BOOL)considerHeightForDoubleTap;
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(float)arg2 ;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(float)arg2 forDuration:(double)arg3 ;
-(void)fileUploadPanelDidDismiss:(id)arg1 ;
-(void)enableReachability;
-(BOOL)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)didFirstVisuallyNonEmptyLayout;
-(BOOL)hasDrawnTiles;
-(BOOL)loadsSynchronously;
-(void)setUserStyleSheet:(id)arg1 ;
-(void)setDetectsPhoneNumbers:(BOOL)arg1 ;
-(BOOL)detectsPhoneNumbers;
-(void)setUsePreTimberlineTransparencyBehavior;
-(void)viewportHandlerDidChangeScales:(id)arg1 ;
-(void)viewportHandler:(id)arg1 didChangeViewportSize:(CGSize)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toFrame:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromFrame:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toFrame:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromFrame:(id)arg2 ;
-(void)setSizeUpdatesSuspended:(BOOL)arg1 ;
-(BOOL)sizeUpdatesSuspended;
-(void)setShouldIgnoreCustomViewport:(BOOL)arg1 ;
-(BOOL)shouldIgnoreCustomViewport;
-(void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 ;
-(void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3 ;
-(BOOL)needsScrollNotifications;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webThreadWebViewDidLayout:(id)arg1 byScrolling:(BOOL)arg2 ;
-(void)webViewDidStartOverflowScroll:(id)arg1 ;
-(void)webViewDidEndOverflowScroll:(id)arg1 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4 ;
-(void)webViewDidRestoreFromPageCache:(id)arg1 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2 ;
-(void)setAutoresizes:(BOOL)arg1 ;
-(void)setIgnoresViewportOverflowWhenAutoresizing:(BOOL)arg1 ;
-(void)setUpdatesScrollView:(BOOL)arg1 ;
-(BOOL)updatesScrollView;
-(void)saveStateToCurrentHistoryItem;
-(void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4 ;
-(BOOL)webView:(id)arg1 shouldScrollToPoint:(CGPoint)arg2 forFrame:(id)arg3 ;
-(void)forceLayout;
-(void)setSmoothsFonts:(BOOL)arg1 ;
-(void)setIgnoresKeyEvents:(BOOL)arg1 ;
-(BOOL)_isSubviewOfPlugInView:(id)arg1 ;
-(void)writeDataToPasteboard:(id)arg1 ;
-(int)getPasteboardItemsCount;
-(BOOL)performsTwoStepPaste:(id)arg1 ;
-(id)readDataFromPasteboard:(id)arg1 withIndex:(int)arg2 ;
-(int)getPasteboardChangeCount;
-(BOOL)isUnperturbedDictationResultMarker:(id)arg1 ;
-(void)revealedSelectionByScrollingWebFrame:(id)arg1 ;
-(void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(void)_renderUnbufferedInContext:(CGContextRef)arg1 ;
-(id)checkSpellingOfString:(id)arg1 ;
-(void)redrawScaledDocument;
-(void)willRotateInteractionSheet;
-(void)didRotateInteractionSheet;
-(void)setShouldOnlyRecognizeGesturesOnActiveElements:(BOOL)arg1 ;
-(BOOL)shouldOnlyRecognizeGesturesOnActiveElements;
-(void)setDoubleTapEnabled:(BOOL)arg1 ;
-(BOOL)isDoubleTapEnabled;
-(BOOL)_handleSingleTapZoomPreClickAtLocation:(CGPoint)arg1 ;
-(void)_handleSingleTapZoomPostClickAtLocation:(CGPoint)arg1 ;
-(void)_handleDoubleTapAtLocation:(CGPoint)arg1 ;
-(void)_handleTwoFingerDoubleTapAtLocation:(CGPoint)arg1 ;
-(CGRect)doubleTapRect;
-(BOOL)doubleTapRectIsReplaced;
-(void)assistFormNode:(id)arg1 ;
-(id)textFormElement;
-(void)setIsStandaloneEditableView:(BOOL)arg1 ;
-(BOOL)isStandaloneEditableView;
-(void)setStandaloneEditingElement:(id)arg1 ;
-(id)standaloneEditingElement;
-(void)setIsWidgetEditingView:(BOOL)arg1 ;
-(BOOL)isWidgetEditingView;
-(BOOL)updateKeyboardStateOnResponderChanges;
-(id)dictationInterpretations;
-(void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 ;
-(id)implementationWebView;
-(void)setPaused:(BOOL)arg1 ;
-(id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3 ;
-(void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2 ;
-(BOOL)hasPlugInSubviews;
-(void)webView:(id)arg1 willAddPlugInView:(id)arg2 ;
-(id)webSelectionAssistant;
-(CGRect)visibleFrame;
-(CGRect)visibleContentFrame;
-(CGRect)autoscrollDragFrame;
-(CGRect)autoscrollContentFrame;
-(BOOL)playsNicelyWithGestures;
-(void)useSelectionAssistantWithMode:(int)arg1 ;
-(void)willStartScroll;
-(void)willStartScrollToTop;
-(void)didEndScroll;
-(void)scrollViewWasRemoved;
-(void)willStartZoom;
-(void)didZoom;
-(void)didEndZoom;
-(void)_flattenAndSwapContentLayersInRect:(CGRect)arg1 ;
-(void)setTileUpdatesDisabled:(BOOL)arg1 ;
-(BOOL)hasSimpleTextOnlyStructure;
-(void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(id)rangeOfEnclosingWord:(id)arg1 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)_documentUrl;
-(int)documentType;
-(void)setRenderTreeSizeThresholdForReset:(unsigned)arg1 ;
-(BOOL)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(BOOL)arg1 ;
-(CGRect)exposedScrollViewRect;
-(unsigned)renderTreeSize;
-(unsigned)renderTreeSizeThresholdForReset;
-(id)_doubleTapGestureRecognizer;
-(id)_scriptingInfoForLink:(id)arg1 ;
-(id)_scriptingInfoForForm:(id)arg1 ;
-(UIEdgeInsets)caretInsets;
-(void)clearInteractionTimer;
-(void)highlightApproximateNodeInverted:(BOOL)arg1 ;
-(void)_resetInteractionWithLocation:(CGPoint)arg1 ;
-(void)attemptClick:(id)arg1 ;
-(void)_showDataDetectorsSheet;
-(void)_showLinkSheet;
-(id)approximateNodeAtViewportLocation:(CGPoint*)arg1 ;
-(void)_singleTapRecognized:(id)arg1 ;
-(void)_doubleTapRecognized:(id)arg1 ;
-(void)_twoFingerDoubleTapRecognized:(id)arg1 ;
-(void)_highlightLongPressRecognized:(id)arg1 ;
-(void)_longPressRecognized:(id)arg1 ;
-(void)_twoFingerPanRecognized:(id)arg1 ;
-(void)_showImageSheet;
-(SEL)_actionForLongPressOnElement:(id)arg1 ;
-(BOOL)supportsTwoFingerScrollingAtTouchLocation:(CGPoint)arg1 andLocation:(CGPoint)arg2 ;
-(void)sendScrollWheelEvents;
-(void)_syntheticMouseEventNotHandledAtLocation:(CGPoint)arg1 ;
-(void)deferInteraction;
-(void)performClick:(id)arg1 ;
-(id)deepestNodeAtViewportLocation:(CGPoint)arg1 ;
-(void)_sendMouseMoveAndAttemptClick:(id)arg1 ;
-(void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2 ;
-(void)resetInteraction;
-(void)hideTapHighlight;
-(id)_targetURL;
-(BOOL)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2 ;
-(void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(void)highlightApproximateNodeAndDisplayInfoSheet;
-(void)setInteractionDelegate:(id)arg1 ;
-(id)interactionDelegate;
-(void)setAllowsImageSheet:(BOOL)arg1 ;
-(void)setAllowsLinkSheet:(BOOL)arg1 ;
-(id)interactionElement;
-(CGPoint)interactionLocation;
-(id)superviewForSheet;
-(void)_setAcceptsFirstResponder:(BOOL)arg1 ;
-(void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(BOOL)arg2 ;
-(void)actionDidFinish;
-(CGRect)_presentationRectForSheetGivenPoint:(CGPoint)arg1 inHostView:(id)arg2 ;
-(id)hostViewForSheet:(id)arg1 ;
-(CGRect)initialPresentationRectInHostViewForSheet:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet:(id)arg1 ;
-(id)beginPrintModeWithWidth:(float)arg1 height:(float)arg2 startOffset:(float)arg3 shrinkToFit:(BOOL)arg4 tileClippedContent:(BOOL)arg5 ;
-(id)beginPrintModeForFrame:(id)arg1 withWidth:(float)arg2 height:(float)arg3 startOffset:(float)arg4 shrinkToFit:(BOOL)arg5 tileClippedContent:(BOOL)arg6 ;
-(id)beginPrintModeForFrame:(id)arg1 withSize:(CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5 tileClippedContent:(BOOL)arg6 ;
-(id)_beginPrintModeForHTMLView:(id)arg1 withSize:(CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5 tileClippedContent:(BOOL)arg6 ;
-(id)_beginPrintModeForPDFView:(id)arg1 withSize:(CGSize)arg2 startOffset:(float)arg3 minimumLayoutWidth:(float)arg4 maximumLayoutWidth:(float)arg5 ;
-(void)_drawPDFPagesForPage:(unsigned)arg1 withPaginationInfo:(id)arg2 ;
-(BOOL)isInPrintMode;
-(id)beginPrintModeWithWidth:(float)arg1 height:(float)arg2 startOffset:(float)arg3 shrinkToFit:(BOOL)arg4 ;
-(id)beginPrintModeWithSize:(CGSize)arg1 startOffset:(float)arg2 minimumLayoutWidth:(float)arg3 maximumLayoutWidth:(float)arg4 tileClippedContent:(BOOL)arg5 ;
-(void)endPrintMode;
-(void)drawPage:(unsigned)arg1 withPaginationInfo:(id)arg2 ;
-(BOOL)mouseEventsChangeSelection;
-(id)selectionRects;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)setRangedSelectionWithExtentPoint:(CGPoint)arg1 ;
-(void)setSelectionWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2 ;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 ;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(CGPoint)convertPointToSelectedFrameCoordinates:(CGPoint)arg1 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(void)setRangedSelectionExtentPoint:(CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(id)wordAtPoint:(CGPoint)arg1 ;
-(void)smartExtendRangedSelection:(int)arg1 ;
-(BOOL)selectionIsCaretInDisplayBlockElementAtOffset:(int)arg1 ;
-(unsigned)offsetInMarkedTextForSelection:(id)arg1 ;
-(void)setCaretInsets:(UIEdgeInsets)arg1 ;
-(id)textInDOMRange:(id)arg1 ;
-(id)asText;
-(id)positionAtStartOrEndOfWord:(id)arg1 ;
@end

