/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MBLSingleMessageClient;
@class ;

@interface _MBLLoadForClientJob : NSObject {

	<MBLSingleMessageClient>* _client;
	id _mbl;

}

@property (nonatomic,readonly) <MBLSingleMessageClient> * client;              //@synthesize client=_client - In the implementation block
-(id)initForClient:(id)arg1 forMBLMailbox:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(id)client;
@end

