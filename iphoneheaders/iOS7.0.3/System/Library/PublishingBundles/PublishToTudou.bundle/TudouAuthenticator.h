/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PublishingBundles/PublishToTudou.bundle/PublishToTudou
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PublishToTudou/PublishToTudou-Structs.h>
#import <VideoUpload/VUAuthenticator.h>

@class NSString;

@interface TudouAuthenticator : VUAuthenticator {

	NSString* _base64AuthString;

}
+(id)sharedAuthenticator;
-(CFDictionaryRef)_createKeychainAttributes;
-(id)_authURL;
-(void)addAuthenticationHeaderToRequest:(id)arg1 ;
-(void)_clearStoredCredentials;
-(void)_storeCredentials;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

