/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@interface ASAccount_Legacy : DALegacyAccount
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_needsNewAccountIDForOldVersion:(int)arg1 ;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(BOOL)arg2 ;
-(id)usernameWithoutDomain;
-(int)asAccountVersion;
@end

