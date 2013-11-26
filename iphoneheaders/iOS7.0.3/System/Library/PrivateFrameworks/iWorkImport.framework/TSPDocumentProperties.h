/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSUUID, NSDictionary;

@interface TSPDocumentProperties : NSObject <NSCopying> {

	NSUUID* _documentUUID;
	NSUUID* _versionUUID;
	NSUUID* _nextVersionUUID;
	NSDictionary* _additionalProperties;
	unsigned long long _fileFormatVersion;

}

@property (nonatomic,copy) NSUUID * documentUUID;                                //@synthesize documentUUID=_documentUUID - In the implementation block
@property (nonatomic,copy) NSUUID * versionUUID;                                 //@synthesize versionUUID=_versionUUID - In the implementation block
@property (assign,nonatomic) unsigned long long fileFormatVersion;               //@synthesize fileFormatVersion=_fileFormatVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentFileFormatVersion; 
@property (nonatomic,copy) NSUUID * nextVersionUUID;                             //@synthesize nextVersionUUID=_nextVersionUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalProperties;              //@synthesize additionalProperties=_additionalProperties - In the implementation block
+(id)documentUUIDAtURL:(id)arg1 ;
+(BOOL)documentIsEncryptedAtURL:(id)arg1 ;
-(id)initWithDocumentURL:(id)arg1 error:(id*)arg2 ;
-(void)setDocumentUUID:(id)arg1 ;
-(id)copyWithAdditionalProperties:(id)arg1 ;
-(void)updateVersionUUID;
-(id)documentUUID;
-(void)updateDocumentUUID;
-(void)setFileFormatVersion:(unsigned long long)arg1 ;
-(id)versionUUID;
-(BOOL)writeToDocumentURL:(id)arg1 error:(id*)arg2 ;
-(id)nextVersionUUID;
-(BOOL)hasCurrentFileFormatVersion;
-(id)documentPropertiesURLForDocumentURL:(id)arg1 ;
-(void)readDocumentPropertiesFromDictionary:(id)arg1 ;
-(id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2 ;
-(BOOL)writeToPropertiesURL:(id)arg1 error:(id*)arg2 ;
-(id)documentIdentifierURLForDocumentURL:(id)arg1 ;
-(unsigned long long)fileFormatVersion;
-(id)initWithPropertiesURL:(id)arg1 error:(id*)arg2 ;
-(void)setVersionUUID:(id)arg1 ;
-(void)setNextVersionUUID:(id)arg1 ;
-(id)additionalProperties;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void).cxx_destruct;
@end

