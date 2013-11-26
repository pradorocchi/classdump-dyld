/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@interface GQDTTableModel : NSObject <GQDNameMappable> {

	unsigned short mColumnCount;
	unsigned short mRowCount;
	CFStringRef mName;
	BOOL mNameVisible;
	CFArrayRef mColumnWidths;
	CFArrayRef mRowHeights;
	CFArrayRef mColumnVisibilities;
	CFArrayRef mRowVisibilities;
	unsigned short mHeaderRowCount;
	unsigned short mHeaderColumnCount;
	unsigned short mFooterRowCount;
	CFArrayRef mCells;
	CFArrayRef mColumnGroupDisplayTypes;
	int mNumGroupLevels;

}
+(const StateSpec*)stateForReading;
-(void)setCells:(CFArrayRef)arg1 ;
-(unsigned short)headerColumnCount;
-(unsigned short)footerRowCount;
-(int)readAttributesForModel:(xmlTextReaderRef)arg1 ;
-(int)readAttributesForGrid:(xmlTextReaderRef)arg1 ;
-(int)addColumnWidthFrom:(xmlTextReaderRef)arg1 ;
-(int)addRowHeightFrom:(xmlTextReaderRef)arg1 ;
-(int)addGroupLevelsFrom:(xmlTextReaderRef)arg1 ;
-(bool)visibilityForColumn:(unsigned short)arg1 ;
-(BOOL)isNameVisible;
-(float)widthForColumn:(unsigned short)arg1 ;
-(float)heightForRow:(unsigned short)arg1 ;
-(bool)visibilityForRow:(unsigned short)arg1 ;
-(int)typeOfVectorAlongGridline:(unsigned short)arg1 offset:(unsigned short)arg2 length:(unsigned short)arg3 vertical:(BOOL)arg4 ;
-(BOOL)hasGroupDisplayType:(unsigned short)arg1 level:(int)arg2 displayType:(int*)arg3 isTypeVisible:(BOOL*)arg4 ;
-(unsigned short)firstVisibleColumn;
-(int)numGroupLevels;
-(void)setNumGroupLevels:(int)arg1 ;
-(void)dealloc;
-(CFStringRef)name;
-(unsigned short)columnCount;
-(unsigned short)headerRowCount;
-(unsigned short)rowCount;
-(id)cellAt:(unsigned short)arg1 ;
-(CFArrayRef)cells;
@end

