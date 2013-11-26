/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSAccountStore.h>

@class NSMutableArray;

@interface DaemonAccountStore : SSAccountStore {

	NSMutableArray* _accounts;

}

@property (getter=isAuthenticationActive,readonly) BOOL authenticationActive; 
+(void)observeXPCServer:(id)arg1 ;
+(void)addAccountWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAccountAuthenticatedWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAccountsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAuthenticationActiveWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)resetAccountWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setAccountCreditsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)signOutAccountsWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultStore;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)synchronizeData;
-(void)resetAuthenticationState;
-(void)_authenticateBeganNotification:(id)arg1 ;
-(void)_authenticateEndedNotification:(id)arg1 ;
-(void)_synchronizeData;
-(id)_activeAccount;
-(id)_activeLockerAccount;
-(id)_addAccount:(id)arg1 asActiveAccount:(BOOL)arg2 asActiveLockerAccount:(BOOL)arg3 ;
-(void)_postAccountStoreDidChange;
-(void)_setCreditsString:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(void)_signOutAccount:(id)arg1 ;
-(void)_setActiveAccount:(id)arg1 ;
-(void)_setActiveLockerAccount:(id)arg1 ;
-(void)_sendAccountsReplyForMessage:(id)arg1 connection:(id)arg2 ;
-(void)_obliterateBiometricsForAccountID:(id)arg1 ;
-(void)_commitAccount:(id)arg1 toKeyValueStoreInDomain:(id)arg2 ;
-(id)_copyActiveAccountIdentifier:(id*)arg1 ;
-(void)_accountChangeNotification;
-(id)activeLockerAccount;
-(id)activeAccount;
-(void)dealloc;
-(id)init;
-(id)accounts;
-(id)_accounts;
-(void)reloadAccounts;
-(void)signOutAccount:(id)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(BOOL)isAuthenticationActive;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(id)_accountWithUniqueIdentifier:(id)arg1 ;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)addAccount:(id)arg1 ;
-(id)setActiveAccount:(id)arg1 ;
-(id)setActiveLockerAccount:(id)arg1 ;
@end

