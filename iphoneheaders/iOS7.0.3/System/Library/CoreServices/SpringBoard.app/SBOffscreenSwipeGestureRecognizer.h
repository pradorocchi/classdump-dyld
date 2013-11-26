/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings;

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	unsigned m_offscreenEdge;
	BOOL m_shouldUseUIKitHeuristics;
	float m_edgeMargin;
	float m_falseEdge;
	int m_touchesChecked;
	CGPoint m_firstTouch;
	float m_edgeCenter;
	float m_allowableDistanceFromEdgeCenter;
	BOOL m_requiresSecondTouchInRange;
	_UIScreenEdgePanRecognizer* m_recognizer;

}

@property (assign,nonatomic) BOOL shouldUseUIKitHeuristics; 
@property (assign,nonatomic) float edgeMargin; 
@property (assign,nonatomic) float falseEdge; 
@property (assign,nonatomic) float allowableDistanceFromEdgeCenter; 
@property (assign,nonatomic) BOOL requiresSecondTouchInRange; 
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings; 
@property (assign,nonatomic) float edgeCenter; 
+(void)reloadDefaults;
-(void)setAllowableDistanceFromEdgeCenter:(float)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(BOOL)_firstTouchInRange:(const SCD_Struct_SB33*)arg1 ;
-(void)setEdgeCenter:(float)arg1 ;
-(void)_updateAnimationDistanceAndEdgeCenter;
-(BOOL)firstTouchQualifies:(const SCD_Struct_SB33*)arg1 ;
-(BOOL)secondTouchQualifies:(const SCD_Struct_SB33*)arg1 ;
-(id)initForOffscreenEdge:(unsigned)arg1 ;
-(BOOL)isHandlingLongPress;
-(void)setFalseEdge:(float)arg1 ;
-(CGRect)activeScreenBounds;
-(BOOL)shouldUseUIKitHeuristics;
-(void)setShouldUseUIKitHeuristics:(BOOL)arg1 ;
-(float)edgeMargin;
-(void)setEdgeMargin:(float)arg1 ;
-(float)falseEdge;
-(float)allowableDistanceFromEdgeCenter;
-(BOOL)requiresSecondTouchInRange;
-(void)setRequiresSecondTouchInRange:(BOOL)arg1 ;
-(float)edgeCenter;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
@end

