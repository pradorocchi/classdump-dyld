/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLProgram.h>

@interface VGLCircleStrokeProgram : VGLProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uColor;
	VGLColor _color;
	int _uLocalEyePos;
	int _uLocalEyeDir;
	int _uTanHalfHorizFOV;
	int _uHalfScreenDims;
	float _tanHalfHorizFOV;
	Vec2Imp<float> _halfScreenDims;
	SCD_Struct_VG165 _localEyePos;
	SCD_Struct_VG165 _localEyeDir;

}

@property (assign,nonatomic) int textureSampler;                         //@synthesize textureSampler=_textureSampler - In the implementation block
@property (assign,nonatomic) VGLColor color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG165 localEyePos;               //@synthesize localEyePos=_localEyePos - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG165 localEyeDir;               //@synthesize localEyeDir=_localEyeDir - In the implementation block
@property (assign,nonatomic) float tanHalfHorizFOV;                      //@synthesize tanHalfHorizFOV=_tanHalfHorizFOV - In the implementation block
@property (assign,nonatomic) Vec2Imp<float> halfScreenDims;              //@synthesize halfScreenDims=_halfScreenDims - In the implementation block
+(id)vertName;
+(id)fragName;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setup;
-(float)tanHalfHorizFOV;
-(void)setTextureSampler:(int)arg1 ;
-(int)textureSampler;
-(void)setLocalEyePos:(SCD_Struct_VG165)arg1 ;
-(void)setLocalEyeDir:(SCD_Struct_VG165)arg1 ;
-(void)setTanHalfHorizFOV:(float)arg1 ;
-(void)setHalfScreenDims:(Vec2Imp<float>)arg1 ;
-(SCD_Struct_VG165)localEyePos;
-(SCD_Struct_VG165)localEyeDir;
-(Vec2Imp<float>)halfScreenDims;
@end

