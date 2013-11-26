/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TSCH3DChartShadowsBlurParameters : NSObject {

	float mQuality;
	int mNumPasses;
	int mShadowSize;
	float mKernelScale;

}

@property (assign,nonatomic) float quality; 
@property (assign,nonatomic) int numPasses; 
@property (assign,nonatomic) int shadowSize; 
@property (assign,nonatomic) float kernelScale; 
+(id)paramsWithQuality:(float)arg1 numPasses:(int)arg2 shadowSize:(int)arg3 kernelScale:(float)arg4 ;
-(int)numPasses;
-(void)setNumPasses:(int)arg1 ;
-(float)kernelScale;
-(void)setKernelScale:(float)arg1 ;
-(int)shadowSize;
-(id)initWithQuality:(float)arg1 numPasses:(int)arg2 shadowSize:(int)arg3 kernelScale:(float)arg4 ;
-(void)setShadowSize:(int)arg1 ;
-(float)quality;
-(void)setQuality:(float)arg1 ;
@end

