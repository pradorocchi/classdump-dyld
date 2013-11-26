/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <vot/vot-Structs.h>
@class NSLock;

@interface VOTDisplayManager : NSObject {

	NSLock* _lock;
	BOOL _displayShutdown;
	BOOL _shouldHideCursor;
	unsigned _currentCursorContextID;
	CGPathRef _currentCursorPath;
	CGRect _currentCursorFrame;

}

@property (assign,nonatomic) BOOL shouldHideCursor;                        //@synthesize shouldHideCursor=_shouldHideCursor - In the implementation block
@property (assign,nonatomic) CGRect currentCursorFrame;                    //@synthesize currentCursorFrame=_currentCursorFrame - In the implementation block
@property (assign,nonatomic) CGPathRef currentCursorPath;                  //@synthesize currentCursorPath=_currentCursorPath - In the implementation block
@property (assign,nonatomic) unsigned currentCursorContextID;              //@synthesize currentCursorContextID=_currentCursorContextID - In the implementation block
+(void)initialize;
+(id)displayManager;
-(CGRect)currentCursorFrame;
-(CGPathRef)currentCursorPath;
-(unsigned)currentCursorContextID;
-(void)setCursorFrame:(CGRect)arg1 withPath:(CGPathRef)arg2 withContextId:(unsigned)arg3 element:(id)arg4 forceRefresh:(BOOL)arg5 ;
-(void)_handleRotorDidChange:(id)arg1 ;
-(void)clearCursorFrame;
-(CGRect)_adjustFrameToFitScreen:(CGRect)arg1 ;
-(void)setCurrentCursorFrame:(CGRect)arg1 ;
-(void)setCurrentCursorContextID:(unsigned)arg1 ;
-(void)setCurrentCursorPath:(CGPathRef)arg1 ;
-(BOOL)shouldHideCursor;
-(void)_updateZoom:(CGRect)arg1 element:(id)arg2 ;
-(void)setShouldHideCursor:(BOOL)arg1 ;
-(void)setCursorFrameForElement:(id)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shutdown;
@end

