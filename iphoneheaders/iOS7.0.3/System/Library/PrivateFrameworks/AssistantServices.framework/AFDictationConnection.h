/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AFDictationDelegate;
@class NSXPCConnection, NSString, ;

@interface AFDictationConnection : NSObject {

	NSXPCConnection* _assistantConnection;
	NSString* _lastUsedLanguage;
	<AFDictationDelegate>* _delegate;
	unsigned _stateInSync : 1;
	unsigned _audioSessionID;
	float _averagePower;
	float _peakPower;
	BOOL _isCapturingSpeech;
	BOOL _hasActiveRequest;

}

@property (assign,nonatomic,__weak) <AFDictationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL currentlyUsingLocalDication; 
+(void)fetchSupportedLanguageCodes:(/*^block*/ id)arg1 ;
+(BOOL)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(BOOL)dictationIsEnabled;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_updateState;
-(BOOL)dictationIsAvailableForLanguage:(id)arg1 ;
-(void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)cancelAvailabilityMonitoring;
-(void)beginAvailabilityMonitoring;
-(float)averagePower;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3 ;
-(void)endSession;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(BOOL)currentlyUsingLocalDication;
-(void)preheat;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_connectionInterrupted;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)stopSpeech;
-(float)peakPower;
-(void)_clearConnections;
-(id)_assistantDictationService;
-(void)_willFailDictationWithError:(id)arg1 ;
-(void)_willCompleteDictation;
-(void)_registerInvalidationHandlerForXPCConnection:(id)arg1 ;
-(void)prepareWithOptions:(id)arg1 ;
-(id)_assistantConnection;
-(void)_availabilityChanged:(id)arg1 ;
-(void)_willStartDictation;
-(void)_willCancelDictation;
-(void)_tellSpeechDelegateRecordingDidBegin;
-(void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 ;
-(void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 ;
-(void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 options:(id)arg3 forLanguage:(id)arg4 ;
-(unsigned)audioSessionID;
-(void).cxx_destruct;
@end

