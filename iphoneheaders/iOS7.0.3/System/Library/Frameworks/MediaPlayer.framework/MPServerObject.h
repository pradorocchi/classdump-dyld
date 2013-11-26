/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPServerObject : NSObject {

	int _clientPID;
	SCD_Struct_MP14* _clientAuditToken;

}

@property (nonatomic,readonly) int clientPID;                                  //@synthesize clientPID=_clientPID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP14* clientAuditToken;              //@synthesize clientAuditToken=_clientAuditToken - In the implementation block
+(id)_center;
-(void)_registerNotificationsForSelectors;
-(id)_forwardMessage:(id)arg1 userInfo:(id)arg2 auditToken:(SCD_Struct_MP14*)arg3 ;
-(SCD_Struct_MP14*)clientAuditToken;
-(id)init;
-(int)clientPID;
@end

