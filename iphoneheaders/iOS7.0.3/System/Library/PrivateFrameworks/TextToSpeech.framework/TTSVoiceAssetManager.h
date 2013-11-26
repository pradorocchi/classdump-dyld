/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TTSVoiceAssetManager : NSObject
+(id)sharedInstance;
-(id)resourcePathForLanguage:(id)arg1 gender:(int)arg2 footprint:(int)arg3 ;
-(id)_voiceAssetQueryForName:(id)arg1 language:(id)arg2 gender:(int)arg3 footprint:(int)arg4 version:(id)arg5 localOnly:(BOOL)arg6 ;
-(void)automaticallyDownloadVoiceAssetsIfNeeded;
-(id)_autoDownloadedAssets;
-(void)_automaticallyDownloadVoiceAssetsIfNeeded;
-(void)getVoiceAssetsLocalOnly:(BOOL)arg1 reply:(/*^block*/ id)arg2 ;
-(void)startDownloadingVoiceAsset:(id)arg1 progress:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/ id)arg1 ;
@end

