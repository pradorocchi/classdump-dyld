/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer;

@interface TSTTracingManager : NSObject {

	TSMTraceBuffer* mBuffer;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)teardown;
-(void)setup;
@end

