/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class AOSFindBaseServiceProvider, NSDictionary, NSURL;

@interface AOSFMRequestAckFences : AOSFMRequest {

	AOSFindBaseServiceProvider* _provider;
	NSDictionary* _fencesCommand;
	NSURL* _ackURL;

}

@property (nonatomic,retain) AOSFindBaseServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSDictionary * fencesCommand;                       //@synthesize fencesCommand=_fencesCommand - In the implementation block
@property (nonatomic,retain) NSURL * ackURL;                                     //@synthesize ackURL=_ackURL - In the implementation block
-(id)initWithProvider:(id)arg1 fencesCommand:(id)arg2 ackURL:(id)arg3 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(void)setAckURL:(id)arg1 ;
-(id)ackURL;
-(void)setFencesCommand:(id)arg1 ;
-(id)fencesCommand;
-(void)setProvider:(id)arg1 ;
-(id)requestBody;
-(void).cxx_destruct;
-(id)provider;
@end

