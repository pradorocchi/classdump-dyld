/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject {

	hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mCellIDToMergeRegionTopLeft;
	hash_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >* mMergeRegionTopLeftToMergeRegionSize;
	SCD_Struct_TS496 mUnionedMergeRange;

}
+(id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS497)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)iterator;
-(id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2 ;
-(SCD_Struct_TS497)unionedMergeRange;
-(SCD_Struct_TS497)mergedRangeForCellID:(SCD_Struct_TS266)arg1 ;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS497)arg1 ;
-(id)mergedGridIndicesForDimension:(int)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS497)arg2 ;
-(BOOL)find:(SCD_Struct_TS497)arg1 ;
-(BOOL)partiallyIntersectsCellRegion:(id)arg1 ;
-(unsigned)count;
-(id)description;
-(id)initWithContext:(id)arg1 ;
-(id).cxx_construct;
-(BOOL)insert:(SCD_Struct_TS497)arg1 ;
-(void).cxx_destruct;
-(BOOL)remove:(SCD_Struct_TS497)arg1 ;
@end

