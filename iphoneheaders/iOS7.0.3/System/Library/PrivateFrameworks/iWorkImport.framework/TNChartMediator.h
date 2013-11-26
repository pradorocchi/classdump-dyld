/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartMediator.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TNChartFormulaStorage, NSMutableArray, TSCEFormulaRewriteSpec, TNMutableChartFormulaStorage, NSCondition, TSUIntToIntDictionary, TSCECalculationEngine;

@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning> {

	CFUUIDRef mEntityId;
	TNChartFormulaStorage* mFormulaStorage;
	NSMutableArray* mFormulasToRewrite;
	NSMutableArray* mFormulasToRecalculate;
	TSCEFormulaRewriteSpec* mInFlightRewriteSpec;
	int mScatterFormat;
	BOOL mIsRegisteredWithCalcEngine;
	BOOL mIsEditing;
	BOOL mEditingHasIsPhantomOverride;
	BOOL mEditingIsPhantomOverride;
	TNChartFormulaStorage* mEditingStorageOverride;
	TNMutableChartFormulaStorage* mEditingAccumulatedFormulas;
	TNMutableChartFormulaStorage* mEditingActiveFormulas;
	NSCondition* mImportUpgradeCondition;
	BOOL mHasBlittedSinceConditionVarSet;
	BOOL mShouldFixAreaFormula;
	TSUIntToIntDictionary* mFormulaIndexToGridIndex;

}

@property (nonatomic,readonly) CFUUIDRef entityID; 
@property (nonatomic,readonly) int scatterFormat; 
@property (nonatomic,readonly) TSCECalculationEngine * calculationEngine; 
@property (nonatomic,readonly) int direction; 
@property (nonatomic,readonly) BOOL labelFormulasAreAllStatic; 
@property (assign,nonatomic) BOOL isEditing; 
@property (nonatomic,readonly) BOOL hasBlittedSinceConditionVarSet; 
+(id)propertiesThatInvalidateMediator;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)saveToArchive:(ChartMediatorArchive*)arg1 archiver:(id)arg2 ;
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS286)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(BOOL)registerLast;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS321)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS286)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(id)calculationEngine;
-(id)initWithChartInfo:(id)arg1 ;
-(id)numberFormatForAxis:(id)arg1 ;
-(id)numberFormatForSeries:(id)arg1 index:(unsigned)arg2 axisType:(int)arg3 ;
-(int)scatterFormat;
-(BOOL)isPhantom;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned)arg2 ;
-(void)invalidateAndSynchronizeMediator;
-(id)seriesNameFormulaForSeriesIndex:(unsigned)arg1 ;
-(id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2 ;
-(id)categoryLabelFormulas;
-(id)commandToChangeCategoryLabelFormulas:(id)arg1 ;
-(id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned)arg2 dataType:(int)arg3 ;
-(id)errorBarCustomFormulaForSeriesIndex:(unsigned)arg1 dataType:(int)arg2 ;
-(id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2 ;
-(id)seriesDataFormulaForSeriesDimension:(id)arg1 ;
-(id)initFromArchive:(const ChartMediatorArchive*)arg1 unarchiver:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4 ;
-(id)formulaStorage;
-(BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg1 ;
-(id)p_untitledLabelWithIndex:(unsigned)arg1 ;
-(void)p_copyValuesIntoChartModelFromPair:(id)arg1 ;
-(void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2 ;
-(void)synchronizeModelFromFormulaStorage;
-(id)p_defaultDecimalFormat;
-(BOOL)p_isScatterOrBubble;
-(unsigned)formulaIndexForSeriesDimension:(id)arg1 ;
-(id)labelFormulasForType:(int)arg1 ;
-(void)p_hackSetCalcEngineLegacyGlobalID;
-(id)commandToChangeLabelFormulas:(id)arg1 forType:(int)arg2 ;
-(int)p_formulaTypeFromDataType:(int)arg1 ;
-(id)p_tstFormulaFromForumulaWrapper:(id)arg1 ;
-(id)p_formulaWrapperFromTSTFormula:(id)arg1 ;
-(void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1 ;
-(void)p_registerFormulaeWithCalcEngine:(id)arg1 ;
-(void)setFormulaStorage:(id)arg1 doRegistration:(BOOL)arg2 ;
-(void)synchronizeModelFromFormulaStorage:(id)arg1 ;
-(id)referencedEntities;
-(void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2 ;
-(void)p_registerHubFormulaWithCalcEngine:(id)arg1 ;
-(BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1 ;
-(void)p_detectAndRepairDeletedFormulas:(id)arg1 forRewriteSpec:(id)arg2 ;
-(void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3 ;
-(void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3 ;
-(void)repairMissingSeriesLabelsInMap:(id)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ;
-(void)p_reregister:(BOOL)arg1 withCalculationEngine:(id)arg2 ;
-(id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned*)arg2 ;
-(BOOL)p_labelsAreStaticInMap:(id)arg1 ofType:(int)arg2 ;
-(BOOL)p_tableHasRange:(SCD_Struct_TS274*)arg1 withCalcEngine:(id)arg2 ;
-(void)p_disconnectLabelsInMap:(id)arg1 ofType:(int)arg2 ;
-(void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1 ;
-(void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1 ;
-(void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1 ;
-(void)p_repairMissingCategoryLabelsInMap:(id)arg1 ;
-(void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(BOOL)arg2 ;
-(id)referencedEntitiesInMap:(id)arg1 ;
-(void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2 ;
-(void)setFormulaStorage:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3 ;
-(BOOL)labelFormulasAreAllStatic;
-(void)setEditingIsPhantomOverride:(BOOL)arg1 ;
-(void)clearEditingIsPhantomOverride;
-(void)setEditingStorageOverride:(id)arg1 ;
-(id)seriesDimensionForFormulaIndex:(unsigned)arg1 ;
-(void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2 ;
-(void)setImportUpgradeCondition:(id)arg1 ;
-(id)expandSingleRangeForProposedCategoryLabels:(SCD_Struct_TS274*)arg1 ;
-(BOOL)p_tableHasCell:(SCD_Struct_TS285*)arg1 withCalcEngine:(id)arg2 ;
-(void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1 ;
-(id)dataFormulas;
-(int)formulasDirection;
-(id)rowFormulas;
-(id)columnFormulas;
-(id)customPosFormulas;
-(id)customNegFormulas;
-(id)customPosScatterXFormulas;
-(id)customNegScatterXFormulas;
-(void)localizeFormulaLiteralsWithBundle:(id)arg1 ;
-(BOOL)hasBlittedSinceConditionVarSet;
-(CFUUIDRef)entityID;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)direction;
-(BOOL)isEditing;
@end

