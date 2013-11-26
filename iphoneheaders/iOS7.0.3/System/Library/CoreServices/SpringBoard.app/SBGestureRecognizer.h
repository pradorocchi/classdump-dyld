/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBGestureRecognizer : NSObject {

	unsigned m_types;
	int m_state;
	/*^block*/ id m_handler;
	unsigned m_activeTouchesCount;
	SCD_Struct_SB31 m_activeTouches[30];
	unsigned m_strikes;
	unsigned m_templateMatches;
	NSMutableArray* m_touchTemplates;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
	BOOL m_sendsTouchesCancelledToApplication;
	/*^block*/ id m_canBeginCondition;
	CGPoint m_maximumAllowedExclusiveMovement;

}

@property (assign,nonatomic) unsigned types; 
@property (assign,nonatomic) int state; 
@property (nonatomic,copy) id handler; 
@property (assign,nonatomic) BOOL includedInGestureRecognitionIsPossibleTest; 
@property (assign,nonatomic) BOOL sendsTouchesCancelledToApplication; 
@property (nonatomic,copy) id canBeginCondition; 
@property (assign,nonatomic) CGPoint maximumAllowedExclusiveMovement; 
-(void)setSendsTouchesCancelledToApplication:(BOOL)arg1 ;
-(void)setCanBeginCondition:(/*^block*/ id)arg1 ;
-(BOOL)includedInGestureRecognitionIsPossibleTest;
-(void)_appendDescription:(id)arg1 forTypes:(unsigned)arg2 ;
-(BOOL)shouldReceiveTouches;
-(BOOL)sendsTouchesCancelledToApplication;
-(BOOL)isRecognized;
-(BOOL)shouldReportRecognitionPossibleToAppsForTotalMotion:(CGPoint)arg1 ;
-(void)addTouchTemplate:(id)arg1 ;
-(int)templateMatch;
-(void)touchesBegan:(SBGestureContextRef)arg1 ;
-(void)touchesMoved:(SBGestureContextRef)arg1 ;
-(void)touchesEnded:(SBGestureContextRef)arg1 ;
-(void)touchesCancelled:(SBGestureContextRef)arg1 ;
-(void)setIncludedInGestureRecognitionIsPossibleTest:(BOOL)arg1 ;
-(/*^block*/ id)canBeginCondition;
-(CGPoint)maximumAllowedExclusiveMovement;
-(void)setMaximumAllowedExclusiveMovement:(CGPoint)arg1 ;
-(unsigned)types;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)reset;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(void)setTypes:(unsigned)arg1 ;
@end

