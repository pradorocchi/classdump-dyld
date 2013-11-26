/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {

	NSString* _resultString;
	NSString* _statusString;
	SCD_Union_VS1 _spokenString;
	VSRecognitionSession* _session;
	unsigned _spokenStringIsAttributed : 1;

}
-(void)dealloc;
-(id)cancel;
-(id)perform;
-(int)completionType;
-(void)_continueAfterDeferredStart;
-(BOOL)_hasDeferredStartCallback;
-(void)_setSession:(id)arg1 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(id)resultDisplayString;
-(id)statusDisplayString;
-(BOOL)sensitiveActionsEnabled;
-(id)_session;
-(void)setResultDisplayString:(id)arg1 ;
-(void)setStatusDisplayString:(id)arg1 ;
-(void)setSpokenFeedbackString:(id)arg1 ;
-(void)setSpokenFeedbackAttributedString:(id)arg1 ;
-(void)completeWithNextAction:(id)arg1 error:(id)arg2 ;
@end

