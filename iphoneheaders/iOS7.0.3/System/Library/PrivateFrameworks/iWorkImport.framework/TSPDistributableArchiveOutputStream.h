/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SFUSimpleOutputStream;
#import <iWorkImport/iWorkImport-Structs.h>
@class ;

@interface TSPDistributableArchiveOutputStream : NSObject {

	<SFUSimpleOutputStream>* _outputStream;
	long long _offset;
	BOOL _doneWritingObjectEntries;
	BOOL _doneWritingFileDescriptorProtos;
	BOOL _doneWritingClassInfoMap;
	BOOL _descriptorsEnabled;
	BOOL _tocEnabled;

}
-(id)initWithOutputStream:(id)arg1 checkCrc:(unsigned)arg2 enableDescriptors:(BOOL)arg3 enableToc:(BOOL)arg4 closedCleanly:(BOOL)arg5 archivedVersions:(SCD_Struct_TS249)arg6 ;
-(BOOL)writeEntry:(id)arg1 offset:(long long*)arg2 headerLength:(unsigned*)arg3 error:(id*)arg4 ;
-(void).cxx_destruct;
@end

