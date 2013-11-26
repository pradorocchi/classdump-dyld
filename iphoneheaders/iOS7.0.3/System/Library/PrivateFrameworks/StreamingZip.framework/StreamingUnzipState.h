/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <StreamingZip/StreamingZip-Structs.h>
@class NSString, NSArray, NSDictionary, NSMutableData;

@interface StreamingUnzipState : NSObject {

	z_stream_s* _zlibState;
	unsigned long long _lastResumptionSavedOffset;
	unsigned long long _hashedChunkSize;
	unsigned long long _bytesHashedInChunk;
	unsigned long long _uncompressedBytesOutput;
	NSString* _unzipPath;
	NSArray* _md5Hashes;
	unsigned long _currentLFRecordAllocationSize;
	CC_MD5state_st _md5Context;
	NSDictionary* _streamInfoDict;
	NSString* _lastChunkPartialHash;
	NSMutableData* _unsureData;
	NSMutableData* _incompleteData;
	NSMutableData* _unfinishedCompressedData;
	SCD_Struct_St5* _currentLFRecord;
	unsigned long long _thisStageBytesComplete;
	unsigned long long _currentOffset;
	unsigned long long _outputFileOffsetAtLastBlockEnd;
	unsigned long long _recordsProcessed;
	unsigned long long _totalRecordCount;
	unsigned long _currentCRC32;
	int _currentOutputFD;
	unsigned short _currentLFMode;
	unsigned char _streamState;
	unsigned char _lastBlockEndNumUnusedBits;
	unsigned char _lastBlockEndLastByte;
	BOOL _currentLFIsStreamMetadata;

}

@property (nonatomic,readonly) z_stream_s* zlibState; 
@property (nonatomic,readonly) NSString * unzipPath;                                   //@synthesize unzipPath=_unzipPath - In the implementation block
@property (nonatomic,retain) NSDictionary * streamInfoDict;                            //@synthesize streamInfoDict=_streamInfoDict - In the implementation block
@property (nonatomic,retain) NSString * lastChunkPartialHash;                          //@synthesize lastChunkPartialHash=_lastChunkPartialHash - In the implementation block
@property (nonatomic,retain) NSMutableData * unsureData;                               //@synthesize unsureData=_unsureData - In the implementation block
@property (nonatomic,retain) NSMutableData * incompleteData;                           //@synthesize incompleteData=_incompleteData - In the implementation block
@property (nonatomic,retain) NSMutableData * unfinishedCompressedData;                 //@synthesize unfinishedCompressedData=_unfinishedCompressedData - In the implementation block
@property (assign,nonatomic) SCD_Struct_St6* currentLFRecord;                          //@synthesize currentLFRecord=_currentLFRecord - In the implementation block
@property (assign,nonatomic) unsigned long currentLFRecordAllocationSize;              //@synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize - In the implementation block
@property (assign,nonatomic) unsigned long long thisStageBytesComplete;                //@synthesize thisStageBytesComplete=_thisStageBytesComplete - In the implementation block
@property (assign,nonatomic) unsigned long long currentOffset;                         //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long hashedChunkSize;                     //@synthesize hashedChunkSize=_hashedChunkSize - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesHashedInChunk;                  //@synthesize bytesHashedInChunk=_bytesHashedInChunk - In the implementation block
@property (assign,nonatomic) unsigned long currentCRC32;                               //@synthesize currentCRC32=_currentCRC32 - In the implementation block
@property (assign,nonatomic) int currentOutputFD;                                      //@synthesize currentOutputFD=_currentOutputFD - In the implementation block
@property (assign,nonatomic) unsigned long long recordsProcessed;                      //@synthesize recordsProcessed=_recordsProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long totalRecordCount;                      //@synthesize totalRecordCount=_totalRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long uncompressedBytesOutput;               //@synthesize uncompressedBytesOutput=_uncompressedBytesOutput - In the implementation block
@property (assign,nonatomic) unsigned short currentLFMode;                             //@synthesize currentLFMode=_currentLFMode - In the implementation block
@property (assign,nonatomic) unsigned char streamState;                                //@synthesize streamState=_streamState - In the implementation block
@property (assign,nonatomic) BOOL currentLFIsStreamMetadata;                           //@synthesize currentLFIsStreamMetadata=_currentLFIsStreamMetadata - In the implementation block
+(id)unzipStateWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)currentOffset;
-(void)dealloc;
-(id)init;
-(void)setStreamState:(unsigned char)arg1 ;
-(id)unzipPath;
-(void)setCurrentOutputFD:(int)arg1 ;
-(int)currentOutputFD;
-(id)unsureData;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 ;
-(id)serializeState;
-(unsigned char)streamState;
-(SCD_Struct_St5*)currentLFRecord;
-(unsigned long long)thisStageBytesComplete;
-(unsigned long long)hashedChunkSize;
-(unsigned long long)bytesHashedInChunk;
-(id)lastChunkPartialHash;
-(id)checkLastChunkPartialHash;
-(id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 onlyFinishCurrentChunk:(BOOL)arg4 ;
-(void)markResumptionPoint;
-(unsigned long)currentLFRecordAllocationSize;
-(void)setCurrentLFRecord:(SCD_Struct_St5*)arg1 ;
-(void)setCurrentLFRecordAllocationSize:(unsigned long)arg1 ;
-(unsigned long long)recordsProcessed;
-(void)setCurrentLFIsStreamMetadata:(BOOL)arg1 ;
-(id)streamInfoDict;
-(void)setCurrentLFMode:(unsigned short)arg1 ;
-(unsigned short)currentLFMode;
-(BOOL)currentLFIsStreamMetadata;
-(void)setCurrentCRC32:(unsigned long)arg1 ;
-(unsigned long)currentCRC32;
-(id)incompleteData;
-(void)setThisStageBytesComplete:(unsigned long long)arg1 ;
-(z_stream_s*)zlibState;
-(id)unfinishedCompressedData;
-(unsigned long long)uncompressedBytesOutput;
-(void)setUncompressedBytesOutput:(unsigned long long)arg1 ;
-(void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1 ;
-(void)setStreamInfoDict:(id)arg1 ;
-(void)setUnsureData:(id)arg1 ;
-(void)setTotalRecordCount:(unsigned long long)arg1 ;
-(void)setLastChunkPartialHash:(id)arg1 ;
-(id)finishStream;
-(id)_checkHashForOffset:(unsigned long long)arg1 ;
-(void)clearSavedState;
-(id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_internalSetStreamState:(unsigned char)arg1 ;
-(void)setIncompleteData:(id)arg1 ;
-(void)setUnfinishedCompressedData:(id)arg1 ;
-(void)setRecordsProcessed:(unsigned long long)arg1 ;
-(unsigned long long)totalRecordCount;
-(void).cxx_destruct;
@end

