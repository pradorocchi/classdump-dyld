/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TTSSpeechService <NSObject>
@required
-(oneway void)startSpeechRequest:(id)arg1;
-(oneway void)pauseSpeechRequestAtMark:(int)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(int)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/ id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/ id)arg1;
@end

