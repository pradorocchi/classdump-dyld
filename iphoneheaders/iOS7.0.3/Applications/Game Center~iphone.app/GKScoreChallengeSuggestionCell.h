/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKChallengeSuggestionCell.h>

@class GKLeaderboard, GKScore;

@interface GKScoreChallengeSuggestionCell : GKChallengeSuggestionCell {

	GKLeaderboard* _leaderboard;

}

@property (nonatomic,readonly) GKScore * score; 
@property (nonatomic,retain) GKLeaderboard * leaderboard;              //@synthesize leaderboard=_leaderboard - In the implementation block
-(id)score;
-(void)setLeaderboard:(id)arg1 ;
-(void)didUpdateModel;
-(id)iconSource;
-(id)iconURLString;
-(id)leaderboard;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

