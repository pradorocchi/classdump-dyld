/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAP-Structs.h>
#import <Message/MFConnection.h>

@protocol MFIMAPMailboxListFilter;
@class , NSString, NSMutableSet, NSArray, NSMutableData, MFInvocationQueue;

@interface MFIMAPConnection : MFConnection {

	<MFIMAPMailboxListFilter>* _mailboxListFilter;
	unsigned _capabilityFlags : 19;
	BOOL _gotBadResponse;
	int _tag;
	double _connectTime;
	unsigned _connectionState : 3;
	NSString* _separatorChar;
	NSString* _selectedMailbox;
	NSMutableSet* _capabilities;
	NSArray* _lastRequiredHeadersArray;
	NSString* _lastRequiredHeaders;
	unsigned _commandNumber;
	NSMutableData* _data;
	unsigned _readBufferSize;
	double _expirationTime;
	MFInvocationQueue* _streamEventQueue;
	SCD_Struct_MF0 _delegateState;
	NSArray* _additionalHeadersForFetch;
	unsigned _noModSequence : 1;

}

@property (assign,nonatomic) int tag;                              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) double connectTime;                 //@synthesize connectTime=_connectTime - In the implementation block
@property (nonatomic,readonly) BOOL gotBadResponse;                //@synthesize gotBadResponse=_gotBadResponse - In the implementation block
@property (copy) NSArray * additionalHeadersForFetch; 
+(void)initialize;
+(void)setReadSizeParameters;
-(int)connectionState;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(BOOL)isValid;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(void)lock;
-(void)close;
-(void)unselect;
-(void)disconnect;
-(BOOL)logout;
-(id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)arg1 ;
-(id)_fetchArgumentForMessageUidsAndFlags;
-(BOOL)_isFetchResponseValid:(id)arg1 ;
-(id)_responseFromSendingCommands:(SCD_Struct_MF2*)arg1 count:(unsigned)arg2 ;
-(void)setReadBufferSizeFromElapsedTime:(double)arg1 bytesRead:(unsigned)arg2 ;
-(void)didFinishCommands:(SCD_Struct_MF2*)arg1 count:(unsigned)arg2 ;
-(void)_setDelegate:(id)arg1 delegateIsDeallocated:(BOOL)arg2 ;
-(void)_addCapabilities:(id)arg1 ;
-(BOOL)supportsCapability:(int)arg1 ;
-(id)parenthesizedStringWithObjects:(id)arg1 ;
-(void)disconnectAndNotifyDelegate:(BOOL)arg1 ;
-(id)_copyNextServerResponseForCommand:(SCD_Struct_MF2*)arg1 ;
-(void)_clearCapabilities;
-(BOOL)_doBasicConnectionUsingAccount:(id)arg1 ;
-(BOOL)_tryConnectionUsingAccount:(id)arg1 ;
-(id)_copyNextTaggedOrContinuationResponseForCommand:(SCD_Struct_MF2*)arg1 ;
-(void)_fetchCapabilities;
-(BOOL)loginWithAccount:(id)arg1 password:(id)arg2 ;
-(void)_sendApplePushForAccountIfSupported:(id)arg1 ;
-(void)_sendClientInfoIfSupported;
-(void)_enableCompressionIfSupported;
-(void)_updateCapabilitiesForAccount:(id)arg1 withAuthenticationResponse:(id)arg2 ;
-(id)_serverErrorForAccount:(id)arg1 response:(id)arg2 command:(SCD_Struct_MF2*)arg3 ;
-(int)_doIMAPLoginForAccount:(id)arg1 quotedUsername:(id)arg2 password:(id)arg3 ;
-(unsigned)_sendCommands:(SCD_Struct_MF2*)arg1 count:(unsigned)arg2 response:(id*)arg3 ;
-(id)_doListCommand:(int)arg1 withReference:(id)arg2 mailboxName:(id)arg3 options:(int)arg4 ;
-(id)separatorChar;
-(id)_listingForMailbox:(id)arg1 options:(int)arg2 withCommand:(int)arg3 ;
-(void)handleBytesAvailable;
-(id)_errorForResponse:(id)arg1 commandParams:(SCD_Struct_MF2*)arg2 ;
-(id)messageSetForNumbers:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)_sendMailboxCommand:(int)arg1 withArguments:(id)arg2 ;
-(id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(BOOL)arg2 forTerms:(id)arg3 success:(BOOL*)arg4 returning:(int)arg5 ;
-(id)searchIDSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(id)copyArgumentForSearchTerm:(id)arg1 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forMessageSet:(id)arg3 ;
-(id)messageSetForRange:(SCD_Struct_MF3)arg1 ;
-(id)searchUidSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3 ;
-(BOOL)createMailbox:(id)arg1 ;
-(id)_responseFromSendingCommand:(SCD_Struct_MF2*)arg1 andPossiblyCreateMailbox:(id)arg2 ;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)arg1 withRecipients:(BOOL)arg2 ;
-(BOOL)_doUidFetchWithRange:(SCD_Struct_MF3)arg1 arguments:(id)arg2 validateMessage:(BOOL)arg3 responses:(id)arg4 ;
-(unsigned)readBufferSize;
-(void)setReadBufferSize:(unsigned)arg1 ;
-(id)messageSetForNumbers:(id)arg1 range:(NSRange)arg2 maxTokens:(unsigned)arg3 indexOfLastNumber:(unsigned*)arg4 ;
-(void)handleStreamEvent:(unsigned long)arg1 ;
-(BOOL)sendResponsesForCommand:(SCD_Struct_MF2*)arg1 toQueue:(id)arg2 ;
-(id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)arg1 ;
-(BOOL)sendResponsesForUIDFetchForUIDs:(id)arg1 fields:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendResponsesForCondStoreFlagFetchForUIDs:(id)arg1 withSequenceIdentifier:(id*)arg2 toQueue:(id)arg3 ;
-(BOOL)sendResponsesForUIDs:(id)arg1 fields:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4 ;
-(id)eSearchIDSet:(id)arg1 areMessageSequenceNumbers:(BOOL)arg2 arguments:(id)arg3 success:(BOOL*)arg4 returning:(int)arg5 ;
-(id)mailboxListFilter;
-(void)setMailboxListFilter:(id)arg1 ;
-(id)listingForMailbox:(id)arg1 options:(int)arg2 ;
-(id)subscribedListingForMailbox:(id)arg1 options:(int)arg2 ;
-(id)extendedListingForMailbox:(id)arg1 options:(int)arg2 ;
-(BOOL)closeAndLogout;
-(BOOL)expunge;
-(BOOL)expungeUids:(id)arg1 ;
-(void)fetchStatusForMailboxes:(id)arg1 args:(id)arg2 ;
-(BOOL)examineMailbox:(id)arg1 ;
-(BOOL)selectMailbox:(id)arg1 ;
-(id)selectedMailbox;
-(BOOL)renameMailbox:(id)arg1 toMailbox:(id)arg2 ;
-(BOOL)subscribeMailbox:(id)arg1 ;
-(BOOL)unsubscribeMailbox:(id)arg1 ;
-(void)fetchQuotaRootNamesForMailboxes:(id)arg1 ;
-(BOOL)getQuotaForRootName:(id)arg1 ;
-(id)quotaPercentagesForMailbox:(id)arg1 ;
-(unsigned)countForSearchOfIDSet:(id)arg1 forTerms:(id)arg2 success:(BOOL*)arg3 ;
-(unsigned)getMailboxIDForUID:(unsigned)arg1 ;
-(id)searchUidSet:(id)arg1 forNewMessageIDs:(id)arg2 ;
-(BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forRange:(SCD_Struct_MF3)arg3 ;
-(BOOL)deleteMessagesOlderThanNumberOfDays:(int)arg1 ;
-(BOOL)copyUids:(id)arg1 toMailboxNamed:(id)arg2 newMessageInfo:(id*)arg3 ;
-(BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 newMessageInfo:(id*)arg5 ;
-(id)additionalHeadersForFetch;
-(void)setAdditionalHeadersForFetch:(id)arg1 ;
-(void)fetchTotalSize:(unsigned long long*)arg1 andMessageCount:(unsigned*)arg2 ;
-(id)fetchHeadersForUid:(unsigned long)arg1 ;
-(id)fetchUniqueRemoteIDsForUids:(id)arg1 ;
-(BOOL)performCustomCommand:(id)arg1 withArguments:(id)arg2 ;
-(id)messageSetForRange:(SCD_Struct_MF3)arg1 butNotNumbers:(id)arg2 ;
-(id)serverPathPrefix;
-(void)notifyDelegateOfBodyLoadStart:(id)arg1 ;
-(void)notifyDelegateOfBodyLoadAppendage:(id)arg1 ;
-(void)notifyDelegateOfBodyLoadCompletion:(id)arg1 ;
-(unsigned)literalChunkSize;
-(id)_readDataOfLength:(int)arg1 ;
-(BOOL)sendSkeletonResponsesForUIDs:(id)arg1 includeTo:(BOOL)arg2 toQueue:(id)arg3 ;
-(BOOL)sendUidAndFlagResponsesForUIDs:(id)arg1 sequenceIdentifierProvider:(id)arg2 flagSearchResults:(id)arg3 toQueue:(id)arg4 ;
-(BOOL)sendUidResponsesForSearchArguments:(id)arg1 toQueue:(id)arg2 ;
-(id)searchUIDs:(id)arg1 withFlagRequests:(id)arg2 ;
-(double)connectTime;
-(BOOL)gotBadResponse;
-(void)parseESearchResponseWithContext:(id)arg1 ;
-(id)_uidsForMessageIDs:(id)arg1 ;
-(id)parseIndexSetFromSequenceSet:(id)arg1 ;
-(void)parseSearchReturn:(id)arg1 ;
-(id)_messageIDsFromFetchResultData:(id)arg1 ;
-(id)_getReferencesForMessageSet:(id)arg1 ;
-(id)_getFirstLevelMessageIDsForReference:(id)arg1 ;
-(id)uidsReferencedBy:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 ;
-(BOOL)deleteMailbox:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg1 ;
-(BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2 ;
-(void)noop;
-(BOOL)loginDisabled;
-(id)capabilities;
-(BOOL)startTLSForAccount:(id)arg1 ;
@end

