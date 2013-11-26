/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VGLGroundCoverProgram.h>

@interface VGLAnimatableGroundCoverProgram : VGLGroundCoverProgram {

	int _uLandVariantSampler;
	int _landVariantSampler;
	int _uTextureVariation;
	float _textureVariation;

}

@property (assign,nonatomic) int landVariantSampler;              //@synthesize landVariantSampler=_landVariantSampler - In the implementation block
@property (assign,nonatomic) float textureVariation;              //@synthesize textureVariation=_textureVariation - In the implementation block
+(id)fragName;
-(void)setup;
-(void)setTextureVariation:(float)arg1 ;
-(float)textureVariation;
-(void)setLandVariantSampler:(int)arg1 ;
-(int)landVariantSampler;
@end

