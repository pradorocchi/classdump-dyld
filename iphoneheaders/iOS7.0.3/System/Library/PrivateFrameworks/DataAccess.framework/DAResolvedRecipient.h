/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSDictionary;

@interface DAResolvedRecipient : NSObject {

	int _status;
	NSMutableDictionary* _resolvedEmailToX509Certs;

}

@property (assign) int status;                                             //@synthesize status=_status - In the implementation block
@property (readonly) NSDictionary * resolvedEmailToX509Certs;              //@synthesize resolvedEmailToX509Certs=_resolvedEmailToX509Certs - In the implementation block
-(void)dealloc;
-(id)description;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)addCert:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)resolvedEmailToX509Certs;
@end

