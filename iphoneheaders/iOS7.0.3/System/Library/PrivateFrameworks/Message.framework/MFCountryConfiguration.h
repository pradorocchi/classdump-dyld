/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSConditionLock, NSString;

@interface MFCountryConfiguration : NSObject {

	int _lock;
	NSConditionLock* _generatorLock;
	NSString* _lastCountryCode;
	NSString* _countryCode;

}

@property (nonatomic,readonly) NSString * countryCode; 
+(id)sharedConfiguration;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)_cellSimCountryCode;
-(id)_networkCountryCode;
-(id)_countryCodeWithGenerator:(/*^block*/ id)arg1 ;
-(void)updateCurrentCountry;
-(id)countryCode;
@end

