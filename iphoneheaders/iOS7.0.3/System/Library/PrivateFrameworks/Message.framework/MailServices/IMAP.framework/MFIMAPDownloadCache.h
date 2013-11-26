/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <IMAP/IMAP-Structs.h>
@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject {

	NSMutableArray* _downloads;

}
-(void)dealloc;
-(id)downloadForMessage:(id)arg1 ;
-(id)downloadForUid:(unsigned long)arg1 section:(id)arg2 length:(unsigned)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned long)arg1 section:(id)arg2 expectedLength:(unsigned)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned long)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
-(void)handleFetchResponse:(id)arg1 forUid:(unsigned long)arg2 ;
-(void)handleFetchResponses:(id)arg1 ;
-(void)processResultsForUid:(unsigned long)arg1 ;
-(void)cleanUpDownloadsForUid:(unsigned long)arg1 ;
-(void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2 ;
@end

