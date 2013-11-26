/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TSTTableInfo, TSCECalculationEngine, TSCECellCoordinateVector;

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {

	TSTTableInfo* mTableInfo;
	TSCECalculationEngine* mCalculationEngine;
	CFUUIDRef mOwnerID;
	TSCECellCoordinateVector* mCellsToInvalidate;
	TSCECellCoordinateVector* mCellsToRewrite;

}
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS286)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(SCD_Struct_TS321)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS286)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ownerID:(CFUUIDRef)arg2 ;
-(void)setOwnerID:(CFUUIDRef)arg1 ;
-(void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 ;
-(void)setTableInfo:(id)arg1 ;
-(id)tableInfo;
-(int)registerWithCalculationEngineChoosingUniqueID:(id)arg1 ;
-(void)removeFormulaAtCellID:(SCD_Struct_TS266)arg1 ;
-(void)addFormulaForConditionalStyle:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 ;
-(BOOL)checkConditionForCellID:(SCD_Struct_TS266)arg1 withConditionalStyle:(id)arg2 withIndex:(unsigned*)arg3 ;
-(void)changedConditionForCellID:(SCD_Struct_TS266)arg1 ;
-(CFUUIDRef)ownerID;
-(void)dealloc;
@end

