/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VGLProgram.h>

@interface VGLShieldProgram : VGLProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uFadeTime;
	float _fadeTime;

}

@property (assign,nonatomic) int textureSampler; 
@property (assign,nonatomic) float fadeTime; 
+(id)vertName;
+(id)fragName;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(int)textureSampler;
-(void)setFadeTime:(float)arg1 ;
-(float)fadeTime;
@end

