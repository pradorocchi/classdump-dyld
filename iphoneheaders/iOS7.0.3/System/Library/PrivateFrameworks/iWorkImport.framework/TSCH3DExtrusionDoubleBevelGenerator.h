/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {

	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mInputSpinePoints;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mSpinePoints;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mScaleValues;
	float mBevelHeight;
	int mBevelSlices;
	BOOL mEnableBevelEdges;

}

@property (assign,nonatomic) float bevelHeight; 
@property (assign,nonatomic) int bevelSlices; 
@property (assign,nonatomic) BOOL enableBevelEdges; 
@property (nonatomic,readonly) int bottomNonBevelStartIndex; 
@property (nonatomic,readonly) int bottomBevelStartIndex; 
+(id)namedBevelInterpolationShaderFunction;
+(id)generator;
-(int)bottomNonBevelStartIndex;
-(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)inputSpinePoints;
-(void)setBevelHeight:(float)arg1 ;
-(void)setBevelSlices:(int)arg1 ;
-(void)setEnableBevelEdges:(BOOL)arg1 ;
-(void)generate;
-(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)spinePoints;
-(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)scaleValues;
-(void)createSpinePointArray;
-(void)generateTop;
-(void)generateBottom;
-(void)adjustBottomOffset;
-(void)resetAllScales;
-(void)adjustTopScales;
-(void)adjustBottomScales;
-(int)bottomSlices;
-(int)topSlices;
-(int)topBevelStartIndex;
-(float)spineUValueAtIndex:(int)arg1 ;
-(int)bottomBevelStartIndex;
-(tvec3<float>)bottomDirection;
-(float)scaleUValueAtIndex:(int)arg1 ;
-(float)bevelHeight;
-(int)bevelSlices;
-(BOOL)enableBevelEdges;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

