/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@protocol NSURLAuthenticationChallengeSender;
@class NSString, ;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {

	int _failureCount;
	BOOL _hasPassword;
	NSString* _password;
	<NSURLAuthenticationChallengeSender>* _sender;
	NSString* _user;
	BOOL _userNameIsEditable;

}

@property (assign) int failureCount;                                           //@synthesize failureCount=_failureCount - In the implementation block
@property (assign) BOOL hasPassword;                                           //@synthesize hasPassword=_hasPassword - In the implementation block
@property (retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) <NSURLAuthenticationChallengeSender> * sender;              //@synthesize sender=_sender - In the implementation block
@property (retain) NSString * user;                                            //@synthesize user=_user - In the implementation block
@property (assign) BOOL userNameIsEditable;                                    //@synthesize userNameIsEditable=_userNameIsEditable - In the implementation block
-(id)user;
-(id)password;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setSender:(id)arg1 ;
-(BOOL)hasPassword;
-(void)dealloc;
-(id)init;
-(id)sender;
-(int)failureCount;
-(void)setFailureCount:(int)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(void)setUserNameIsEditable:(BOOL)arg1 ;
-(void)setHasPassword:(BOOL)arg1 ;
@end

