/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/EDSheet.h>

@class EDRowBlocks, EDColumnInfoCollection, EDCollection, EDMergedCellCollection, EDPane, EDWarnings, EDReference, TSUPointerKeyDictionary;

@interface EDWorksheet : EDSheet {

	EDRowBlocks* mRowBlocks;
	EDColumnInfoCollection* mColumnInfos;
	EDCollection* mConditionalFormattings;
	EDCollection* mHyperlinks;
	EDCollection* mTables;
	EDCollection* mPivotTables;
	EDMergedCellCollection* mMergedCells;
	EDPane* mPane;
	EDWarnings* mWorksheetWarnings;
	double mDefaultColumnWidth;
	unsigned short mDefaultRowHeight;
	unsigned long mMaxRowOutlineLevel;
	unsigned long mMaxColumnOutlineLevel;
	bool mFitToPage;
	EDReference* mMaxCellReferencedInFormulas;
	TSUPointerKeyDictionary* mMergedRows;
	TSUPointerKeyDictionary* mMergedCols;
	EDReference* mImplicitCellArea;

}
-(id)mergedCells;
-(id)rowBlocks;
-(double)defaultColumnWidth;
-(unsigned short)defaultRowHeight;
-(id)columnInfos;
-(id)conditionalFormattings;
-(id)hyperlinks;
-(id)pane;
-(void)setPane:(id)arg1 ;
-(id)worksheetWarnings;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)setDefaultRowHeight:(unsigned short)arg1 ;
-(void)setFitToPage:(bool)arg1 ;
-(void)setMaxRowOutlineLevel:(unsigned long)arg1 ;
-(void)setMaxColumnOutlineLevel:(unsigned long)arg1 ;
-(void)teardown;
-(void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long)arg1 ;
-(id)tables;
-(void)setup;
-(void)reduceMemoryIfPossible;
-(bool)fitToPage;
-(id)pivotTables;
-(bool)hasMergedCells;
-(unsigned long)maxRowOutlineLevel;
-(void)updateMaxRowOutlineLevelIfNeeded:(unsigned long)arg1 ;
-(unsigned long)maxColumnOutlineLevel;
-(void)setMergedRowsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)setMergedColsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(BOOL)hasMergedRow;
-(BOOL)isRowMerged:(unsigned)arg1 ;
-(id)mergedRowRef:(unsigned)arg1 ;
-(BOOL)hasMergedCol;
-(BOOL)isColMerged:(unsigned)arg1 ;
-(id)mergedColRef:(unsigned)arg1 ;
-(id)maxCellReferencedInFormulas;
-(id)implicitCellArea;
-(void)setImplicitCellArea:(id)arg1 ;
@end

