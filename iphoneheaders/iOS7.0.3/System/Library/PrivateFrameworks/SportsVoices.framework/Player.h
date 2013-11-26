/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPlayReceiver/AVAudioPlayerDelegate.h>

@class NSString, NSBundle;

@interface Player : NSObject <AVAudioPlayerDelegate> {

	NSString* _directory;
	NSBundle* _bundle;

}

@property (nonatomic,@dynamic,readonly) BOOL isPlaying; 
+(void)_setAudioSessionActive:(BOOL)arg1 ;
+(void)__initializeAudioSession;
+(id)__sharedPlayQueue;
+(void)__clearSharedPlayQueue;
+(void)__nts_indicateEndOfQueuePlayback:(id)arg1 ;
+(void)__nts_queuePlayerStatusChanged:(id)arg1 ;
+(void)__deactivateAudioSession;
+(void)initialize;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDirectory:(id)arg1 bundle:(id)arg2 ;
-(void)playSoundFilesInSequence:(id)arg1 ;
-(void)stopAllSounds;
-(id)_playerItemForFileNamed:(id)arg1 ;
-(void)_addFileToQueue:(id)arg1 ;
-(BOOL)isPlaying;
-(void)dealloc;
@end

