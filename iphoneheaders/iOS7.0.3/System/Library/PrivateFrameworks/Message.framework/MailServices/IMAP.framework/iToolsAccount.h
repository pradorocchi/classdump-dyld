/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAPAccount.h>

@interface iToolsAccount : IMAPAccount
+(id)editableSuffix;
+(BOOL)setupIsAutomated;
+(id)descriptionPlaceholder;
+(BOOL)addressIsEditable;
+(id)copyShortFormForHost:(id)arg1 descriptionPlaceholder:(id)arg2 addressIsEditable:(BOOL)arg3 ;
+(id)helpTitle;
+(id)helpURL;
+(id)userInfoForAccountTopLevelSpecifier;
+(void)initialize;
+(id)emailAddressHostPart;
+(id)deliveryHostName;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(BOOL)isPredefinedAccountType;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(BOOL)usernameIsEmailAddress;
+(id)hostname;
-(BOOL)supportsArchiving;
-(void)setUsername:(id)arg1 ;
-(Class)connectionClass;
-(void)setHostname:(id)arg1 ;
-(void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2 ;
-(void)accountDidLoad;
-(BOOL)isAccountClassEquivalentTo:(id)arg1 ;
-(BOOL)isHostnameEquivalentTo:(id)arg1 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)emailAddresses;
-(id)fromEmailAddressesIncludingDisabled;
-(BOOL)updateEmailAliases;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(void)setDeliveryAccount:(id)arg1 ;
-(id)fromEmailAddresses;
-(id)displayUsername;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(id)hostname;
@end

