/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADDrawable.h>

@class OADTableGrid, NSMutableArray;

@interface OADTable : OADDrawable {

	OADTableGrid* mGrid;
	NSMutableArray* mRows;

}
-(void)dealloc;
-(id)init;
-(id)addRow;
-(unsigned)rowCount;
-(id)grid;
-(id)tableProperties;
-(id)rowAtIndex:(unsigned)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(id)cellAtPos:(OADTMatrixPos)arg1 ;
-(OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)arg1 ;
-(id)masterCellOfPos:(OADTMatrixPos)arg1 ;
@end

