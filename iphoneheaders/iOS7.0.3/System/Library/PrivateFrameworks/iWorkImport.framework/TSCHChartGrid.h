/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol TSCHNotifyOnModify;
@class , NSMutableArray;

@interface TSCHChartGrid : NSObject <NSCopying> {

	<TSCHNotifyOnModify>* mModifyDelegate;
	int mDirection;
	NSMutableArray* mRowNames;
	NSMutableArray* mColumnNames;
	NSMutableArray* mValues;
	BOOL mDirty;
	BOOL mAddingMultipleRows;
	unsigned mNextRowNumber;
	BOOL mAddingMultipleCols;
	unsigned mNextColNumber;

}

@property (assign,nonatomic) <TSCHNotifyOnModify> * objectToNotify; 
@property (assign,nonatomic) int direction; 
@property (assign,nonatomic) BOOL dirty; 
@property (nonatomic,readonly) unsigned numberOfRows; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
-(void)removeColumn:(unsigned)arg1 ;
-(void)willModify;
-(id)nameForRow:(unsigned)arg1 ;
-(void)setNameForRow:(unsigned)arg1 toName:(id)arg2 ;
-(id)nameForColumn:(unsigned)arg1 ;
-(void)setNameForColumn:(unsigned)arg1 toName:(id)arg2 ;
-(void)removeRow:(unsigned)arg1 ;
-(void)insertRow:(unsigned)arg1 withName:(id)arg2 ;
-(void)insertColumn:(unsigned)arg1 withName:(id)arg2 ;
-(void)setValue:(id)arg1 forRow:(unsigned)arg2 column:(unsigned)arg3 ;
-(id)objectToNotify;
-(BOOL)contentsEqualToGrid:(id)arg1 ;
-(BOOL)p_name:(id)arg1 isInArray:(id)arg2 ;
-(id)extractRowNames:(NSRange)arg1 deleteValueRows:(BOOL)arg2 ;
-(id)extractValueRows:(NSRange)arg1 ;
-(void)insertRowsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 ;
-(id)extractColumnNames:(NSRange)arg1 ;
-(id)extractValueColumns:(NSRange)arg1 ;
-(void)insertColumnsAt:(unsigned)arg1 names:(id)arg2 data:(id)arg3 ;
-(id)valueForRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(id*)valuesForRow:(unsigned)arg1 columns:(NSRange)arg2 ;
-(id*)valuesForRows:(NSRange)arg1 column:(unsigned)arg2 ;
-(void)addingMultipleRows:(BOOL)arg1 ;
-(void)addingMultipleCols:(BOOL)arg1 ;
-(id)getNewColumnName;
-(id)getNewRowName;
-(void)moveRows:(NSRange)arg1 afterRow:(int)arg2 ;
-(void)moveColumns:(NSRange)arg1 afterColumn:(int)arg2 ;
-(void)insertRowsWithNames:(id)arg1 at:(unsigned)arg2 ;
-(void)insertColumnNames:(id)arg1 at:(unsigned)arg2 ;
-(void)takeDataFromDictionary:(id)arg1 ;
-(id)gridAdapterForRow:(unsigned)arg1 ;
-(id)gridAdapterForColumn:(unsigned)arg1 ;
-(id)gridAdapterForRowCount;
-(id)gridAdapterForColumnCount;
-(id)gridAdapterForRowConstant;
-(id)gridAdapterForColumnConstant;
-(void)setObjectToNotify:(id)arg1 ;
-(void)loadFromPreUFFArchive:(const ChartGridArchive*)arg1 ;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 forPasteboard:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)numberOfColumns;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(unsigned)numberOfRows;
-(BOOL)dirty;
-(void)setDirty:(BOOL)arg1 ;
@end

