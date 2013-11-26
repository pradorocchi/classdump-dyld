/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MFMailMessageLibrary, NSMutableArray, MFOfflineCacheReplayContext, NSString;

@interface MFOfflineCache : NSObject {

	MFMailMessageLibrary* _library;
	int _accountLibraryID;
	NSMutableArray* _deferredOperations;
	MFOfflineCacheReplayContext* _replayContext;
	unsigned _lastTemporaryMessageID;
	BOOL _isReplaying;

}

@property (nonatomic,@dynamic,readonly) NSString * nextTemporaryMessageID; 
-(void)dealloc;
-(id)init;
-(void)enumerateOperationsUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)hasDeferredOperations;
-(void)deferOperation:(id)arg1 ;
-(id)nextTemporaryMessageID;
-(id)initWithLibrary:(id)arg1 account:(id)arg2 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/ id)arg1 ;
-(id)selectedMailboxID;
-(id)transferFailureSnapshotForTemporaryID:(id)arg1 ;
-(id)translatedIDForTemporaryID:(id)arg1 ;
-(void)replaceTransferFailureSnapshotTemporaryID:(id)arg1 withTemporaryID:(id)arg2 ;
-(void)setTranslatedID:(id)arg1 forTemporaryID:(id)arg2 ;
-(void)setTransferFailureSnapshot:(id)arg1 forTemporaryID:(id)arg2 ;
-(void)deleteOfflineCacheData;
-(void)setSelectedMailboxID:(id)arg1 ;
-(void)_applyReplayContextTransformation:(id)arg1 ;
@end

