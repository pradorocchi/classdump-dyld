/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	BOOL isTextRegion;
	BOOL isImageRegion;
	BOOL isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isRotated;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)accept:(id)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(BOOL)isTextRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(BOOL)isTableCellRegion;
-(BOOL)isBodyZone;
-(BOOL)isCompoundShape;
-(void)setIsCompoundShape:(BOOL)arg1 ;
-(BOOL)isZone;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
-(void)setOrder:(int)arg1 ;
-(int)order;
@end

