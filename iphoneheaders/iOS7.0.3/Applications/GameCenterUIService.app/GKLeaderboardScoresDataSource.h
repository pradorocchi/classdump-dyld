/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKScoreLeaderboard, GKPlayer, GKShowcaseCellView, GKGameRecord, NSMutableIndexSet;

@interface GKLeaderboardScoresDataSource : GKCollectionViewDataSource {

	GKScoreLeaderboard* _leaderboard;
	GKPlayer* _player;
	SEL _showcaseSelector;
	SEL _showMoreSelector;
	GKShowcaseCellView* _showcaseView;
	GKShowcaseCellView* _compareShowcaseView;
	unsigned _pageSize;
	GKGameRecord* _game;
	NSMutableIndexSet* _loadedPages;
	unsigned _loadedAndReadyScores;
	NSRange _preloadedRange;

}

@property (assign,nonatomic) int timeScope; 
@property (assign,nonatomic) int playerScope; 
@property (nonatomic,retain) GKScoreLeaderboard * leaderboard;                      //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) SEL showcaseSelector;                                  //@synthesize showcaseSelector=_showcaseSelector - In the implementation block
@property (assign,nonatomic) SEL showMoreSelector;                                  //@synthesize showMoreSelector=_showMoreSelector - In the implementation block
@property (nonatomic,retain) GKShowcaseCellView * showcaseView;                     //@synthesize showcaseView=_showcaseView - In the implementation block
@property (nonatomic,retain) GKShowcaseCellView * compareShowcaseView;              //@synthesize compareShowcaseView=_compareShowcaseView - In the implementation block
@property (assign,nonatomic) unsigned pageSize;                                     //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) NSRange preloadedRange;                                //@synthesize preloadedRange=_preloadedRange - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                                   //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * loadedPages;                       //@synthesize loadedPages=_loadedPages - In the implementation block
@property (assign,nonatomic) unsigned loadedAndReadyScores;                         //@synthesize loadedAndReadyScores=_loadedAndReadyScores - In the implementation block
-(unsigned)pageForItemIndex:(unsigned)arg1 ;
-(id)loadedPages;
-(void)setLoadedPages:(id)arg1 ;
-(BOOL)needShowcaseCell:(int)arg1 withMaxRank:(unsigned)arg2 ;
-(BOOL)needCompareShowcaseCell:(int)arg1 withMaxRank:(unsigned)arg2 ;
-(float)textOffsetForIdiom:(int)arg1 withMaxRank:(unsigned)arg2 ;
-(id)initWithLeaderboard:(id)arg1 game:(id)arg2 player:(id)arg3 ;
-(void)setShowcaseSelector:(SEL)arg1 ;
-(void)setShowMoreSelector:(SEL)arg1 ;
-(void)loadNextPageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)bottomShowcaseScore;
-(unsigned)initialPageCount;
-(void)markCell:(id)arg1 ;
-(id)topShowcaseScore;
-(void)preloadImagesStartingAtIndex:(unsigned)arg1 ;
-(void)notifyWithLeaderboardUpdate:(id)arg1 error:(id)arg2 updateNotifier:(id)arg3 ;
-(void)loadScoresForPages:(NSRange)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(/*function pointer*/ void*)sectionTitleFormatter;
-(SEL)showcaseSelector;
-(void)setShowcaseView:(id)arg1 ;
-(void)setCompareShowcaseView:(id)arg1 ;
-(SEL)showMoreSelector;
-(void)replaceLeaderboard:(id)arg1 ;
-(BOOL)needShowcaseCell:(int)arg1 ;
-(BOOL)needCompareShowcaseCell:(int)arg1 ;
-(void)configureCell:(id)arg1 withScoreAtIndex:(unsigned)arg2 ;
-(id)showcaseView;
-(id)compareShowcaseView;
-(unsigned)loadedAndReadyScores;
-(void)setLoadedAndReadyScores:(unsigned)arg1 ;
-(void)setLeaderboard:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(int)playerScope;
-(int)timeScope;
-(void)setTimeScope:(int)arg1 ;
-(void)setPlayerScope:(int)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)setPageSize:(unsigned)arg1 ;
-(void)setPreloadedRange:(NSRange)arg1 ;
-(NSRange)preloadedRange;
-(id)leaderboard;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned)pageSize;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

