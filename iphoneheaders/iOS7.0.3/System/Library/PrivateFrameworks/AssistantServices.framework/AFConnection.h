/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSString, NSMutableDictionary, ;

@interface AFConnection : NSObject {

	NSXPCConnection* _connection;
	NSString* _outstandingRequestClass;
	BOOL _hasActiveRequest;
	NSMutableDictionary* _replyHandlerForAceId;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _audioSessionID;
	float _averagePower;
	float _peakPower;
	unsigned _clientStateIsInSync : 1;
	unsigned _voiceOverIsActive : 1;
	<AFAssistantUIService>* _delegate;
	<AFSpeechDelegate>* _speechDelegate;

}

@property (assign,nonatomic,__weak) <AFAssistantUIService> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <AFSpeechDelegate> * speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isRecording; 
+(BOOL)isAvailable;
+(void)initialize;
+(void)beginMonitoringAvailability;
+(id)outputVoice;
+(BOOL)assistantIsSupported;
+(void)stopMonitoringAvailability;
+(BOOL)userDataSyncNeeded;
+(BOOL)isReadyForLanguageCode:(id)arg1 ;
+(void)defrost;
+(BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(id)currentLanguageCode;
-(BOOL)isRecording;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_updateState;
-(float)averagePower;
-(void)endSession;
-(id)_connection;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)preheat;
-(void)_updateClientState;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3 ;
-(void)_willStartRequestForSpeech:(BOOL)arg1 ;
-(void)_tellDelegateRequestWillStart;
-(void)_scheduleRequestTimeout;
-(void)_cancelRequestTimeout;
-(BOOL)shouldSpeak;
-(void)_tellDelegateShouldSpeakChanged:(BOOL)arg1 ;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_willCompleteRequest;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_requestDidEnd;
-(void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_invokeRequestTimeout;
-(id)_clientService;
-(void)_setShouldSpeak:(BOOL)arg1 ;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)setVoiceOverIsActive:(BOOL)arg1 ;
-(void)_willCancelRequest;
-(void)setIsStark:(BOOL)arg1 ;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 ;
-(void)_checkAndSetIsCapturingSpeech:(BOOL)arg1 ;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)_extendRequestTimeout;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2 ;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)rollbackClearContext;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/ id)arg2 ;
-(void)setAlertContextWithBulletins:(id)arg1 ;
-(void)telephonyRequestCompleted;
-(void)_doCommand:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_tellDelegateRequestFinished;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)startDirectActionRequestWithString:(id)arg1 ;
-(void)stopSpeech;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 ;
-(float)peakPower;
-(void)sendGenericAceCommand:(id)arg1 ;
-(void)sendReplyCommand:(id)arg1 ;
-(id)speechDelegate;
-(void)setSpeechDelegate:(id)arg1 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2 ;
-(void)undoRequest;
-(void)redoRequest;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(id)_clientServiceWithErrorHandler:(/*^block*/ id)arg1 ;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)cancelRequest;
-(void)clearContext;
-(void)rollbackRequest;
-(void)setApplicationContext;
-(unsigned)audioSessionID;
-(void)_clearConnection;
-(void).cxx_destruct;
@end

