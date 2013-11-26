/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(void)dealloc;
-(id)init;
-(id)allSessionURLs;
-(id)audioPlayerForURL:(id)arg1 ;
-(id)startSessionWithURL:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
@end

