/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class UITableView, NSIndexPath;

@interface UITableViewRowData : NSObject <NSCopying> {

	UITableView* _tableView;
	int _numSections;
	int _sectionRowDataCapacity;
	id* _sectionRowData;
	float _minimumRowHeight;
	float _tableViewWidth;
	BOOL _tableHeaderHeightValid;
	float _tableHeaderHeight;
	BOOL _tableFooterHeightValid;
	float _tableFooterHeight;
	float _heightForTableHeaderViewHiding;
	float _tableTopPadding;
	float _tableBottomPadding;
	BOOL _tableSidePaddingValid;
	float _tableSidePadding;
	NSIndexPath* _reorderedIndexPath;
	NSIndexPath* _gapIndexPath;
	float _reorderedRowHeight;

}

@property (nonatomic,readonly) NSIndexPath * reorderGapIndexPath;                     //@synthesize gapIndexPath=_gapIndexPath - In the implementation block
@property (nonatomic,readonly) float reorderedRowHeight;                              //@synthesize reorderedRowHeight=_reorderedRowHeight - In the implementation block
@property (nonatomic,readonly) float heightForAutohidingTableHeaderView; 
@property (nonatomic,readonly) float heightForTableHeaderViewHiding; 
@property (assign,nonatomic) float minimumRowHeight;                                  //@synthesize minimumRowHeight=_minimumRowHeight - In the implementation block
@property (assign,nonatomic) float tableTopPadding;                                   //@synthesize tableTopPadding=_tableTopPadding - In the implementation block
@property (assign,nonatomic) float tableBottomPadding;                                //@synthesize tableBottomPadding=_tableBottomPadding - In the implementation block
@property (assign,nonatomic) float tableSidePadding; 
-(void)dealloc;
-(int)numberOfRowsInSection:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)numberOfSections;
-(int)numberOfRows;
-(id)initWithTableView:(id)arg1 ;
-(id)indexPathForRowAtGlobalRow:(int)arg1 ;
-(void)invalidateAllSections;
-(CGRect)rectForTableHeaderView;
-(CGRect)rectForTableFooterView;
-(void)setHeightForTableHeaderViewHiding:(float)arg1 ;
-(float)heightForAutohidingTableHeaderView;
-(float)heightForTableHeaderViewHiding;
-(void)tableHeaderHeightDidChangeToHeight:(float)arg1 ;
-(float)heightForTable;
-(void)ensureAllSectionsAreValid;
-(NSRange)sectionsInRect:(CGRect)arg1 ;
-(CGRect)rectForHeaderInSection:(int)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(CGRect)rectForFooterInSection:(int)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(CGRect)floatingRectForHeaderInSection:(int)arg1 visibleRect:(CGRect)arg2 ;
-(float)maxHeaderTitleWidthForSection:(int)arg1 ;
-(CGRect)floatingRectForFooterInSection:(int)arg1 visibleRect:(CGRect)arg2 ;
-(float)maxFooterTitleWidthForSection:(int)arg1 ;
-(CGRect)rectForGlobalRow:(int)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(NSRange)globalRowsInRect:(CGRect)arg1 canGuess:(BOOL)arg2 ;
-(int)globalRowForRowAtIndexPath:(id)arg1 ;
-(int)headerAlignmentForSection:(int)arg1 ;
-(int)footerAlignmentForSection:(int)arg1 ;
-(float)minimumRowHeight;
-(CGRect)rectForTable;
-(void)setReorderedIndexPath:(id)arg1 ;
-(CGRect)rectForSection:(int)arg1 ;
-(CGRect)rectForRow:(int)arg1 inSection:(int)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(float)heightForHeaderInSection:(int)arg1 canGuess:(BOOL)arg2 ;
-(float)heightForFooterInSection:(int)arg1 canGuess:(BOOL)arg2 ;
-(float)heightForTableHeaderView;
-(float)tableSidePadding;
-(void)invalidateAllSectionOffsetsAndUpdatePadding;
-(void)tableFooterHeightDidChangeToHeight:(float)arg1 ;
-(void)tableViewWidthDidChangeToWidth:(float)arg1 ;
-(int)sectionLocationForRow:(int)arg1 inSection:(int)arg2 ;
-(void)addReorderGapFromIndexPath:(id)arg1 ;
-(void)removeReorderGapFromIndexPath:(id)arg1 ;
-(void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2 ;
-(id)targetIndexPathForPoint:(CGPoint)arg1 ;
-(BOOL)hasHeaderForSection:(int)arg1 ;
-(int)sectionLocationForReorderedRow:(int)arg1 inSection:(int)arg2 ;
-(void)setTableTopPadding:(float)arg1 ;
-(BOOL)shouldStripHeaderTopPaddingForSection:(int)arg1 ;
-(void)setTableBottomPadding:(float)arg1 ;
-(void)setMinimumRowHeight:(float)arg1 ;
-(id)reorderedIndexPath;
-(id)reorderGapIndexPath;
-(float)reorderedRowHeight;
-(int)sectionForSectionRowData:(id)arg1 ;
-(float)offsetForSection:(id)arg1 ;
-(float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(BOOL)arg3 ;
-(void)_updateSectionRowDataArrayForNumSections:(int)arg1 ;
-(void)_ensureSectionOffsetIsValidForSection:(int)arg1 ;
-(void)_updateNumSections;
-(int)_sectionRowForGlobalRow:(int)arg1 inSection:(int*)arg2 ;
-(void)adjustSectionOffsetsBeginningAtIndex:(int)arg1 count:(int)arg2 delta:(float)arg3 rowDelta:(int)arg4 ;
-(void)_updateTopAndBottomPadding;
-(float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(BOOL)arg3 adjustForReorderedRow:(BOOL)arg4 ;
-(float)heightForTableFooterView;
-(BOOL)hasFooterForSection:(int)arg1 ;
-(int)sectionForPoint:(CGPoint)arg1 ;
-(int)_sectionForPoint:(CGPoint)arg1 beginningWithSection:(int)arg2 numberOfSections:(int)arg3 ;
-(void)invalidateSection:(int)arg1 ;
-(int)numberOfRowsBeforeSection:(int)arg1 ;
-(float)heightForSection:(int)arg1 ;
-(void)setTableSidePadding:(float)arg1 ;
-(float)tableTopPadding;
-(float)tableBottomPadding;
@end

