/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame, NSString, NSSet, NSMutableDictionary, NSMutableArray, GKFriendsDataSource, NSArray;

@interface GKFriendsSplittingDataSource : GKSplittingDataSource {

	GKGame* _game;
	NSString* _achievementID;
	NSString* _leaderboardID;
	NSSet* _hiddenPlayers;
	int _maxSelectable;
	NSMutableDictionary* _pickerInfos;
	NSMutableArray* _currentSelectedPlayerIDs;

}

@property (nonatomic,retain) GKFriendsDataSource * friendsDataSource; 
@property (nonatomic,retain) GKGame * game;                                          //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSString * achievementID;                               //@synthesize achievementID=_achievementID - In the implementation block
@property (nonatomic,retain) NSString * leaderboardID;                               //@synthesize leaderboardID=_leaderboardID - In the implementation block
@property (nonatomic,retain) NSSet * hiddenPlayers;                                  //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
@property (nonatomic,retain) NSArray * selectedPlayerIDs; 
@property (nonatomic,readonly) NSArray * selectedPlayers; 
@property (assign,nonatomic) int maxSelectable;                                      //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pickerInfos;                      //@synthesize pickerInfos=_pickerInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSelectedPlayerIDs;              //@synthesize currentSelectedPlayerIDs=_currentSelectedPlayerIDs - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureDataSource;
-(void)configureCollectionView:(id)arg1 ;
-(void)setMaxSelectable:(int)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)refreshSelectionState;
-(id)selectedPlayerIDs;
-(BOOL)canSelectIndexPath:(id)arg1 ;
-(void)toggleSelectionAtIndexPath:(id)arg1 ;
-(id)selectedPlayers;
-(int)maxSelectable;
-(void)setFriendsDataSource:(id)arg1 ;
-(void)setSelectedPlayerIDs:(id)arg1 ;
-(void)setHiddenPlayers:(id)arg1 ;
-(id)hiddenPlayers;
-(id)playerInfoForPlayerID:(id)arg1 ;
-(void)notifyPickerItemsChanged:(id)arg1 ;
-(id)indexPathsForPlayerID:(id)arg1 ;
-(BOOL)canSelectPlayerInfo:(id)arg1 ;
-(id)allPickerInfos;
-(void)toggleSelectionForPlayerID:(id)arg1 ;
-(void)updatePickerInfosFromPlayers:(id)arg1 ;
-(void)loadAchievedWithUpdateNotifier:(id)arg1 ;
-(void)loadRanksWithUpdateNotifier:(id)arg1 ;
-(void)loadGamePlayersWithUpdateNotifier:(id)arg1 ;
-(void)updatePickerInfosFromFriendPlayersOfGame:(id)arg1 outputPlayerIDs:(id*)arg2 ;
-(id)collectionView:(id)arg1 forPickerInfo:(id)arg2 forIndexPath:(id)arg3 ;
-(id)friendsDataSource;
-(id)achievementID;
-(void)setAchievementID:(id)arg1 ;
-(id)leaderboardID;
-(void)setLeaderboardID:(id)arg1 ;
-(id)pickerInfos;
-(void)setPickerInfos:(id)arg1 ;
-(id)currentSelectedPlayerIDs;
-(void)setCurrentSelectedPlayerIDs:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

