/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, NSString;

@interface PushNotificationRegisterBlock : NSObject {

	NSNumber* _accountIdentifier;
	/*^block*/ id _block;
	NSString* _environmentName;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) id block;                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(/*^block*/ id)block;
-(void)setBlock:(/*^block*/ id)arg1 ;
-(id)accountIdentifier;
-(void)setEnvironmentName:(id)arg1 ;
-(id)environmentName;
@end

