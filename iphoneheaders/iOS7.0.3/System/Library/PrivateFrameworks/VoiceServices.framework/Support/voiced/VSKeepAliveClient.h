/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <voiced/voiced-Structs.h>
#import <VoiceServices/VSRemoteKeepAlive.h>

@class VSServerKeepAliveManager;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive> {

	VSServerKeepAliveManager* _manager;
	BOOL _isActive;
	long _activity;
	BOOL _keepSessionActive;
	CFRunLoopSourceRef _registryRunLoopSource;

}
-(BOOL)_shouldChangeAudioSession;
-(void)dealloc;
-(oneway void)cancel;
-(void)setManager:(id)arg1 ;
-(oneway void)maintainWithAudioType:(int)arg1 keepAudioSessionActive:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

