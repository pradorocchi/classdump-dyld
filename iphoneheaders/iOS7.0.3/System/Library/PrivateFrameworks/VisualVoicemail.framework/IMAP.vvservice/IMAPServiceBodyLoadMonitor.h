/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <IMAP/IMAP-Structs.h>
@class IMAPService, NSMutableData;

@interface IMAPServiceBodyLoadMonitor : NSObject {

	IMAPService* _service;
	CFDictionaryRef _loadContextsByLibraryId;
	NSMutableData* _headerData;

}

@property (retain) NSMutableData * headerData;              //@synthesize headerData=_headerData - In the implementation block
+(id)_headersToPreserve;
-(void)dealloc;
-(id)headerData;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(BOOL)progressiveBodyLoadHasStartedForRecord:(void*)arg1 ;
-(void)lengthsOfBodyLoadForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(void)bodyLoadStartedForRemoteUid:(unsigned long)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)bodyLoadContinuedForRemoteUid:(unsigned long)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)bodyLoadEndedForRemoteUid:(unsigned long)arg1 inStore:(id)arg2 data:(id)arg3 ;
-(void)_activityCompleted:(id)arg1 ;
-(int)_libraryIdForRemoteUid:(unsigned long)arg1 inStore:(id)arg2 ;
-(void)setHeaderData:(id)arg1 ;
-(id)_createHeaderDictionaryForData:(id)arg1 ;
-(void)_postDataAvailableWithUserInfo:(id)arg1 ;
-(id)initForService:(id)arg1 ;
@end

