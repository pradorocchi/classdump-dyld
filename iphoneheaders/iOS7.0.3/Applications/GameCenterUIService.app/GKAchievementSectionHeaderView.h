/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKSectionHeaderView.h>

@class GKAchievementsDataSource;

@interface GKAchievementSectionHeaderView : GKSectionHeaderView {

	int _sectionIndex;
	GKAchievementsDataSource* _dataSource;

}

@property (assign,nonatomic) int sectionIndex;                                   //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) GKAchievementsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(void)applyLayoutAttributes:(id)arg1 ;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
@end

