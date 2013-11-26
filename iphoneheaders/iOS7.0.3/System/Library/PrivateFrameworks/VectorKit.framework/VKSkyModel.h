/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKMapLayer.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKMapModel, VGLRenderState, VKStylesheet;

@interface VKSkyModel : VKModelObject <VKMapLayer, VKStylesheetObserver> {

	VKMapModel* _mapModel;
	float _skyStartOffset;
	VGLRenderState* _renderState;
	VGLColor _fillColor;
	VGLColor _horizonColor;

}

@property (nonatomic,readonly) VGLColor fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) VGLColor horizonColor;                  //@synthesize horizonColor=_horizonColor - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                    //@synthesize mapModel=_mapModel - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
+(BOOL)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(VGLColor)fillColor;
-(id).cxx_construct;
-(unsigned)mapLayerPosition;
-(id)stylesheet;
-(void)setMapModel:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)stylesheetDidChange;
-(id)mapModel;
-(VGLColor)horizonColor;
@end

