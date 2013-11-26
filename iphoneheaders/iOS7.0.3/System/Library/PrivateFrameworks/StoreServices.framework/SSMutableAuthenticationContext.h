/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSAuthenticationContext.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSString, NSDictionary, NSNumber, NSArray;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>

@property (nonatomic,@dynamic,copy) NSString * accountName; 
@property (@dynamic) int accountScope; 
@property (assign,getter=isAccountNameEditable,nonatomic,@dynamic) BOOL accountNameEditable; 
@property (assign,nonatomic,@dynamic) BOOL allowsRetry; 
@property (assign,nonatomic,@dynamic) BOOL canCreateNewAccount; 
@property (assign,nonatomic,@dynamic) BOOL canSetActiveAccount; 
@property (nonatomic,@dynamic,copy) NSString * initialPassword; 
@property (assign,nonatomic,@dynamic) BOOL persistsPasswordFallback; 
@property (nonatomic,@dynamic,copy) NSString * preferredITunesStoreClient; 
@property (assign,nonatomic,@dynamic) int promptStyle; 
@property (nonatomic,@dynamic,copy) NSDictionary * requestParameters; 
@property (assign,nonatomic,@dynamic) BOOL shouldCreateNewSession; 
@property (assign,nonatomic,@dynamic) BOOL shouldFollowAccountButtons; 
@property (assign,nonatomic,@dynamic) BOOL shouldSuppressDialogs; 
@property (nonatomic,@dynamic,copy) NSDictionary * signupRequestParameters; 
@property (nonatomic,@dynamic,retain) NSNumber * requiredUniqueIdentifier; 
@property (nonatomic,@dynamic,copy) NSArray * userAgentComponents; 
@property (nonatomic,@dynamic,copy) NSDictionary * HTTPHeaders; 
@property (assign,nonatomic,@dynamic) BOOL allowsBioAuthentication; 
@property (nonatomic,@dynamic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isDemoAccount,nonatomic,@dynamic) BOOL demoAccount; 
@property (assign,nonatomic,@dynamic) BOOL persistsAcrossDeviceLock; 
@property (assign,nonatomic,@dynamic) BOOL shouldIgnoreProtocol; 
@property (assign,nonatomic,@dynamic) int tokenType; 
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setRequestParameters:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(void)setShouldCreateNewSession:(BOOL)arg1 ;
-(void)setHTTPHeaders:(id)arg1 ;
-(void)setDemoAccount:(BOOL)arg1 ;
-(void)setAccountScope:(int)arg1 ;
-(void)setAccountNameEditable:(BOOL)arg1 ;
-(void)setCanCreateNewAccount:(BOOL)arg1 ;
-(void)setAllowsRetry:(BOOL)arg1 ;
-(void)setCanSetActiveAccount:(BOOL)arg1 ;
-(void)setInitialPassword:(id)arg1 ;
-(void)setPreferredITunesStoreClient:(id)arg1 ;
-(void)setPersistsPasswordFallback:(BOOL)arg1 ;
-(void)setShouldIgnoreProtocol:(BOOL)arg1 ;
-(void)setShouldSuppressDialogs:(BOOL)arg1 ;
-(void)setSignupRequestParameters:(id)arg1 ;
-(void)setUserAgentComponents:(id)arg1 ;
-(void)setAllowsBioAuthentication:(BOOL)arg1 ;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(void)setPersistsAcrossDeviceLock:(BOOL)arg1 ;
-(void)setTokenType:(int)arg1 ;
-(void)setValuesWithAccount:(id)arg1 ;
-(void)setShouldFollowAccountButtons:(BOOL)arg1 ;
-(void)setRequiredUniqueIdentifier:(id)arg1 ;
-(void)setPromptStyle:(int)arg1 ;
@end

