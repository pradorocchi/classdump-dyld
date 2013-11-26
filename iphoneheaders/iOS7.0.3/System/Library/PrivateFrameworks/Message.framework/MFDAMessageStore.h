/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/Message-Structs.h>
#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {

	DAFolder* _DAFolder;

}
-(BOOL)hasMoreFetchableMessages;
-(unsigned)fetchWindow;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(int)fetchNumMessages:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)shouldGrowFetchWindow;
-(unsigned)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned)arg1 keepingMessage:(id)arg2 ;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(BOOL)shouldSetSummaryForMessage:(id)arg1 ;
-(BOOL)canDeleteMessage:(id)arg1 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(id)_folderIDForFetching;
-(void)_remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 filterByDate:(BOOL)arg3 handler:(/*^block*/ id)arg4 ;
-(void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2 ;
-(id)_fetchBodyDataForSearchResult:(id)arg1 format:(int)arg2 streamConsumer:(id)arg3 ;
-(id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2 ;
-(void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
@end

