/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(void)addTransition:(id)arg1 ;
-(void)removeTransition:(id)arg1 ;
-(id)undoStack;
-(void)dealloc;
-(id)layer;
-(void)invalidate;
-(id)currentState;
-(id)initWithLayer:(id)arg1 ;
-(void)setCurrentState:(id)arg1 ;
@end

