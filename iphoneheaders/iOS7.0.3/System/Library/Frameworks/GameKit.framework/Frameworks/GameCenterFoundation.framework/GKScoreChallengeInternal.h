/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal {

	GKScoreInternal* _score;
	GKLeaderboardInternal* _leaderboard;

}

@property (nonatomic,copy) GKScoreInternal * score;                            //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) GKLeaderboardInternal * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(id)score;
-(void)setLeaderboard:(id)arg1 ;
-(id)issueRepresentationToPlayerID:(id)arg1 ;
-(id)leaderboard;
-(void)dealloc;
-(unsigned)type;
-(void)setScore:(id)arg1 ;
@end

