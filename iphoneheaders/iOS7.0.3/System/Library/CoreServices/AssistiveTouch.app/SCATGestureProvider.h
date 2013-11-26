/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElementManager.h>
#import <assistivetouchd/SCATMenuObserver.h>
#import <assistivetouchd/SCATPointPickerDelegate.h>
#import <assistivetouchd/SCATMenuGeneralGestureItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuFlickItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuFingerItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuPanItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuStopContinuousGestureItemViewDelegate.h>
#import <assistivetouchd/SCATMenuGestureConfirmationItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuPinchItemsViewDelegate.h>
#import <assistivetouchd/SCATMenuCustomGestureItemsViewDelegate.h>
#import <assistivetouchd/SCATGestureDrawingViewDelegate.h>
#import <assistivetouchd/SCATModernMenuItemDelegate.h>
#import <assistivetouchd/SCATGestureFingersElementDelegate.h>

@protocol SCATGestureProviderDelegate;
@class SCATMenu, NSTimer, SCATPointPicker, SCATGestureDrawingElementManager, NSMutableArray, NSString, SCATGestureFingersElement, , SCATGestureArrowView, SCATElementManager, NSArray;

@interface SCATGestureProvider : SCATElementManager <SCATMenuObserver, SCATPointPickerDelegate, SCATMenuGeneralGestureItemsViewDelegate, SCATMenuFlickItemsViewDelegate, SCATMenuFingerItemsViewDelegate, SCATMenuPanItemsViewDelegate, SCATMenuStopContinuousGestureItemViewDelegate, SCATMenuGestureConfirmationItemsViewDelegate, SCATMenuPinchItemsViewDelegate, SCATMenuCustomGestureItemsViewDelegate, SCATGestureDrawingViewDelegate, SCATModernMenuItemDelegate, SCATGestureFingersElementDelegate> {

	SCATMenu* _menu;
	NSTimer* _tellMeWhenGestureTimer;
	SCATPointPicker* _lineGesturePointPicker;
	SCATGestureDrawingElementManager* _drawingElementManager;
	NSMutableArray* _continuousGesturePoints;
	NSMutableArray* _continuousGestureTimes;
	NSString* _continuousGestureName;
	BOOL _showsFingers;
	unsigned _numberOfFingersForGestures;
	BOOL _isReversingContinuousGesture;
	BOOL _needsScanning;
	SCATGestureFingersElement* _elementForFingers;
	BOOL _hidden;
	BOOL _isPinching;
	BOOL _shouldAllowFingersForContinuousGesture;
	<SCATGestureProviderDelegate>* _delegate;
	SCATGestureArrowView* _arrowView;
	SCATElementManager* _currentSwitchController;
	NSArray* _panFingerPositions;
	NSArray* _pinchFingerOriginalPositions;
	float _pinchRadius;
	float _pinchAngle;
	unsigned _lineGestureState;
	unsigned _lineGestureType;
	float _alphaForFingers;
	CGPoint _startingScreenPointForGestures;
	CGPoint _pinchFulcrum;
	CGPoint _endPointForLineGesture;

}

@property (assign,nonatomic) <SCATGestureProviderDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                               //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) <SCATElement> * elementForFingers; 
@property (nonatomic,retain) SCATGestureArrowView * arrowView;                          //@synthesize arrowView=_arrowView - In the implementation block
@property (assign,nonatomic) CGPoint startingScreenPointForGestures;                    //@synthesize startingScreenPointForGestures=_startingScreenPointForGestures - In the implementation block
@property (nonatomic,retain) SCATElementManager * currentSwitchController;              //@synthesize currentSwitchController=_currentSwitchController - In the implementation block
@property (nonatomic,retain) NSArray * panFingerPositions;                              //@synthesize panFingerPositions=_panFingerPositions - In the implementation block
@property (assign,nonatomic) BOOL isPinching;                                           //@synthesize isPinching=_isPinching - In the implementation block
@property (nonatomic,retain) NSArray * pinchFingerOriginalPositions;                    //@synthesize pinchFingerOriginalPositions=_pinchFingerOriginalPositions - In the implementation block
@property (assign,nonatomic) CGPoint pinchFulcrum;                                      //@synthesize pinchFulcrum=_pinchFulcrum - In the implementation block
@property (assign,nonatomic) float pinchRadius;                                         //@synthesize pinchRadius=_pinchRadius - In the implementation block
@property (assign,nonatomic) float pinchAngle;                                          //@synthesize pinchAngle=_pinchAngle - In the implementation block
@property (assign,nonatomic) unsigned lineGestureState;                                 //@synthesize lineGestureState=_lineGestureState - In the implementation block
@property (assign,nonatomic) unsigned lineGestureType;                                  //@synthesize lineGestureType=_lineGestureType - In the implementation block
@property (assign,nonatomic) CGPoint endPointForLineGesture;                            //@synthesize endPointForLineGesture=_endPointForLineGesture - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowFingersForContinuousGesture;               //@synthesize shouldAllowFingersForContinuousGesture=_shouldAllowFingersForContinuousGesture - In the implementation block
@property (assign,nonatomic) float alphaForFingers;                                     //@synthesize alphaForFingers=_alphaForFingers - In the implementation block
-(BOOL)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(void)pointPickerDidFinishSweeping:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(BOOL)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(BOOL)shouldKeepScannerAwake;
-(void)fingersElement:(id)arg1 didBecomeFocused:(BOOL)arg2 ;
-(void)didActivateFingersElement:(id)arg1 ;
-(id)initWithMenu:(id)arg1 ;
-(BOOL)canBeActiveElementManager;
-(void)_clearTellMeWhenTimer;
-(void)_clearArrowView;
-(void)_updateStartingPointForGesturesWithScreenPoint:(id)arg1 ;
-(void)_updateVisibleFingers;
-(void)_updateShowsFingers;
-(id)arrowView;
-(void)setStartingScreenPointForGestures:(CGPoint)arg1 ;
-(CGPoint)startingScreenPointForGestures;
-(id)_startingPointsAsValues;
-(id)_pointStringsFromPointValues:(id)arg1 ;
-(CGPoint)_startingPointForGestures;
-(unsigned)_numberOfFingers;
-(void)setAlphaForFingers:(float)arg1 ;
-(void)_resetContinuousGestureData;
-(void)_addPointsToContinuousGestureData:(id)arg1 ;
-(void)_saveRecentGesture:(id)arg1 ;
-(void)setPanFingerPositions:(id)arg1 ;
-(void)setShouldAllowFingersForContinuousGesture:(BOOL)arg1 ;
-(void)_performGesture:(id)arg1 saveToRecents:(BOOL)arg2 ;
-(void)_performGesture:(id)arg1 ;
-(CGPoint)pinchFulcrum;
-(CGPoint)_fingerPositionForMidpoint:(CGPoint)arg1 ;
-(float)pinchRadius;
-(float)pinchAngle;
-(float)_pinchRadiusAdjustedByDelta:(float)arg1 ;
-(float)_pinchAngleAdjustedByDelta:(float)arg1 ;
-(id)pinchFingerOriginalPositions;
-(id)_pinchPositionsWithRadius:(float)arg1 angle:(float)arg2 ;
-(id)_pointValuesFromPointStrings:(id)arg1 ;
-(void)setPinchRadius:(float)arg1 ;
-(void)setPinchAngle:(float)arg1 ;
-(void)_updatePinchPositionsWithAttemptedRadiusDelta:(float)arg1 angleDelta:(float)arg2 ;
-(id)panFingerPositions;
-(id)_panPositionsAdjustedByDelta:(CGSize)arg1 ;
-(id)_startingPointsAsStrings;
-(void)_panByDelta:(CGSize)arg1 ;
-(CGPoint)endPointForLineGesture;
-(unsigned)lineGestureType;
-(void)setIsPinching:(BOOL)arg1 ;
-(float)alphaForFingers;
-(BOOL)isPinching;
-(void)setArrowView:(id)arg1 ;
-(unsigned)lineGestureState;
-(id)currentSwitchController;
-(unsigned)_numberOfFingersWithGestureSheet:(BOOL)arg1 ;
-(BOOL)shouldAllowFingersForContinuousGesture;
-(void)_setShowsFingers:(BOOL)arg1 ;
-(CGRect)_rectForFingers:(id)arg1 ;
-(void)setLineGestureState:(unsigned)arg1 ;
-(void)setCurrentSwitchController:(id)arg1 ;
-(void)setLineGestureType:(unsigned)arg1 ;
-(id)_promptForLineGesture:(unsigned)arg1 ;
-(void)setEndPointForLineGesture:(CGPoint)arg1 ;
-(void)_startPickingEndPointForLineGesture:(unsigned)arg1 ;
-(void)_performTapGestureForDoubleTap:(BOOL)arg1 ;
-(id)tapGestureMenuItemForSheet:(id)arg1 ;
-(id)tapAndHoldGestureMenuItemForSheet:(id)arg1 ;
-(void)_performFlickGestureWithAngle:(float)arg1 name:(id)arg2 ;
-(void)_didChooseFlickWithAngle:(float)arg1 name:(id)arg2 ;
-(void)_prepareToBeginContinuousGesture;
-(void)_startTellMeWhenTimerWithSelector:(SEL)arg1 ;
-(void)_initializeContinuousGestureDataWithName:(id)arg1 points:(id)arg2 ;
-(void)_panLeft;
-(void)_didChoosePanWithName:(id)arg1 selector:(SEL)arg2 ;
-(void)_panRight;
-(void)_panUp;
-(void)_panDown;
-(CGPoint)_midpointFromFingerPosition:(CGPoint)arg1 ;
-(void)setPinchFulcrum:(CGPoint)arg1 ;
-(void)setPinchFingerOriginalPositions:(id)arg1 ;
-(void)_pinchIn;
-(void)_didChoosePinchItemWithName:(id)arg1 selector:(SEL)arg2 ;
-(void)_pinchOut;
-(void)_rotateClockwise;
-(void)_rotateCounterclockwise;
-(void)_startPinchMode;
-(void)_endPinchMode;
-(CGRect)_rectToClearForPinchGesture;
-(void)_handleCompletedContinuousGesture;
-(void)_finishLineGesture;
-(void)_clearLineGestureState;
-(void)_setNumberOfFingersForGestures:(unsigned)arg1 ;
-(CGPoint)_centerOfFingersForGesture:(id)arg1 ;
-(id)_repositionedGestureFromOriginalGesture:(id)arg1 ;
-(BOOL)_isPerformingContinuousGesture;
-(void)_startConfirmingLineGestureWithEndpoint:(CGPoint)arg1 ;
-(void)_requestSwitchControllerPrivileges;
-(void)_resignSwitchControllerPrivileges;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(void)scannerWillMakeManagerActive:(id)arg1 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(void)_performTap;
-(void)_performTapAndHold;
-(void)menuWillAppear:(id)arg1 ;
-(void)menuDidAppear:(id)arg1 ;
-(void)menuWillDisappear:(id)arg1 ;
-(void)menuDidDisappear:(id)arg1 ;
-(void)menuDidFinishTransition:(id)arg1 ;
-(void)menuDidUpdateTipObject:(id)arg1 ;
-(void)pointPicker:(id)arg1 didPickPoint:(CGPoint)arg2 ;
-(void)pointPicker:(id)arg1 didSweepIntoFocusContext:(id)arg2 isRefiningPoint:(BOOL)arg3 ;
-(void)pointPicker:(id)arg1 didSweepOutOfFocusContext:(id)arg2 isRefiningPoint:(BOOL)arg3 ;
-(void)didChooseFavorites:(id)arg1 ;
-(void)didChoosePanGesture:(id)arg1 ;
-(void)didChooseFlickGesture:(id)arg1 ;
-(void)didChoosePinchGesture:(id)arg1 ;
-(void)didChooseDragGesture:(id)arg1 ;
-(void)didChooseDoubleTapGesture:(id)arg1 ;
-(void)didChooseHoldAndDragGesture:(id)arg1 ;
-(void)didChooseDrawingGesture:(id)arg1 ;
-(void)didChooseFingers:(id)arg1 ;
-(id)tapGestureMenuItem:(id)arg1 ;
-(id)tapAndHoldGestureMenuItem:(id)arg1 ;
-(unsigned)numberOfFingers:(id)arg1 ;
-(void)didChooseFlickLeft:(id)arg1 ;
-(void)didChooseFlickRight:(id)arg1 ;
-(void)didChooseFlickUp:(id)arg1 ;
-(void)didChooseFlickDown:(id)arg1 ;
-(void)didChooseArbitraryFlick:(id)arg1 ;
-(void)fingerItemsViewController:(id)arg1 didChooseNumberOfFingers:(unsigned)arg2 ;
-(void)didChoosePanLeft:(id)arg1 ;
-(void)didChoosePanRight:(id)arg1 ;
-(void)didChoosePanUp:(id)arg1 ;
-(void)didChoosePanDown:(id)arg1 ;
-(void)didChooseStop:(id)arg1 ;
-(CGRect)rectToClearForStop:(id)arg1 ;
-(id)nameForConfirmationButton:(id)arg1 ;
-(void)didConfirmGesture:(id)arg1 ;
-(void)didRequestRedoGesture:(id)arg1 ;
-(void)didCancelGesture:(id)arg1 ;
-(void)didPushPinchItemsViewController:(id)arg1 ;
-(void)willPopPinchItemsViewController:(id)arg1 ;
-(void)didChoosePinchIn:(id)arg1 ;
-(void)didChoosePinchOut:(id)arg1 ;
-(void)didChooseRotateClockwise:(id)arg1 ;
-(void)didChooseRotateCounterclockwise:(id)arg1 ;
-(CGRect)rectToClearForPinchGesture:(id)arg1 ;
-(id)contextForCustomGestureItemsViewController:(id)arg1 ;
-(void)customGestureItemsViewController:(id)arg1 didChooseGesture:(id)arg2 ;
-(void)didChooseAddRecentInCustomGestureItemsViewController:(id)arg1 ;
-(void)didChooseCreateInCustomGestureItemsViewController:(id)arg1 ;
-(void)touchDownForDrawingViewController:(id)arg1 ;
-(void)touchUpForDrawingViewController:(id)arg1 ;
-(BOOL)drawingViewController:(id)arg1 moveFingersToPoints:(id)arg2 ;
-(void)exitDrawingViewController:(id)arg1 ;
-(void)drawingViewController:(id)arg1 shouldResetScanningFromElement:(id)arg2 ;
-(id)elementForFingers;
-(CGRect)rectToClearForFingersWithGestureSheet:(BOOL)arg1 ;
-(id)gesturesSheet;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)delegate;
-(id)identifier;
@end

