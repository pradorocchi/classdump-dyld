/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLFogProgram.h>

@interface VGLBuildingProgram : VGLFogProgram {

	int _uColor;
	VGLColor _color;
	int _uScale;
	float _scale;
	int _uOneMinusScale;
	VGLColor _oneMinusScale;
	int _uBrightness;
	float _brightness;
	int _uTextureSampler;
	int _textureSampler;
	SCD_Struct_VG165 _cameraPositionInTileSpace;
	int _uCameraPositionInTileSpace;

}

@property (assign,nonatomic) VGLColor color;                                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float brightness;                                        //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) int textureSampler;                                      //@synthesize textureSampler=_textureSampler - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG165 cameraPositionInTileSpace;              //@synthesize cameraPositionInTileSpace=_cameraPositionInTileSpace - In the implementation block
+(id)vertName;
+(id)fragName;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(int)textureSampler;
-(void)setCameraPositionInTileSpace:(SCD_Struct_VG165)arg1 ;
-(SCD_Struct_VG165)cameraPositionInTileSpace;
@end

