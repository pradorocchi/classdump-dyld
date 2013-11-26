/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSDictionary;

@interface ErrorHandlerSession : NSObject {

	long long _sessionID;
	NSMutableDictionary* _sessionProperties;

}

@property (nonatomic,readonly) long long sessionIdentifier;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionProperties;              //@synthesize sessionProperties=_sessionProperties - In the implementation block
-(id)sessionProperties;
-(void)setValue:(id)arg1 forSessionProperty:(id)arg2 ;
-(id)valueForSessionProperty:(id)arg1 ;
-(long long)sessionIdentifier;
-(void)setSessionProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

