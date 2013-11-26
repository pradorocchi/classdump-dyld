/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VSSpeechService <NSObject>
@required
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1;
-(oneway void)getAutoDownloadedVoiceAssets:(/*^block*/ id)arg1;
-(oneway void)startSpeechRequest:(id)arg1;
-(oneway void)continueSpeechRequest;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/ id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/ id)arg1;
-(oneway void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(/*^block*/ id)arg3;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(int)arg2 gender:(int)arg3 custom:(BOOL)arg4 reply:(/*^block*/ id)arg5;
-(oneway void)pauseSpeechRequestAtMark:(int)arg1;
-(oneway void)stopSpeechRequestAtMark:(int)arg1;
-(oneway void)getCustomVoicesReply:(/*^block*/ id)arg1;
-(oneway void)getLocalCustomVoicesReply:(/*^block*/ id)arg1;
@end

