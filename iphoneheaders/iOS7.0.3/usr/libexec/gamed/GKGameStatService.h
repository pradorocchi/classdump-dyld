/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKService.h>
#import <GameCenterFoundation/GKGameStatService.h>

@protocol GKGameStatService <NSObject>
@required
-(oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(BOOL)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(/*^block*/ id)arg3;
-(oneway void)resetAchievementsWithHandler:(/*^block*/ id)arg1;
-(void)submitAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 handler:(/*^block*/ id)arg4;
-(oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getLeaderboadForRequest:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getLeaderboardsForGameDescriptor:(id)arg1 playerID:(id)arg2 setIdentifier:(id)arg3 handler:(/*^block*/ id)arg4;
-(oneway void)setDefaultLeaderboardID:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getDefaultLeaderboardIDWithHandler:(/*^block*/ id)arg1;
-(oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayerID:(id)arg2 handler:(/*^block*/ id)arg3;
-(void)submitScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 handler:(/*^block*/ id)arg4;
-(oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)getAchievementsForGameDescriptor:(id)arg1 playerIDs:(id)arg2 handler:(/*^block*/ id)arg3;
@end


@interface GKGameStatService : GKService <GKGameStatService>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(void)submitDelayedScores:(id)arg1 transaction:(id)arg2 ;
-(void)submitDelayedAchievements:(id)arg1 transaction:(id)arg2 ;
-(void)_getPlayersForGameDescriptor:(id)arg1 type:(int)arg2 reference:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)fetchRecentPlayersWithPlayer:(id)arg1 game:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)loadRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)fetchRecentGamesBetweenPlayer:(id)arg1 otherPlayer:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)getRecentGamesWithPlayerID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getRecentPlayersForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)loadAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)fetchAchievementDescriptionsForGame:(id)arg1 context:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)loadAchievementsForGame:(id)arg1 playerIDs:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)fetchAchievementsForGame:(id)arg1 playerIDs:(id)arg2 context:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)cleanUpLeaderboardTitles:(id)arg1 set:(id)arg2 context:(id)arg3 ;
-(void)loadLeaderboardsForGameDescriptor:(id)arg1 playerID:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(void)fetchLeaderboardsForGameDescriptor:(id)arg1 playerID:(id)arg2 setIdentifier:(id)arg3 context:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(BOOL)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(oneway void)resetAchievementsWithHandler:(/*^block*/ id)arg1 ;
-(void)submitAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getLeaderboadForRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getLeaderboardsForGameDescriptor:(id)arg1 playerID:(id)arg2 setIdentifier:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(oneway void)setDefaultLeaderboardID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getDefaultLeaderboardIDWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayerID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)submitScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)getAchievementsForGameDescriptor:(id)arg1 playerIDs:(id)arg2 handler:(/*^block*/ id)arg3 ;
@end

