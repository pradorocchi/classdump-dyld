/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZEntryInputStream;
@class ;

@interface GQZInflateInputStream : NSObject <GQZEntryInputStream> {

	z_stream_s* mStream;
	<GQZEntryInputStream>* mInput;

}
-(void)dealloc;
-(id).cxx_construct;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned*)arg2 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(id)initWithInput:(id)arg1 ;
@end

