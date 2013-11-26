/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMailMessageStore.h>

@class MFMessageLibrary, NSDate, MFMessageCriterion;

@interface MFLibraryStore : MFMailMessageStore {

	MFMessageLibrary* _library;
	NSDate* _earliestReceivedDate;
	MFMessageCriterion* _criterion;
	unsigned _serverMessageCount;
	unsigned _fetchWindow;

}

@property (nonatomic,retain) NSDate * earliestReceivedDate;              //@synthesize earliestReceivedDate=_earliestReceivedDate - In the implementation block
+(id)sharedInstance;
+(BOOL)createEmptyStoreForPath:(id)arg1 ;
+(BOOL)storeAtPathIsWritable:(id)arg1 ;
+(id)storeWithMailbox:(id)arg1 ;
+(id)sharedInstanceIfExists;
+(unsigned)defaultLoadOptions;
+(id)storeWithCriterion:(id)arg1 ;
-(void)dealloc;
-(id)URLString;
-(void)openSynchronously;
-(void)updateUserInfoToLatestValues;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(unsigned)totalCount;
-(unsigned)unreadCount;
-(unsigned)serverUnreadOnlyOnServerCount;
-(unsigned)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned)fetchWindow;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(BOOL)shouldCancel;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)writeUpdatedMessageDataToDisk;
-(BOOL)shouldGrowFetchWindow;
-(void)invalidateFetchWindow;
-(unsigned)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned)arg1 keepingMessage:(id)arg2 ;
-(unsigned)unreadCountMatchingCriterion:(id)arg1 ;
-(BOOL)hasMessageForAccount:(id)arg1 ;
-(unsigned)indexOfMessage:(id)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)criterion;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)mailbox;
-(id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithCriterion:(id)arg1 ;
-(void)_queueMessagesAdded:(id)arg1 ;
-(void)_queueMessageFlagsChanged:(id)arg1 ;
-(void)_queueMessagesWillBeCompacted:(id)arg1 ;
-(void)_queueMessagesWereCompacted:(id)arg1 ;
-(void)_updateMailboxUnreadCount;
-(id)copyOfMessageInfos;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned*)arg3 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 ;
-(void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2 ;
-(void)setEarliestReceivedDate:(id)arg1 ;
-(BOOL)_isSingleCoreDevice;
-(unsigned)_fetchWindowMultiple;
-(unsigned)_fetchWindowMinimum;
-(unsigned)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg1 ;
-(id)filterMessagesByMembership:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(void)compactMessages:(id)arg1 ;
-(void)purgeMessages:(id)arg1 ;
-(void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(void)_addInvocationToQueue:(id)arg1 ;
-(void)handleMessageFlagsChanged:(id)arg1 ;
-(void)handleMessagesWillBeCompacted:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(void)libraryFinishedSendingMessages;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)copyOfMessageInfosMatchingCriterion:(id)arg1 ;
-(id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 limit:(int)arg2 ;
-(long long)oldestKnownConversation;
-(id)serverSearchResults;
-(void)willFetchMessages;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)updateMetadata;
-(void)_setNeedsAutosave;
-(void)_flushAllCachesLocking:(BOOL)arg1 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)earliestReceivedDate;
-(id)library;
-(void)setLibrary:(id)arg1 ;
@end

