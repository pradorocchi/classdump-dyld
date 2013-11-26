/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class NSArray;

@interface TSCHCommandReplaceGridValues : TSCHChartCommand {

	unsigned mRowIndex;
	unsigned mColumnIndex;
	unsigned mNumRowsToAdd;
	unsigned mNumColsToAdd;
	NSArray* mOldDataRows;
	NSArray* mNewDataRows;
	NSArray* mOldRowNames;
	NSArray* mNewRowNames;
	NSArray* mOldColumnNames;
	NSArray* mNewColumnNames;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(void)p_adjustGridByRows:(int)arg1 columns:(int)arg2 ;
-(unsigned)p_numberOfRows:(id)arg1 ;
-(unsigned)p_numberOfColumns:(id)arg1 ;
-(id)p_value:(id)arg1 row:(unsigned)arg2 column:(unsigned)arg3 ;
-(void)p_applyFromData:(id)arg1 toData:(id)arg2 rowNames:(id)arg3 columnNames:(id)arg4 rowDelta:(int)arg5 colDelta:(int)arg6 ;
-(id)initWithChartInfo:(id)arg1 row:(unsigned)arg2 column:(unsigned)arg3 dataRows:(id)arg4 rowNames:(id)arg5 columnNames:(id)arg6 ;
-(void)dealloc;
-(BOOL)process;
@end

