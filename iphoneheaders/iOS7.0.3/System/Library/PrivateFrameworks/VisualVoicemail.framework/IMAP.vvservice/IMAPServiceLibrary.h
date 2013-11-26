/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MFMessageLibrary.h>

@class IMAPServiceAccount, MFLibraryStore;

@interface IMAPServiceLibrary : MFMessageLibrary {

	IMAPServiceAccount* _account;
	MFLibraryStore* _sharedGenericStore;

}
-(void)dealloc;
-(void)removeAllMessagesFromMailbox:(id)arg1 andNotify:(BOOL)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(void)compactMailbox:(id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)getDetailsForMessages:(unsigned)arg1 absoluteBottom:(unsigned)arg2 topOfDesiredRange:(unsigned)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)invalidateServiceLibrary;
-(id)initWithServiceAccount:(id)arg1 ;
-(id)messageWithStoreRecord:(void*)arg1 ;
-(id)_mailboxUidForStoreRecord:(void*)arg1 ;
-(id)_messageWithStoreRecord:(void*)arg1 localStore:(BOOL)arg2 ;
-(id)_getDetailsForMailbox:(id)arg1 useRemoteIDRange:(NSRange*)arg2 ;
-(void)_resetCountsForCompaction;
-(void)_postMessagesAdded:(id)arg1 ;
-(void)_setFlags:(unsigned long long)arg1 forMessage:(id)arg2 postAndCommit:(BOOL)arg3 ;
-(void*)copyStoreRecordForMessage:(id)arg1 ;
@end

