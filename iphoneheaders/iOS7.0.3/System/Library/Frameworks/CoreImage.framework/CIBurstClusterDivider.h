/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CIBurstClusterDivider : NSObject {

	float dividerScore;
	int trueLocalMaximum;
	int leftImage;
	float actionAmount;
	float noiseThreshold;
	float highNoiseThreshold;

}

@property (assign) float dividerScore; 
@property (assign) int trueLocalMaximum; 
@property (assign) int leftImage; 
@property (assign) float actionAmount; 
@property (assign) float noiseThreshold; 
@property (assign) float highNoiseThreshold; 
-(float)dividerScore;
-(int)leftImage;
-(float)actionAmount;
-(int)compareDividers:(id)arg1 ;
-(int)compareIndices:(id)arg1 ;
-(int)compareActionAmounts:(id)arg1 ;
-(void)setDividerScore:(float)arg1 ;
-(void)setLeftImage:(int)arg1 ;
-(int)trueLocalMaximum;
-(void)setTrueLocalMaximum:(int)arg1 ;
-(void)setActionAmount:(float)arg1 ;
-(float)noiseThreshold;
-(void)setNoiseThreshold:(float)arg1 ;
-(float)highNoiseThreshold;
-(void)setHighNoiseThreshold:(float)arg1 ;
@end

