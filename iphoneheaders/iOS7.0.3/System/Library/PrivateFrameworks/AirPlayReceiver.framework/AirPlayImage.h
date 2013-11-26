/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayImage : NSObject {

	CGSize _unadjustedSize;
	CGImageRef _image;
	void* _ioSurface;
	int _imageOrientation;
	CGSize _scale;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (nonatomic,readonly) void* ioSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (assign,nonatomic) CGSize scale; 
-(void)dealloc;
-(CGSize)size;
-(CGSize)scale;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void*)ioSurface;
-(void)setScale:(CGSize)arg1 ;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(id)layerContents;
-(id)initWithData:(id)arg1 decode:(BOOL)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2 ;
-(CGSize)_unadjustedContentSize;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
@end

