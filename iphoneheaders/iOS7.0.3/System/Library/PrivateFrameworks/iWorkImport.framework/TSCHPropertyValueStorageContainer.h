/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSCHStyleActAlike;
#import <iWorkImport/iWorkImport-Structs.h>
@class , NSMutableArray, NSArray;

@interface TSCHPropertyValueStorageContainer : NSObject {

	<TSCHStyleActAlike>* mChartStyle;
	<TSCHStyleActAlike>* mChartNonStyle;
	<TSCHStyleActAlike>* mLegendStyle;
	<TSCHStyleActAlike>* mLegendNonStyle;
	NSMutableArray* mValueAxisStyles;
	NSMutableArray* mValueAxisNonStyles;
	NSMutableArray* mCategoryAxisStyles;
	NSMutableArray* mCategoryAxisNonStyles;
	NSMutableArray* mSeriesThemeStyles;
	NSMutableArray* mSeriesPrivateStyles;
	NSMutableArray* mSeriesNonStyles;
	NSMutableArray* mParagraphStyles;

}

@property (setter=p_setChartStyle:,nonatomic,retain) <TSCHStyleActAlike> * p_chartStyle; 
@property (setter=p_setChartNonStyle:,nonatomic,retain) <TSCHStyleActAlike> * p_chartNonStyle; 
@property (setter=p_setLegendStyle:,nonatomic,retain) <TSCHStyleActAlike> * p_legendStyle; 
@property (setter=p_setLegendNonStyle:,nonatomic,retain) <TSCHStyleActAlike> * p_legendNonStyle; 
@property (setter=p_setMutableValueAxisStyles:,nonatomic,retain) NSMutableArray * p_mutableValueAxisStyles; 
@property (setter=p_setMutableValueAxisNonStyles:,nonatomic,retain) NSMutableArray * p_mutableValueAxisNonStyles; 
@property (setter=p_setMutableCategoryAxisStyles:,nonatomic,retain) NSMutableArray * p_mutableCategoryAxisStyles; 
@property (setter=p_setMutableCategoryAxisNonStyles:,nonatomic,retain) NSMutableArray * p_mutableCategoryAxisNonStyles; 
@property (setter=p_setMutableSeriesThemeStyles:,nonatomic,retain) NSMutableArray * p_mutableSeriesThemeStyles; 
@property (setter=p_setMutableSeriesPrivateStyles:,nonatomic,retain) NSMutableArray * p_mutableSeriesPrivateStyles; 
@property (setter=p_setMutableSeriesNonStyles:,nonatomic,retain) NSMutableArray * p_mutableSeriesNonStyles; 
@property (setter=p_setMutableParagraphStyles:,nonatomic,retain) NSMutableArray * p_mutableParagraphStyles; 
@property (setter=p_setValueAxisStyles:,nonatomic,copy) NSArray * p_valueAxisStyles; 
@property (setter=p_setValueAxisNonStyles:,nonatomic,copy) NSArray * p_valueAxisNonStyles; 
@property (setter=p_setCategoryAxisStyles:,nonatomic,copy) NSArray * p_categoryAxisStyles; 
@property (setter=p_setCategoryAxisNonStyles:,nonatomic,copy) NSArray * p_categoryAxisNonStyles; 
@property (setter=p_setSeriesThemeStyles:,nonatomic,copy) NSArray * p_seriesThemeStyles; 
@property (setter=p_setSeriesPrivateStyles:,nonatomic,copy) NSArray * p_seriesPrivateStyles; 
@property (setter=p_setSeriesNonStyles:,nonatomic,copy) NSArray * p_seriesNonStyles; 
@property (setter=p_setParagraphStyles:,nonatomic,copy) NSArray * p_paragraphStyles; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)saveToArchive:(PropertyValueStorageContainerArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const PropertyValueStorageContainerArchive*)arg1 unarchiver:(id)arg2 ;
-(id)p_chartStyle;
-(void)p_setChartStyle:(id)arg1 ;
-(id)p_legendStyle;
-(void)p_setLegendStyle:(id)arg1 ;
-(id)p_mutableValueAxisStyles;
-(void)p_setMutableValueAxisStyles:(id)arg1 ;
-(id)p_mutableCategoryAxisStyles;
-(void)p_setMutableCategoryAxisStyles:(id)arg1 ;
-(id)p_mutableSeriesThemeStyles;
-(void)p_setMutableSeriesThemeStyles:(id)arg1 ;
-(id)p_mutableSeriesPrivateStyles;
-(void)p_setMutableSeriesPrivateStyles:(id)arg1 ;
-(id)p_mutableParagraphStyles;
-(void)p_setMutableParagraphStyles:(id)arg1 ;
-(id)p_mutableValueAxisNonStyles;
-(void)p_setMutableValueAxisNonStyles:(id)arg1 ;
-(id)p_mutableCategoryAxisNonStyles;
-(void)p_setMutableCategoryAxisNonStyles:(id)arg1 ;
-(id)p_mutableSeriesNonStyles;
-(void)p_setMutableSeriesNonStyles:(id)arg1 ;
-(id)p_valueAxisStyles;
-(id)p_valueAxisNonStyles;
-(id)p_categoryAxisStyles;
-(id)p_categoryAxisNonStyles;
-(id)p_seriesThemeStyles;
-(id)p_seriesPrivateStyles;
-(id)p_seriesNonStyles;
-(id)p_paragraphStyles;
-(void)p_setChartNonStyle:(id)arg1 ;
-(void)p_setLegendNonStyle:(id)arg1 ;
-(id)p_chartNonStyle;
-(id)p_legendNonStyle;
-(void)p_setValueAxisStyles:(id)arg1 ;
-(void)p_setValueAxisNonStyles:(id)arg1 ;
-(void)p_setCategoryAxisStyles:(id)arg1 ;
-(void)p_setCategoryAxisNonStyles:(id)arg1 ;
-(void)p_setSeriesThemeStyles:(id)arg1 ;
-(void)p_setSeriesPrivateStyles:(id)arg1 ;
-(void)p_setSeriesNonStyles:(id)arg1 ;
-(void)p_setParagraphStyles:(id)arg1 ;
-(void)dealloc;
@end

