/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface PersistentAddressBookAddress : PBCodable <NSCopying> {

	double _position;
	int _addressID;
	int _recordID;
	NSString* _syncIdentifier;
	SCD_Struct_Pe7 _has;

}

@property (assign,nonatomic) BOOL hasRecordID; 
@property (assign,nonatomic) int recordID;                           //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) BOOL hasAddressID; 
@property (assign,nonatomic) int addressID;                          //@synthesize addressID=_addressID - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                        //@synthesize position=_position - In the implementation block
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setHasAddressID:(BOOL)arg1 ;
-(BOOL)hasRecordID;
-(void)setHasRecordID:(BOOL)arg1 ;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(void)setAddressID:(int)arg1 ;
-(BOOL)hasAddressID;
-(int)addressID;
-(BOOL)hasPosition;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRecordID:(int)arg1 ;
-(int)recordID;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

