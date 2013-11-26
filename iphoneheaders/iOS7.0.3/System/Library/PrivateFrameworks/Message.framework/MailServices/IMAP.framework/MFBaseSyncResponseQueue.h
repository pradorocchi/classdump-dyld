/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFBufferedQueue.h>

@class MFLibraryIMAPStore, MFIMAPConnection, NSString, NSMutableArray, NSArray;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {

	MFLibraryIMAPStore* _store;
	MFIMAPConnection* _connection;
	NSString* _url;
	unsigned _currentUID;
	NSMutableArray* _missingUIDs;
	NSArray* _libraryDetails;
	BOOL _shouldCompact;
	BOOL _shouldFetch;
	BOOL _isSearching;

}
-(void)dealloc;
-(id)init;
-(unsigned)uidForItem:(id)arg1 ;
-(BOOL)shouldSyncFlags;
-(unsigned long long)flagsForItem:(id)arg1 ;
-(id)sequenceIdentifierForItem:(id)arg1 ;
-(BOOL)handleItems:(id)arg1 ;
@end

