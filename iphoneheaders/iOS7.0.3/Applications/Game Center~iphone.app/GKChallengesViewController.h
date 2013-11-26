/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UIStateRestoring.h>

@class GKPlayer, GKGame, GKChallenge;

@interface GKChallengesViewController : GKCollectionViewController <UIStateRestoring> {

	GKPlayer* _player;
	GKGame* _game;
	GKChallenge* _selectedChallenge;

}

@property (nonatomic,retain) GKPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                                         //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKChallenge * selectedChallenge;                       //@synthesize selectedChallenge=_selectedChallenge - In the implementation block
@property (nonatomic,readonly) <UIStateRestoring> * restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(id)challengesControllerForPlayer:(id)arg1 ;
+(id)challengesControllerForPlayer:(id)arg1 inGame:(id)arg2 ;
-(id)initWithPlayer:(id)arg1 game:(id)arg2 ;
-(id)selectedChallenge;
-(void)restoreSelectedChallenge;
-(void)setSelectedChallenge:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)didExitLoadingState;
-(void)didEnterNoContentState;
-(void)configureViewFactories;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/ id)arg1 ;
-(void)didExitRefreshingState;
-(void)dealloc;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

