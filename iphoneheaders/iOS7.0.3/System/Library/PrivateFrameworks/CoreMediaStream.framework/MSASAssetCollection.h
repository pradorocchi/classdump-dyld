/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol NSCoding;
@class NSString, NSArray, , NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying> {

	BOOL _hasComments;
	BOOL _isDeletable;
	BOOL _isMine;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _albumGUID;
	NSArray* _assets;
	NSString* _fileName;
	NSString* _path;
	<NSCoding>* _userInfo;
	NSDictionary* _metadata;
	NSDate* _timestamp;
	NSString* _personID;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	long long _photoNumber;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) <NSCoding> * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long photoNumber;                   //@synthesize photoNumber=_photoNumber - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL hasComments;                        //@synthesize hasComments=_hasComments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetCollectionWithAssetCollection:(id)arg1 ;
+(id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(id)path;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(void)setPath:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)ctag;
-(void)setCtag:(id)arg1 ;
-(void)setEmail:(id)arg1 ;
-(BOOL)hasComments;
-(long long)photoNumber;
-(void)setPhotoNumber:(long long)arg1 ;
-(id)initWithFileName:(id)arg1 path:(id)arg2 ;
-(void)setHasComments:(BOOL)arg1 ;
-(id)MSASPProtocolDictionary;
-(id)fileName;
-(id)assets;
-(id)personID;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setGUID:(id)arg1 ;
-(void)setPersonID:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(id)GUID;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setFileName:(id)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(id)albumGUID;
-(BOOL)isMine;
-(BOOL)hasVideoAsset;
-(BOOL)isDeletable;
-(id)mediaAssetType;
-(void)setAlbumGUID:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(id)fullName;
-(id)email;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(void)setFullName:(id)arg1 ;
-(void).cxx_destruct;
@end

