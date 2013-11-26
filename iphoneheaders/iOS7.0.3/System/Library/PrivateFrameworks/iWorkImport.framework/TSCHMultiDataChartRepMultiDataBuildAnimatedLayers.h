/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject {

	CALayer* legendLayer;
	CALayer* backgroundLayer;
	CALayer* dataSetNameLayer;
	NSArray* elementLayers;

}

@property (nonatomic,retain) CALayer * legendLayer; 
@property (nonatomic,retain) CALayer * backgroundLayer; 
@property (nonatomic,retain) CALayer * dataSetNameLayer; 
@property (nonatomic,copy) NSArray * elementLayers; 
+(id)animatedLayers;
-(id)legendLayer;
-(id)backgroundLayer;
-(id)elementLayers;
-(id)dataSetNameLayer;
-(id)allBackgroundFadingLayers;
-(id)elementFadingLayers;
-(id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)arg1 ;
-(id)layersAlreadyHaveProperTransforms;
-(void)setLegendLayer:(id)arg1 ;
-(void)setBackgroundLayer:(id)arg1 ;
-(void)setDataSetNameLayer:(id)arg1 ;
-(void)setElementLayers:(id)arg1 ;
-(void)dealloc;
@end

