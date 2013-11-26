/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Celestial/Celestial-Structs.h>
@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject {

	id _delegate;
	AVQueue* _avItemQueue;
	NSMutableArray* _pbItemQueue;
	OpaqueFigPlayerRef _figPlayer;
	int _ignoreAVQueueModifications;
	BOOL _hasBuiltPlaybackQueue;
	BOOL _waitingToAddFirstItem;
	int _avQueueTransactionCount;
	int _repeatMode;

}
-(void)setRepeatMode:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)beginAVQueueTransaction;
-(void)endAVQueueTransaction;
-(id)initWithDelegate:(id)arg1 figPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)setAVItemQueue:(id)arg1 ;
-(void)ensurePlaybackQueue;
-(void)ensurePlaybackQueueImmed;
-(id)currentPlaybackItem;
-(void)playbackItemWasRemovedFromPlayQueue:(id)arg1 ;
-(void)updateBookmarkTimesIncludeFirst:(BOOL)arg1 updateFirst:(BOOL)arg2 ;
-(void)playbackItemInspectionComplete:(id)arg1 ;
-(void)checkQueueConsistency;
-(void)scheduleRemoveItemsNoLongerInPlayQueue;
-(void)clearPBItemQueueFromIndex:(int)arg1 ;
-(void)queueItemWasAddedNotification:(id)arg1 ;
-(void)queueItemWillBeRemovedNotification:(id)arg1 ;
-(void)fillInPBItemQueue;
-(void)removeItemsNoLongerInPlayQueue;
@end

