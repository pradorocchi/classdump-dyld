/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CKTranscriptDataDelegate;
@class CKConversation, NSArray, , NSDictionary, NSMutableArray, CKScheduledUpdater;

@interface CKTranscriptData : NSObject {

	CKConversation* _conversation;
	NSArray* _rows;
	<CKTranscriptDataDelegate>* _delegate;
	/*^block*/ id _handler;
	NSDictionary* _messageIndexes;
	NSMutableArray* _updateNotifications;
	CKScheduledUpdater* _updater;

}

@property (nonatomic,retain) CKConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,copy) NSArray * rows;                                       //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) <CKTranscriptDataDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * messageIndexes;                        //@synthesize messageIndexes=_messageIndexes - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateNotifications;               //@synthesize updateNotifications=_updateNotifications - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * updater;                       //@synthesize updater=_updater - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)description;
-(id)delegate;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)rows;
-(void)setRows:(id)arg1 ;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(id)conversation;
-(unsigned)indexOfTransfer:(id)arg1 ;
-(void)setConversation:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)addSendingMessage:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)indexesOfPartsOfMessage:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(unsigned)indexOfMediaObject:(id)arg1 ;
-(id)allIndexes;
-(void)updateIfNeededWithHandler:(/*^block*/ id)arg1 ;
-(void)removeSizesAtIndexes:(id)arg1 ;
-(id)messagesAtIndexes:(id)arg1 ;
-(void)removeDeletedMessages:(id)arg1 reloadChangedMessages:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(id)messageAtIndex:(unsigned)arg1 ;
-(void)reloadDowngradedMessage:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)updater;
-(void)setUpdateNotifications:(id)arg1 ;
-(void)_updateRows;
-(void)setUpdater:(id)arg1 ;
-(id)messageIndexes;
-(id)_messagesArrayAndTypingMessageForIndexes:(id)arg1 typingMessage:(id*)arg2 hasHeader:(BOOL*)arg3 ;
-(void)_updateRows:(id)arg1 reloadMessages:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(id)indexesOfMessage:(id)arg1 ;
-(id)updateNotifications;
-(void)setMessageIndexes:(id)arg1 ;
-(void)messageContentDidChange:(id)arg1 ;
-(void)messageSendErrorDidChange:(id)arg1 ;
-(void)conversationDidEndBatchUpdates:(id)arg1 ;
-(id)rowAtIndex:(unsigned)arg1 ;
-(void)updateIfNeeded;
@end

