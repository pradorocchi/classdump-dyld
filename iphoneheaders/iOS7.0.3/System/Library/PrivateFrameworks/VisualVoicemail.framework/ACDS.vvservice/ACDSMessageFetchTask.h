/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/ACDS.vvservice/ACDS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ACDS/ACDS-Structs.h>
#import <ACDS/ACDSTask.h>

@class MFProgressiveMimeParser, NSError, NSMutableDictionary, VVService;

@interface ACDSMessageFetchTask : ACDSTask {

	int _recordIdentifier;
	MFProgressiveMimeParser* _progressiveParser;
	int _fd;
	NSError* _parseError;
	NSMutableDictionary* _noteUserInfo;
	unsigned _lastWrittenOffset;
	VVService* _service;

}
-(void)dealloc;
-(id)description;
-(int)type;
-(id)name;
-(void)perform:(SCD_Struct_AC0*)arg1 ;
-(int)priority;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(BOOL)isProgressive;
-(void*)record;
-(BOOL)hasBegunProgressiveLoad;
-(unsigned)expectedProgressiveDataLength;
-(unsigned)currentProgressiveDataLength;
-(int)serviceTaskType;
-(id)initForRecord:(void*)arg1 ;
-(BOOL)shouldCancelForTask:(id)arg1 ;
-(void)handleResponse:(CFHTTPMessageRef)arg1 body:(CFDataRef)arg2 status:(int)arg3 service:(id)arg4 error:(id*)arg5 ;
-(void)handleInitialResponse:(CFHTTPMessageRef)arg1 body:(CFDataRef)arg2 status:(int)arg3 service:(id)arg4 error:(id*)arg5 ;
-(void)handleProgressiveBodyLoad:(CFDataRef)arg1 finished:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)attemptCompletedWithError:(id)arg1 ;
-(id)taskByCoalescingWithTask:(id)arg1 ;
-(int)recordIdentifier;
-(void)_clearPartialDataFile;
-(id)_headersToPreserve;
-(void)_writeUpdatedDataFromParser;
-(void)_postProgressiveDataNotification:(id)arg1 ;
@end

