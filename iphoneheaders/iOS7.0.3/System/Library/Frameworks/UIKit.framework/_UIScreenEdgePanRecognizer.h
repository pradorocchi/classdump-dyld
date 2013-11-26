/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>

@protocol _UIScreenEdgePanRecognizerDelegate;
@class UIDelayedAction, , _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {

	CGRect _screenBounds;
	BOOL _useGrapeFlags;
	BOOL _hasRecordedData;
	BOOL _hasDoneInitialBackProjectionTest;
	float _gestureRestrictionFactor;
	CGPoint _initialTouchLocation;
	double _initialTouchTimestamp;
	int _initialInterfaceOrientation;
	unsigned _touchedRegion;
	UIDelayedAction* _recognitionTimer;
	CGPoint _lastTouchLocation;
	double _lastTouchTimestamp;
	int _type;
	BOOL _requiresLongPress;
	BOOL _requiresFlatThumb;
	unsigned _targetEdges;
	int _state;
	unsigned _recognizedRegion;
	<_UIScreenEdgePanRecognizerDelegate>* _delegate;
	_UIScreenEdgePanRecognizerSettings* _settings;

}

@property (assign,nonatomic) CGRect screenBounds;                                                //@synthesize screenBounds=_screenBounds - In the implementation block
@property (assign,nonatomic) unsigned targetEdges;                                               //@synthesize targetEdges=_targetEdges - In the implementation block
@property (assign,nonatomic) BOOL requiresFlatThumb;                                             //@synthesize requiresFlatThumb=_requiresFlatThumb - In the implementation block
@property (nonatomic,readonly) int state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned recognizedRegion;                                        //@synthesize recognizedRegion=_recognizedRegion - In the implementation block
@property (getter=isRequiringLongPress,nonatomic,readonly) BOOL requiringLongPress; 
@property (assign) <_UIScreenEdgePanRecognizerDelegate> * delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings;                      //@synthesize settings=_settings - In the implementation block
+(BOOL)_edgeSwipeNavigationGestureEnabled;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)state;
-(id)initWithType:(int)arg1 ;
-(int)_type;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)reset;
-(void)setTargetEdges:(unsigned)arg1 ;
-(void)_setState:(int)arg1 ;
-(void)_incorporateIncrementalSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(void)_incorporateInitialTouchAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(unsigned)_targetEdges;
-(CGRect)screenBounds;
-(void)_longPressTimerElapsed:(id)arg1 ;
-(void)_idleTimerElapsed:(id)arg1 ;
-(void)_createOrDestoryAnalysisWindowIfNeeded;
-(BOOL)isRequiringLongPress;
-(void)incorporateTouchSampleAtLocation:(CGPoint)arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4 ;
-(void)setScreenBounds:(CGRect)arg1 ;
-(void)setSettings:(id)arg1 ;
-(void)setRequiresFlatThumb:(BOOL)arg1 ;
-(unsigned)targetEdges;
-(BOOL)requiresFlatThumb;
-(unsigned)recognizedRegion;
-(id)settings;
@end

