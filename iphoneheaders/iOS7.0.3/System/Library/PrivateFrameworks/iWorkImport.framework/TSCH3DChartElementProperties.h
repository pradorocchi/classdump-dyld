/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCH3DTexturePool;

@interface TSCH3DChartElementProperties : NSObject <NSCopying> {

	TSCH3DTexturePool* mPool;

}

@property (nonatomic,readonly) TSCH3DTexturePool * pool; 
+(id)properties;
-(void)applyChartElementsTransform:(ObjectTransforms*)arg1 ;
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(float)elementTransformDepthFromPropertyAccessor:(const ChartScenePropertyAccessor*)arg1 ;
-(id)renderingLightingModelForSeries:(id)arg1 ;
-(id)pool;
-(void)applyChartElementsTransformToProcessor:(id)arg1 ;
-(BOOL)applyElementTransformToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(BOOL)applyCombinedTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(void)addTexcoordsToProcessor:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 ;
-(id)getPropertiesOfType:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

