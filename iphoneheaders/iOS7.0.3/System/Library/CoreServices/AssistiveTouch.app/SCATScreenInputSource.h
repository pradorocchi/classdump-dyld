/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/AXEventHandler.h>

@protocol SCATScreenInputSourceDelegate;
@class NSMapTable, , AXAccessQueue;

@interface SCATScreenInputSource : NSObject <AXEventHandler> {

	BOOL _running;
	NSMapTable* _actions;
	<SCATScreenInputSourceDelegate>* _delegate;
	AXAccessQueue* _queue;

}

@property (nonatomic,retain) NSMapTable * actions;                                    //@synthesize actions=_actions - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) <SCATScreenInputSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AXAccessQueue * queue;                                   //@synthesize queue=_queue - In the implementation block
-(BOOL)handledEvent:(id)arg1 ;
-(void)_didReceiveAction:(int)arg1 start:(BOOL)arg2 ;
-(int)_actionForScreenSwitch;
-(void)_startHandlingEvents;
-(void)_stopHandlingEvents;
-(void)startRunning;
-(void)stopRunning;
-(void)setActions:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isRunning;
-(unsigned)priority;
-(id)actions;
-(void)setRunning:(BOOL)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
@end

