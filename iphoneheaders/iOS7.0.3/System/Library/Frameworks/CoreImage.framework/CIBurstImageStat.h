/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString, NSMutableArray;

@interface CIBurstImageStat : NSObject {

	NSString* imageId;
	float normalizedFocusScore;
	float normalizedSigma;
	int orientation;
	NSMutableArray* faceStatArray;
	BOOL exclude;
	BOOL AEStable;
	int AEAverage;
	int AETarget;
	BOOL AFStable;
	int temporalOrder;
	float imageScore;
	float actionScore;
	float avgHorzDiffY;
	float blurExtent;
	float colorHistogram[1024];
	int numEntries;
	unsigned short aeMatrix[256];
	int dissimilarity;
	double timeReceived;
	double timestamp;
	void* projectionMemoryBlock;
	FastRegistration_Signatures* projectionSignature;
	SharpnessGridElement_t* sharpnessGrid;
	int gridWidth;
	int gridHeight;
	GridROI_t gridROI;
	GridROI_t smoothedROI;
	BOOL hasRegistrationData;
	float maxSkewness;
	float registrationErrorX;
	float registrationErrorY;
	float registrationErrorIntegral;
	float actionClusteringScore;
	float tx;
	float ty;
	CGRect facesRoiRect;
	int numHWFaces;
	bool doLimitedSharpnessAndBlur;
	bool emotionallyRejected;
	bool isGarbage;
	float roiSize;

}

@property (assign) NSString * imageId; 
@property (assign) int orientation; 
@property (assign) NSMutableArray * faceStatArray; 
@property (assign) BOOL exclude; 
@property (assign) BOOL AEStable; 
@property (assign) int AEAverage; 
@property (assign) int AETarget; 
@property (assign) BOOL AFStable; 
@property (assign) int temporalOrder; 
@property (assign) float avgHorzDiffY; 
@property (assign) float blurExtent; 
@property (assign) float imageScore; 
@property (assign) float actionScore; 
@property (assign) double timeReceived; 
@property (assign) double timestamp; 
@property (assign) float maxSkewness; 
@property (assign) float registrationErrorX; 
@property (assign) float registrationErrorY; 
@property (assign) float registrationErrorIntegral; 
@property (assign) float actionClusteringScore; 
@property (assign) BOOL hasRegistrationData; 
@property (assign) CGRect facesRoiRect; 
@property (assign) int numHWFaces; 
@property (assign) bool emotionallyRejected; 
@property (assign) bool doLimitedSharpnessAndBlur; 
@property (assign) float tx; 
@property (assign) float ty; 
@property (assign) bool isGarbage; 
@property (assign) float roiSize; 
-(id)faceStatArray;
-(void)setFacesRoiRect:(CGRect)arg1 ;
-(void)setNumHWFaces:(int)arg1 ;
-(double)timeReceived;
-(int)numHWFaces;
-(CGRect)facesRoiRect;
-(id)imageId;
-(int)temporalOrder;
-(GridROI_t)getSharpnessAndBlurLimits;
-(float)maxSkewness;
-(void)setMaxSkewness:(float)arg1 ;
-(void)setRegistrationErrorX:(float)arg1 ;
-(void)setRegistrationErrorY:(float)arg1 ;
-(void)setHasRegistrationData:(BOOL)arg1 ;
-(void)setRegistrationErrorIntegral:(float)arg1 ;
-(float)registrationErrorIntegral;
-(void)setActionClusteringScore:(float)arg1 ;
-(void)updateROI:(GridROI_t)arg1 ;
-(void)computeImageColorHistogram:(id)arg1 ;
-(void)computeImageSharpnessOnGrid:(id)arg1 ;
-(void)computeBlurStatsOnGrid:(id)arg1 ;
-(void)computeImageProjections:(id)arg1 ;
-(float)computeFacialFocusScoreSum;
-(void)allocateMeanStdPingPongBuffers:(float*)arg1 :(float*)arg2 :(float*)arg3 :(float*)arg4 ;
-(void)assignMeanStdBuffers:(float*)arg1 ;
-(float)computeSmoothedGridROI:(id)arg1 nextStat:(id)arg2 ;
-(void)flagAsGarbage;
-(void)performRegistration:(id)arg1 deltaCol:(float*)arg2 deltaRow:(float*)arg3 ;
-(int)canRegister;
-(void)writeGridROI:(id)arg1 ;
-(void)computeImageData:(id)arg1 faceIDCounts:(id)arg2 ;
-(void)collapseSharpnessGrid;
-(float)computeRuleOfThreeDistance;
-(float)computeSmilePercentage;
-(float)computeImageDistance:(id)arg1 ;
-(float)computeAEMatrixDifference:(id)arg1 ;
-(int)setAEMatrix:(id)arg1 ;
-(void)computeAEMatrix:(id)arg1 ;
-(unsigned short*)aeMatrix;
-(float)computeScore:(float)arg1 ;
-(int)compareImageStats:(id)arg1 ;
-(int)compareImageOrder:(id)arg1 ;
-(float*)colorHistogram;
-(void)setImageId:(id)arg1 ;
-(void)setFaceStatArray:(id)arg1 ;
-(BOOL)exclude;
-(void)setExclude:(BOOL)arg1 ;
-(BOOL)AEStable;
-(void)setAEStable:(BOOL)arg1 ;
-(int)AEAverage;
-(void)setAEAverage:(int)arg1 ;
-(int)AETarget;
-(void)setAETarget:(int)arg1 ;
-(BOOL)AFStable;
-(void)setAFStable:(BOOL)arg1 ;
-(void)setTemporalOrder:(int)arg1 ;
-(float)avgHorzDiffY;
-(void)setAvgHorzDiffY:(float)arg1 ;
-(float)blurExtent;
-(void)setBlurExtent:(float)arg1 ;
-(float)imageScore;
-(void)setImageScore:(float)arg1 ;
-(float)actionScore;
-(void)setActionScore:(float)arg1 ;
-(void)setTimeReceived:(double)arg1 ;
-(float)registrationErrorX;
-(float)registrationErrorY;
-(BOOL)hasRegistrationData;
-(float)actionClusteringScore;
-(bool)emotionallyRejected;
-(void)setEmotionallyRejected:(bool)arg1 ;
-(bool)doLimitedSharpnessAndBlur;
-(void)setDoLimitedSharpnessAndBlur:(bool)arg1 ;
-(float)tx;
-(void)setTx:(float)arg1 ;
-(float)ty;
-(void)setTy:(float)arg1 ;
-(bool)isGarbage;
-(void)setIsGarbage:(bool)arg1 ;
-(float)roiSize;
-(void)setRoiSize:(float)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(int)orientation;
-(void)setTimestamp:(double)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

