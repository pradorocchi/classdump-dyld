/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/RTFTextBlock.h>

@interface RTFTextTable : RTFTextBlock {

	unsigned _numCols;
	unsigned _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;

}
-(void)dealloc;
-(id)init;
-(unsigned)numberOfColumns;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(BOOL)collapsesBorders;
-(BOOL)hidesEmptyCells;
-(void)setCollapsesBorders:(BOOL)arg1 ;
-(void)setHidesEmptyCells:(BOOL)arg1 ;
-(unsigned)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned)arg1 ;
-(unsigned)_tableFlags;
-(void)_setTableFlags:(unsigned)arg1 ;
@end

