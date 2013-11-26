/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/AFCVisibleMailboxFetch.h>

@class NSString, MFMailboxUid, MFMailMessageStore, MFError, MFActivityMonitor, MailAccount;

@interface AutoFetchRequestPrivate : NSObject <AFCVisibleMailboxFetch> {

	NSString* _remoteID;
	MFMailboxUid* _uid;
	MFMailMessageStore* _store;
	NSString* _key;
	double _responsiveness;
	unsigned _gotNewMessagesState;
	BOOL _wasPrimaryMailbox;
	MFError* _error;
	int _result;
	BOOL _displayErrors;
	BOOL _compactMailbox;
	BOOL _isVisibleFetch;
	BOOL _isUserRequested;
	BOOL _isForegroundRequest;
	BOOL _shouldGrowFetchWindow;
	MFActivityMonitor* _monitor;

}

@property (nonatomic,copy) NSString * remoteIDToPreserve;                //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL shouldCompact;                         //@synthesize compactMailbox=_compactMailbox - In the implementation block
@property (assign,nonatomic) BOOL displayErrors;                         //@synthesize displayErrors=_displayErrors - In the implementation block
@property (assign,nonatomic) unsigned gotNewMessagesState;               //@synthesize gotNewMessagesState=_gotNewMessagesState - In the implementation block
@property (assign,nonatomic) BOOL wasPrimaryMailbox;                     //@synthesize wasPrimaryMailbox=_wasPrimaryMailbox - In the implementation block
@property (assign,nonatomic) BOOL isVisibleFetch;                        //@synthesize isVisibleFetch=_isVisibleFetch - In the implementation block
@property (assign,nonatomic) BOOL isUserRequested;                       //@synthesize isUserRequested=_isUserRequested - In the implementation block
@property (assign,nonatomic) BOOL isForegroundRequest;                   //@synthesize isForegroundRequest=_isForegroundRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldGrowFetchWindow;                 //@synthesize shouldGrowFetchWindow=_shouldGrowFetchWindow - In the implementation block
@property (assign,nonatomic) double responsiveness;                      //@synthesize responsiveness=_responsiveness - In the implementation block
@property (nonatomic,retain) MFError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) MFActivityMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) MFMailboxUid * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) MailAccount * account; 
@property (nonatomic,readonly) BOOL shouldNotify; 
-(void)setDisplayErrors:(BOOL)arg1 ;
-(void)setRemoteIDToPreserve:(id)arg1 ;
-(void)setShouldCompact:(BOOL)arg1 ;
-(BOOL)willGrowFetchWindow;
-(id)initRequestForMailboxUid:(id)arg1 ;
-(void)setIsForegroundRequest:(BOOL)arg1 ;
-(void)setShouldGrowFetchWindow:(BOOL)arg1 ;
-(id)remoteIDToPreserve;
-(BOOL)displayErrors;
-(BOOL)shouldCompact;
-(BOOL)wasPrimaryMailbox;
-(void)setWasPrimaryMailbox:(BOOL)arg1 ;
-(BOOL)isVisibleFetch;
-(void)setIsVisibleFetch:(BOOL)arg1 ;
-(double)responsiveness;
-(void)setResponsiveness:(double)arg1 ;
-(BOOL)isForegroundRequest;
-(id)monitor;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)key;
-(BOOL)shouldNotify;
-(id)uid;
-(void)setKey:(id)arg1 ;
-(int)result;
-(id)account;
-(BOOL)shouldGrowFetchWindow;
-(id)mailbox;
-(BOOL)isUserRequested;
-(void)setGotNewMessagesState:(unsigned)arg1 ;
-(unsigned)gotNewMessagesState;
-(id)error;
-(void)setIsUserRequested:(BOOL)arg1 ;
@end

