/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/ACDS.vvservice/ACDS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ACDS/ACDS-Structs.h>
#import <ACDS/ACDSTask.h>

@interface ACDSParamsFetchTask : ACDSTask
-(int)type;
-(id)name;
-(void)perform:(SCD_Struct_AC0*)arg1 ;
-(int)priority;
-(int)serviceTaskType;
-(void)handleResponse:(CFHTTPMessageRef)arg1 body:(CFDataRef)arg2 status:(int)arg3 service:(id)arg4 error:(id*)arg5 ;
-(id)taskByCoalescingWithTask:(id)arg1 ;
@end

