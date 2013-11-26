/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEORPUserCredentials : PBCodable <NSCopying> {

	NSString* _iCloudUserMapsAuthToken;
	NSString* _iCloudUserPersonID;

}

@property (nonatomic,readonly) BOOL hasICloudUserPersonID; 
@property (nonatomic,retain) NSString * iCloudUserPersonID;                   //@synthesize iCloudUserPersonID=_iCloudUserPersonID - In the implementation block
@property (nonatomic,readonly) BOOL hasICloudUserMapsAuthToken; 
@property (nonatomic,retain) NSString * iCloudUserMapsAuthToken;              //@synthesize iCloudUserMapsAuthToken=_iCloudUserMapsAuthToken - In the implementation block
+(id)_credentialsForPrimaryICloudAccount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setICloudUserPersonID:(id)arg1 ;
-(void)setICloudUserMapsAuthToken:(id)arg1 ;
-(BOOL)hasICloudUserPersonID;
-(id)iCloudUserPersonID;
-(BOOL)hasICloudUserMapsAuthToken;
-(id)iCloudUserMapsAuthToken;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

