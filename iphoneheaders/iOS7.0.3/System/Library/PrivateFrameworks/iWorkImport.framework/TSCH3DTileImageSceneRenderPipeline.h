/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DTileSceneRenderPipeline.h>

@class TSCH3DSceneRenderPipeline, NSArray;

@interface TSCH3DTileImageSceneRenderPipeline : TSCH3DTileSceneRenderPipeline {

	unsigned mTileSize;
	TSCH3DSceneRenderPipeline* mTargetPipeline;
	BOOL mSingleOutputImage;
	NSArray* mImages;
	unsigned mTileSamples;
	unsigned mTileOverlap;
	BOOL mFlipImages;

}

@property (assign,nonatomic) BOOL singleOutputImage; 
@property (assign,nonatomic) BOOL flipImages; 
@property (assign,nonatomic) unsigned tileSize; 
@property (assign,nonatomic) unsigned tileSamples; 
@property (assign,nonatomic) unsigned tileOverlap; 
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * targetPipeline; 
@property (nonatomic,readonly) NSArray * images; 
-(unsigned)tileSamples;
-(void)setTileSamples:(unsigned)arg1 ;
-(id)cloneTargetPipeline:(id)arg1 ;
-(BOOL)flipImages;
-(BOOL)processTile:(id)arg1 generator:(id)arg2 ;
-(BOOL)singleOutputImage;
-(void)setSingleOutputImage:(BOOL)arg1 ;
-(void)setFlipImages:(BOOL)arg1 ;
-(unsigned)tileOverlap;
-(void)setTileOverlap:(unsigned)arg1 ;
-(id)targetPipeline;
-(void)setTargetPipeline:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)images;
-(void)setTileSize:(unsigned)arg1 ;
-(BOOL)run;
-(unsigned)tileSize;
@end

