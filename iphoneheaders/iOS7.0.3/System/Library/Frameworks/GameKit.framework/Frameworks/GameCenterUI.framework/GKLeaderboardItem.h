/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class GKPlayer, GKScore;

@interface GKLeaderboardItem : NSObject {

	GKPlayer* _player;
	GKScore* _score;
	unsigned _totalScores;

}

@property (retain) GKPlayer * player;                           //@synthesize player=_player - In the implementation block
@property (retain) GKScore * score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned totalScores;              //@synthesize totalScores=_totalScores - In the implementation block
-(id)score;
-(unsigned)totalScores;
-(void)setTotalScores:(unsigned)arg1 ;
-(id)_gkViewDebuggingChildKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setScore:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

