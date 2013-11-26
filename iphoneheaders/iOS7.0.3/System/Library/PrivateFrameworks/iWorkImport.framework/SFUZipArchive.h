/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SFUZipArchiveDataRepresentation;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, SFUDataRepresentation, NSData, NSString, SFUCryptoKey;

@interface SFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	SFUDataRepresentation<SFUZipArchiveDataRepresentation>* mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	SFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(BOOL)isZipArchiveAtPath:(id)arg1 ;
-(void)dealloc;
-(id)entryWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2 ;
-(BOOL)isEncrypted;
-(void)readEntries;
-(void)collapseCommonRootDirectory;
-(void)setCryptoKey:(id)arg1 ;
-(id)allEntryNames;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)passphraseHint;
-(id)encryptedDocumentUuid;
-(BOOL)decompressAtPath:(id)arg1 ;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
@end

