/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VGLBuildingProgram.h>

@interface VGLDepthDependentBuildingProgram : VGLBuildingProgram {

	float _minDepth;
	int _uMinDepth;
	float _maxDepth;
	int _uMaxDepth;

}

@property (assign,nonatomic) float minDepth;              //@synthesize minDepth=_minDepth - In the implementation block
@property (assign,nonatomic) float maxDepth;              //@synthesize maxDepth=_maxDepth - In the implementation block
+(id)vertName;
+(id)fragName;
-(void)setup;
-(float)minDepth;
-(float)maxDepth;
-(void)setMinDepth:(float)arg1 ;
-(void)setMaxDepth:(float)arg1 ;
@end

