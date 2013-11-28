/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	int _currentRotationCount;
	double _lastTouchTime;
	float _velocity;
	float _previousVelocity;
	CGPoint _anchorPoint;
	id _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) float rotation; 
@property (nonatomic,readonly) float velocity; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)anchorPoint;
-(float)velocity;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(void)_resetGestureRecognizer;
-(void)_updateTransformAnalyzerWeights;
-(void)_setPreRecognitionWeight:(float)arg1 ;
-(float)_preRecognitionWeight;
-(void)_setPostRecognitionWeight:(float)arg1 ;
-(float)_postRecognitionWeight;
@end
