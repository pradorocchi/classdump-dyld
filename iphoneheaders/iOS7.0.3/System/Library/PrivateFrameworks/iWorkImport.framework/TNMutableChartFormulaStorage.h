/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TNChartFormulaStorage.h>

@interface TNMutableChartFormulaStorage : TNChartFormulaStorage
-(void)addFormula:(id)arg1 withFormulaID:(SCD_Struct_TS286)arg2 ;
-(id)initWithChartFormulaStorage:(id)arg1 ;
-(void)setFormulaList:(id)arg1 forKey:(int)arg2 ;
-(id)mutableFormulaListForType:(int)arg1 ;
-(unsigned)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(CFUUIDRef)arg2 ;
-(void)clearFormulaListForKey:(int)arg1 ;
-(void)setDirection:(int)arg1 ;
@end

