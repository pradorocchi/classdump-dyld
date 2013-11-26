/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VMUMachOHeader, NSArray;

@interface VMUDyld : NSObject {

	VMUMachOHeader* _dyldMachOHeader;
	NSArray* _machOHeaders;

}
+(id)nativeSharedCachePath;
+(id)nativeSharedCacheTimestamp;
+(id)dyldWithMachOHeader:(id)arg1 memory:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(id)initWithMachOHeader:(id)arg1 memory:(id)arg2 ;
-(id)findMachOHeadersInMemory:(id)arg1 ;
-(id)machOHeaders;
@end

