/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
@class NSString, AVController, AVQueue, NSDictionary;

@interface STKAlert : NSObject {

	BOOL _needsResponse;
	NSString* _tone;
	AVController* _avController;
	AVQueue* _avQueue;
	BOOL _interruptedAudio;
	NSDictionary* _options;
	NSString* _type;

}

@property (nonatomic,copy) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL needsResponse;                  //@synthesize needsResponse=_needsResponse - In the implementation block
-(void)dealloc;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)phoneNumber;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(void)sendResponse:(CFStringRef)arg1 ;
-(BOOL)oneShotInputEntry;
-(BOOL)dismissesAfterNextEvent;
-(BOOL)needsResponse;
-(id)initWithType:(id)arg1 andOptions:(id)arg2 ;
-(void)setNeedsResponse:(BOOL)arg1 ;
-(CFStringRef)displayTextPriority;
-(void)playTone;
-(void)sendResponse:(CFStringRef)arg1 withString:(id)arg2 ;
-(CFStringRef)callPriority;
-(BOOL)sendResponseUponDisplay;
-(id)inCallText;
-(void)stopTone;
-(void)_setAudioInterrupted:(BOOL)arg1 ;
-(void)_playbackDidEnd:(id)arg1 ;
-(void)playRingtoneWithIdentifier:(id)arg1 loop:(BOOL)arg2 ;
-(unsigned long)_soundIDForTone:(CFStringRef)arg1 ;
-(void)_stopTone:(id)arg1 ;
-(void)_playTone:(CFStringRef)arg1 forDuration:(float)arg2 ;
-(void)sendResponse:(CFStringRef)arg1 withBool:(BOOL)arg2 ;
-(CFStringRef)toolkitAlertType;
-(BOOL)shouldRedial;
@end

