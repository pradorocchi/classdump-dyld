/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKGameTurnInfo, GKTurnsDataSource, NSIndexPath;

@interface GKTurnsViewController : GKCollectionViewController <UICollectionViewDelegate> {

	GKGameTurnInfo* _selectedTurnInfo;
	GKTurnsDataSource* _turnsDataSource;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) GKGameTurnInfo * selectedTurnInfo;                //@synthesize selectedTurnInfo=_selectedTurnInfo - In the implementation block
@property (nonatomic,retain) GKTurnsDataSource * turnsDataSource;              //@synthesize turnsDataSource=_turnsDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                  //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/ id)arg1 ;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setTurnsDataSource:(id)arg1 ;
-(void)restoreSelectedTurnInfo;
-(id)selectedTurnInfo;
-(void)setSelectedTurnInfo:(id)arg1 ;
-(void)showSubcontroller:(id)arg1 ;
-(void)setSelectedIndexPath:(id)arg1 ;
-(void)showMatchesViewControllerForTurnInfo:(id)arg1 ;
-(id)turnsDataSource;
-(id)selectedIndexPath;
-(void)dealloc;
-(id)init;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

