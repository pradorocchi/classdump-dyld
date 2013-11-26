/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartFormulaWrapper : NSObject {

	TSCEFormula* mPtrToFormula;
	int mCachedNumberOfValues;
	TSCEVector* mCachedOuputValueVector;

}

@property (readonly) TSCEFormula* formula; 
+(id)chartFormulaForRangeReference:(SCD_Struct_TS274*)arg1 ;
+(id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2 ;
+(id)chartFormulaForString:(id)arg1 ;
+(id)chartFormulaWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
+(id)emptyChartFormula;
+(id)chartFormulaForCellReference:(SCD_Struct_TS285*)arg1 ;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(BOOL)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS274*)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(id)initWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
-(id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(unsigned)numberOfValuesWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(TSCEValue)valueAtIndex:(unsigned)arg1 withCalcEngine:(id)arg2 inTable:(CFUUIDRef)arg3 ;
-(id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(TSCEVector*)outputValueVectorWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(BOOL)formulaIsEqualTo:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(TSCEFormula*)formula;
@end

