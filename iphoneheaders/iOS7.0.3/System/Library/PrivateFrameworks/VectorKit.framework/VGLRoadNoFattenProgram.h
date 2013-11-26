/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLSimpleRoadProgram.h>

@interface VGLRoadNoFattenProgram : VGLSimpleRoadProgram {

	int _uColor;
	VGLColor _color;
	int _uCapWidth;
	float _capWidth;

}

@property (assign,nonatomic) VGLColor color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float capWidth;              //@synthesize capWidth=_capWidth - In the implementation block
+(id)vertName;
+(id)fragName;
-(VGLColor)color;
-(void)setColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(void)setup;
-(void)setCapWidth:(float)arg1 ;
-(float)capWidth;
@end

