/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Compass.app/Compass
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Compass/CompassPage.h>

@class CALayer, UIView, UILabel, CMMotionManager, CAShapeLayer, CMAttitude, UITapGestureRecognizer, UIFontDescriptor, NSTimer;

@interface LevelPageViewController : UIViewController <CompassPage> {

	CALayer* _levelBottom;
	CALayer* _heldLevelBottom;
	CALayer* _divergenceLevelBottom;
	CALayer* _heldLevelBottomBacking;
	UIView* _filterContainer;
	UIView* _levelContainer;
	UIView* _levelHoldContainer;
	UIView* _bubbleContainer;
	UIView* _ticContainer;
	UILabel* _degreesLabel;
	CMMotionManager* _manager;
	CAShapeLayer* _bottomOuterCircle;
	CAShapeLayer* _bottomInnerCircle;
	CAShapeLayer* _topOuterCircle;
	CAShapeLayer* _topInnerCircle;
	CALayer* _leftLevelTic;
	CALayer* _rightLevelTic;
	float _currentShift;
	float _currentRotation;
	float _previousShift;
	float _previousRotation;
	BOOL _isLevel;
	float _lastLevelChange;
	int _orientation;
	int _rotationOrientation;
	int _heldOrientation;
	int _previousOrientation;
	BOOL _isZeroed;
	CMAttitude* _holdAttitude;
	BOOL _isHeld;
	float _holdAngle;
	float _holdShift;
	UITapGestureRecognizer* _holdRecognizer;
	int _lastDisplayDegrees;
	int _framesLevel;
	float _zeroRange;
	UIFontDescriptor* _fontDescriptor;
	NSTimer* _levelIdleTimer;

}

@property (nonatomic,retain) CMAttitude * holdAttitude;              //@synthesize holdAttitude=_holdAttitude - In the implementation block
+(void)initialize;
-(void)toggleHold:(id)arg1 ;
-(void)updateTicsForOrientation:(int)arg1 ;
-(void)updateColors;
-(void)_updateOffsetLabel:(float)arg1 ;
-(void)_enableIdleTimer;
-(BOOL)_updateForRotation:(float)arg1 shiftAngle:(float)arg2 ;
-(void)setHoldAttitude:(id)arg1 ;
-(void)updateDisplay:(id)arg1 ;
-(id)holdAttitude;
-(void)userDefaultsChanged:(id)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

