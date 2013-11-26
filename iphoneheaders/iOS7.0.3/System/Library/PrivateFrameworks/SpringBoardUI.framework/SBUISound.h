/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, AVItem, NSDictionary;

@interface SBUISound : NSObject {

	int _soundType;
	unsigned long _systemSoundID;
	unsigned _soundBehavior;
	NSString* _ringtoneName;
	AVItem* _avItem;
	NSDictionary* _vibrationPattern;
	BOOL _repeats;
	double _maxDuration;
	NSDictionary* _controllerAttributes;
	int _alertType;
	NSString* _accountIdentifier;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;
	NSString* _resolvedToneIdentifier;
	/*^block*/ id _completionBlock;

}

@property (assign,nonatomic) int soundType;                                    //@synthesize soundType=_soundType - In the implementation block
@property (assign,nonatomic) unsigned long systemSoundID;                      //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) unsigned soundBehavior;                           //@synthesize soundBehavior=_soundBehavior - In the implementation block
@property (nonatomic,retain) NSString * ringtoneName;                          //@synthesize ringtoneName=_ringtoneName - In the implementation block
@property (nonatomic,retain) AVItem * avItem;                                  //@synthesize avItem=_avItem - In the implementation block
@property (nonatomic,retain) NSDictionary * vibrationPattern;                  //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (assign,getter=isRepeating,nonatomic) BOOL repeats;                  //@synthesize repeats=_repeats - In the implementation block
@property (assign,nonatomic) double maxDuration;                               //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * controllerAttributes;              //@synthesize controllerAttributes=_controllerAttributes - In the implementation block
@property (assign,nonatomic) int alertType;                                    //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                          //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                     //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
-(id)vibrationPattern;
-(void)setVibrationPattern:(id)arg1 ;
-(double)maxDuration;
-(void)_setCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)isPlaying;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(/*^block*/ id)_completionBlock;
-(void)setSoundType:(int)arg1 ;
-(int)soundType;
-(void)stop;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
-(id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned)arg2 vibrationPattern:(id)arg3 ;
-(void)setSystemSoundID:(unsigned long)arg1 ;
-(void)setSoundBehavior:(unsigned)arg1 ;
-(void)setRingtoneName:(id)arg1 ;
-(void)setRepeats:(BOOL)arg1 ;
-(void)setToneIdentifier:(id)arg1 ;
-(void)setVibrationIdentifier:(id)arg1 ;
-(unsigned long)systemSoundID;
-(unsigned)soundBehavior;
-(id)ringtoneName;
-(BOOL)isRepeating;
-(id)toneIdentifier;
-(id)vibrationIdentifier;
-(id)avItem;
-(void)setMaxDuration:(double)arg1 ;
-(id)accountIdentifier;
-(BOOL)playInEvironments:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setControllerAttributes:(id)arg1 ;
-(void)setAvItem:(id)arg1 ;
-(id)controllerAttributes;
-(id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 controllerAttributes:(id)arg4 ;
-(id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5 ;
-(id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4 ;
-(id)_resolvedToneIdentifier;
-(void)_setResolvedToneIdentifier:(id)arg1 ;
@end

