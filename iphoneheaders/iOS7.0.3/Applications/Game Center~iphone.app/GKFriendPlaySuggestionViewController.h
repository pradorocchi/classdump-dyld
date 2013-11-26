/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@class GKPlayer, GKGame;

@interface GKFriendPlaySuggestionViewController : GKCollectionViewController {

	GKPlayer* _friend;
	GKGame* _game;

}

@property (nonatomic,retain) GKPlayer * friend;              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) GKGame * game;                  //@synthesize game=_game - In the implementation block
+(id)playSuggestionViewControllerForFriend:(id)arg1 withGame:(id)arg2 ;
+(void)presentSuggestionFlowForFriend:(id)arg1 withGame:(id)arg2 fromViewController:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)initWithFriend:(id)arg1 game:(id)arg2 ;
-(id)explanatoryText;
-(void)handleActionForPlayType:(unsigned)arg1 inViewController:(id)arg2 ;
-(void)selectChallengesInViewController:(id)arg1 ;
-(void)playGame;
-(void)showProfileInViewController:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)configureViewFactories;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)friend;
-(void)setFriend:(id)arg1 ;
@end

