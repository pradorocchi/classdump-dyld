/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class MBSFileAttributes, NSString, MBSFileReference, NSData;

@interface MBSFile : PBCodable {

	unsigned long long _added;
	unsigned long long _size;
	MBSFileAttributes* _attributes;
	NSString* _domain;
	MBSFileReference* _duplicateFile;
	NSData* _fileID;
	NSString* _relativePath;
	NSData* _signature;
	BOOL _committed;
	SCD_Struct_MB6 _has;

}

@property (nonatomic,readonly) BOOL hasFileID; 
@property (nonatomic,retain) NSData * fileID;                               //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasRelativePath; 
@property (nonatomic,retain) NSString * relativePath;                       //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                            //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) unsigned long long size;                       //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributes; 
@property (nonatomic,retain) MBSFileAttributes * attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL hasAdded; 
@property (assign,nonatomic) unsigned long long added;                      //@synthesize added=_added - In the implementation block
@property (nonatomic,readonly) BOOL hasDuplicateFile; 
@property (nonatomic,retain) MBSFileReference * duplicateFile;              //@synthesize duplicateFile=_duplicateFile - In the implementation block
@property (assign,nonatomic) BOOL hasCommitted; 
@property (assign,nonatomic) BOOL committed;                                //@synthesize committed=_committed - In the implementation block
-(BOOL)committed;
-(void)setFileID:(id)arg1 ;
-(void)setRelativePath:(id)arg1 ;
-(void)setDuplicateFile:(id)arg1 ;
-(BOOL)hasFileID;
-(id)fileID;
-(BOOL)hasRelativePath;
-(BOOL)hasSignature;
-(BOOL)hasAdded;
-(unsigned long long)added;
-(void)setAdded:(unsigned long long)arg1 ;
-(BOOL)hasDuplicateFile;
-(id)duplicateFile;
-(BOOL)hasCommitted;
-(void)setCommitted:(BOOL)arg1 ;
-(void)setHasAdded:(BOOL)arg1 ;
-(void)setHasCommitted:(BOOL)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(id)MBFileWithDomainManager:(id)arg1 ;
-(id)signature;
-(void)dealloc;
-(unsigned long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)domain;
-(void)setSize:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 ;
-(void)setDomain:(id)arg1 ;
-(BOOL)hasSize;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDomain;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasAttributes;
-(id)relativePath;
@end

