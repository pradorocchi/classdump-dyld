/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
@interface PBContext : NSObject

@property (assign,nonatomic,@dynamic) CAImageQueueRef outputImageQueue; 
@property (nonatomic,@dynamic,retain) CVPixelBufferPoolRef smallPool; 
@property (nonatomic,@dynamic,retain) CVPixelBufferPoolRef largePool; 
+(id)openGLContext;
+(id)openGLContext:(id)arg1 ;
+(id)openCLContext;
-(id)init;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(BOOL)arg3 resultHandler:(/*^block*/ id)arg4 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(BOOL)arg3 surfaceResultHandler:(/*^block*/ id)arg4 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(BOOL)arg3 ;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)arg1 ;
-(CVPixelBufferPoolRef)largePool;
-(void)setLargePool:(CVPixelBufferPoolRef)arg1 ;
-(CVPixelBufferPoolRef)smallPool;
-(void)setSmallPool:(CVPixelBufferPoolRef)arg1 ;
-(void)preloadFilter:(id)arg1 ;
@end

