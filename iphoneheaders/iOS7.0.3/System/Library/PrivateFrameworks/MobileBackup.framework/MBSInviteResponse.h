/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface MBSInviteResponse : PBCodable {

	unsigned long long _quotaAvailable;
	BOOL _inviteAllowed;
	SCD_Struct_MB5 _has;

}

@property (assign,nonatomic) BOOL hasInviteAllowed; 
@property (assign,nonatomic) BOOL inviteAllowed;                             //@synthesize inviteAllowed=_inviteAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasQuotaAvailable; 
@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
-(BOOL)hasInviteAllowed;
-(BOOL)inviteAllowed;
-(void)setInviteAllowed:(BOOL)arg1 ;
-(BOOL)hasQuotaAvailable;
-(void)setHasInviteAllowed:(BOOL)arg1 ;
-(void)setHasQuotaAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)quotaAvailable;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

