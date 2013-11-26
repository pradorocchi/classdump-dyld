/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLCullableMesh.h>

@class VGLTexture;

@interface VGLSingleTexturedCullableMesh : VGLCullableMesh {

	VGLTexture* _texture;

}

@property (nonatomic,retain) VGLTexture * texture;              //@synthesize texture=_texture - In the implementation block
-(void)dealloc;
-(id)init;
-(id)texture;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(void)setTexture:(id)arg1 ;
-(void)drawInRects:(const VGLColor*)arg1 numRects:(unsigned)arg2 context:(id)arg3 ;
-(void)_drawTrianglesWithContext:(id)arg1 ;
-(void)_drawInRects:(const VGLColor*)arg1 numRects:(unsigned)arg2 context:(id)arg3 ;
@end

