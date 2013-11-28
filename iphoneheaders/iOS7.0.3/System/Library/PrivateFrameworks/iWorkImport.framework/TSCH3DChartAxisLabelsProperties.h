/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCH3DLabelResources, TSCHSelectionPath, TSULRUCache;

@interface TSCH3DChartAxisLabelsProperties : NSObject {

	TSCHChartInfo* mInfo;
	TSCH3DLabelResources* mLabels;
	unsigned mStyleIndex;
	TSCHSelectionPath* mSelectionPath;
	BOOL mHidden;
	TSULRUCache* mCategoryStridingCache;
	float mCachedTextFactor;

}

@property (nonatomic,readonly) TSCH3DLabelResources * labels; 
@property (nonatomic,readonly) TSCHChartInfo * info; 
@property (nonatomic,readonly) unsigned styleIndex; 
@property (nonatomic,retain) TSCHSelectionPath * selectionPath; 
@property (assign,nonatomic) BOOL hidden; 
@property (nonatomic,readonly) TSULRUCache * categoryStridingCache; 
@property (assign,nonatomic) float cachedTextFactor; 
+(id)propertiesWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned)arg3 ;
-(id)selectionPath;
-(id)initWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned)arg3 ;
-(void)setSelectionPath:(id)arg1 ;
-(id)categoryStridingCache;
-(float)cachedTextFactor;
-(void)setCachedTextFactor:(float)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)info;
-(unsigned)styleIndex;
-(BOOL)hidden;
-(id)labels;
@end
