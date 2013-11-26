/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface MSASSharingRelationship : NSObject <NSCopying> {

	BOOL _isMine;
	NSString* _GUID;
	NSString* _albumGUID;
	NSString* _email;
	NSArray* _emails;
	NSArray* _phones;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _personID;
	NSDate* _subscriptionDate;
	int _state;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSArray * emails;                        //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * phones;                        //@synthesize phones=_phones - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSDate * subscriptionDate;               //@synthesize subscriptionDate=_subscriptionDate - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSubscriptionDate:(id)arg1 ;
-(void)setEmail:(id)arg1 ;
-(id)_fullName;
-(BOOL)isEqualToSharingRelationship:(id)arg1 ;
-(id)personID;
-(void)setGUID:(id)arg1 ;
-(void)setPersonID:(id)arg1 ;
-(id)GUID;
-(id)subscriptionDate;
-(void)setIsMine:(BOOL)arg1 ;
-(id)albumGUID;
-(BOOL)isMine;
-(void)setAlbumGUID:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(id)fullName;
-(id)email;
-(id)emails;
-(id)phones;
-(void)setEmails:(id)arg1 ;
-(void)setPhones:(id)arg1 ;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(void)setFullName:(id)arg1 ;
-(void).cxx_destruct;
@end

