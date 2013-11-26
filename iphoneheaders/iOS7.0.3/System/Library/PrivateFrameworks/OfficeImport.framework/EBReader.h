/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader {

	NSString* mTemporaryDirectory;
	XlObjectFactory* mXlObjectFactory;
	BOOL mUseStringOptimization;
	BOOL mIsFileStructuredStorage;
	const void* mBuffer;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
@property (nonatomic,readonly) XlBinaryReader* xlReader; 
@property (assign,nonatomic) BOOL useStringOptimization; 
@property (assign,nonatomic) BOOL isFileStructuredStorage; 
-(void)dealloc;
-(BOOL)start;
-(XlBinaryReader*)xlReader;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(void)setIsFileStructuredStorage:(BOOL)arg1 ;
-(BOOL)isFileStructuredStorage;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(id)temporaryDirectory;
-(void)setTemporaryDirectory:(id)arg1 ;
-(BOOL)useStringOptimization;
-(void)setUseStringOptimization:(BOOL)arg1 ;
@end

