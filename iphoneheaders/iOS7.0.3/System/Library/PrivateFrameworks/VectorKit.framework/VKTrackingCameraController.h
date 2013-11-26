/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>

@protocol VKTrackingCameraControllerDelegate;
@class , VKAnimation, VKMapModel, VKCameraContext;

@interface VKTrackingCameraController : VKCameraController {

	<VKTrackingCameraControllerDelegate>* _trackingDelegate;
	int _viewStyle;
	int _focusStyle;
	VKAnimation* _animation;
	double _verticalGroundspan;
	double _verticalGroundspanScale;
	VKPoint _farthestPoi;
	SCD_Struct_VK71 _puckPosition;
	VKPoint _puckTargetPosition;
	double _startZoomScale;
	double _endZoomScale;
	double _zoomScale;
	double _startPinchScale;
	VKMapModel* _mapModel;
	double _startTime;
	BOOL _animatingIn;
	double _startPitch;
	double _startCourse;
	double _startDistance;
	VKPoint _startPuckScreenPosition;
	/*^block*/ id _completionHandler;
	double _puckOffset;
	VKPoint _previousReference;
	double _previousCourse;
	double _previousOffset;
	VKCircularBuffer<double>* _rotationRateBuffer;
	double _previousStepTime;
	VKAnimation* _tapZoomAnimation;
	double _tracePlaybackSpeedMultiplier;
	BOOL _receivedFirstUpdate;
	BOOL _puckAnimatorRunning;
	double _cruisePhi;
	double _cruiseHeight;
	double _cruisePhiOverride;
	double _cruiseHeightOverride;
	VKCameraContext* _lastCameraContext;
	BOOL _shouldLimitTopDownHeight;
	VKEdgeInsets _insets;
	BOOL _insetsAnimating;
	double _puckOffsetDelta;
	VKNavigationCameraModel _cameraModel;
	int _panStyle;
	State _panStartCameraState;
	Vec3Imp<double> _panCameraOffset;
	SCD_Struct_VK42 _panCameraOrientation;
	SCD_Struct_VK47 _panCameraOrientationQuaternion;
	double _panReturnStartTime;
	CGPoint _startPanPoint;
	double _panCourseOffset;
	double _panPitchOffset;
	VKAnimation* _panAnimation;
	BOOL _panning;
	double _pitchOffset;
	VKAnimation* _pitchAnimation;
	BOOL _pitching;
	BOOL _zooming;
	double _userZoomFocusStyleZoomScale;
	double _userZoomFocusStyleMinZoomScale;
	double _userZoomFocusStyleMaxZoomScale;
	VKAnimation* _zoomScaleAnimation;
	VKAnimation* _horizontalOffsetAnimation;
	double _horizontalOffset;

}

@property (assign,nonatomic) <VKTrackingCameraControllerDelegate> * trackingDelegate;              //@synthesize trackingDelegate=_trackingDelegate - In the implementation block
@property (nonatomic,retain) VKMapModel * mapModel;                                                //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) int panStyle;                                                         //@synthesize panStyle=_panStyle - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (assign,nonatomic) double tracePlaybackSpeedMultiplier;                                  //@synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier - In the implementation block
@property (assign,nonatomic) BOOL shouldLimitTopDownHeight;                                        //@synthesize shouldLimitTopDownHeight=_shouldLimitTopDownHeight - In the implementation block
@property (assign,nonatomic) double verticalGroundspanScale;                                       //@synthesize verticalGroundspanScale=_verticalGroundspanScale - In the implementation block
@property (assign,nonatomic) double userZoomFocusStyleGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMinGroundspanMeters; 
@property (assign,nonatomic) double userZoomFocusStyleMaxGroundspanMeters; 
-(void)dealloc;
-(id)init;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)stop;
-(void)_step;
-(BOOL)isGesturing;
-(void)setGesturing:(BOOL)arg1 ;
-(id)detailedDescription;
-(void)edgeInsetsDidEndAnimating;
-(void)edgeInsetsWillBeginAnimating;
-(void)updateCameraContext:(id)arg1 ;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3 ;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1 ;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2 ;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_VK54*)arg2 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(VKPoint)arg2 ;
-(void)setUserZoomFocusStyleGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleGroundspanMeters;
-(void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleMinGroundspanMeters;
-(void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1 ;
-(double)userZoomFocusStyleMaxGroundspanMeters;
-(void)setPuckHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(void)canvasFrameDidChange;
-(void)setMapModel:(id)arg1 ;
-(void)pan:(CGPoint)arg1 worldDelta:(const Vec3Imp<double>*)arg2 ;
-(void)startPanning:(CGPoint)arg1 ;
-(void)stopPanning:(CGPoint)arg1 ;
-(void)zoom:(double)arg1 relativeToPoint:(CGPoint)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)mapModel;
-(void)setShouldLimitTopDownHeight:(BOOL)arg1 ;
-(void)setPanStyle:(int)arg1 ;
-(void)startWithPounce:(BOOL)arg1 pounceCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)isAtDefaultZoomScale;
-(double)tracePlaybackSpeedMultiplier;
-(double)verticalGroundspanScale;
-(void)_updateVerticalGroundspanForCameraContext:(id)arg1 reference:(VKPoint)arg2 focus:(VKPoint)arg3 offset:(double)arg4 ;
-(double)relevantZoomScale;
-(void)_updateCruiseHeightAndPhi;
-(void)_resumeAnimationIfNecessary;
-(void)resumeIfNeeded;
-(void)pauseIfNeeded;
-(void)_updateCameraForStartAnimation:(double)arg1 position:(VKPoint)arg2 orientation:(const SCD_Struct_VK42*)arg3 ;
-(void)setUserZoomFocusStyleZoomScale:(double)arg1 ;
-(void)setRelevantZoomScale:(double)arg1 ;
-(void)_startTapZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)trackingDelegate;
-(void)setTrackingDelegate:(id)arg1 ;
-(BOOL)shouldLimitTopDownHeight;
-(int)panStyle;
-(void)setVerticalGroundspanScale:(double)arg1 ;
@end

