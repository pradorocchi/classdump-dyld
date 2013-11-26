/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SFUZipArchiveDataRepresentation;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, OISFUDataRepresentation, NSData, NSString, OISFUCryptoKey;

@interface OISFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	OISFUDataRepresentation<SFUZipArchiveDataRepresentation>* mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	OISFUCryptoKey* mCryptoKey;
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

