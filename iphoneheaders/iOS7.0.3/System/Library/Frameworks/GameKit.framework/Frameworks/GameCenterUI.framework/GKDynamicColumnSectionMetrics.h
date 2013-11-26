/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics {

	unsigned _columnsInPortrait;
	unsigned _columnsInLandscape;

}

@property (assign,nonatomic) unsigned columnsInPortrait;               //@synthesize columnsInPortrait=_columnsInPortrait - In the implementation block
@property (assign,nonatomic) unsigned columnsInLandscape;              //@synthesize columnsInLandscape=_columnsInLandscape - In the implementation block
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned)arg1 columnsInLandscape:(unsigned)arg2 ;
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned)arg1 columnsInLandscape:(unsigned)arg2 forIdiom:(int)arg3 ;
-(id)initWithIdiom:(int)arg1 ;
-(CGSize)itemSizeForCollectionView:(id)arg1 ;
-(void)setColumnsInPortrait:(unsigned)arg1 ;
-(void)setColumnsInLandscape:(unsigned)arg1 ;
-(unsigned)columnsInPortrait;
-(unsigned)columnsInLandscape;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

