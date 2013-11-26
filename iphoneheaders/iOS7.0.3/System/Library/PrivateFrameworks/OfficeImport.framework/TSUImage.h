/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class UIImage;

@interface TSUImage : NSObject {

	CGImageRef mCGImage;
	long mCGImageLock;
	float mScale;
	int mOrientation;

}

@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (nonatomic,readonly) float scale; 
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(float)scale;
-(BOOL)isEmpty;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 isFlipped:(BOOL)arg3 ;
-(id)initWithImageSourceRef:(CGImageSourceRef)arg1 ;
-(CGImageRef)p_imageForContentsScale:(float)arg1 ;
-(CGImageRef)CGImageForContentsScale:(float)arg1 ;
-(id)PNGRepresentation;
-(id)JPEGRepresentationWithCompressionQuality:(float)arg1 ;
-(id)TIFFRepresentation;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 stretchingCenterWidthBy:(float)arg3 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 leftCapWidth:(int)arg3 topCapHeight:(int)arg4 ;
-(id)initWithUIImage:(id)arg1 ;
-(id)UIImage;
-(void)p_loadImageForScreenScaleIfNecessary:(float)arg1 ;
@end

