/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;

}
+(id)secureCodedPropertyKeys;
-(unsigned short)numberOfChallenges;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfTurns;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(BOOL)isFindable;
-(void)setFindable:(BOOL)arg1 ;
-(BOOL)isPhotoPending;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(BOOL)isUnderage;
-(BOOL)isPurpleBuddyAccount;
-(void)dealloc;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
@end

