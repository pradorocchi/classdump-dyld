/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class Decomposer, Player;

@interface WordsSpeaker : NSObject {

	Decomposer* _matcher;
	Player* _player;

}

@property (nonatomic,@dynamic,readonly) BOOL isPlaying; 
-(BOOL)playSoundsForWords:(id)arg1 ;
-(id)initWithGender:(id)arg1 language:(id)arg2 ;
-(void)stopAllSounds;
-(BOOL)isPlaying;
@end

