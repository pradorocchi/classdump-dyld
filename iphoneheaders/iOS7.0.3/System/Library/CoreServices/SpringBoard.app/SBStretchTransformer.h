/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIView, CAMutableMeshTransform;

@interface SBStretchTransformer : NSObject {

	UIView* m_view;
	int m_anchorEdge;
	int m_orientation;
	CAMutableMeshTransform* m_mesh;
	float m_stretchFactor;
	/*^block*/ id m_animationCompletionHandler;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int anchorEdge; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) float stretchFactor; 
-(void)setAnchorEdge:(int)arg1 ;
-(void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2 ;
-(id)initWithView:(id)arg1 anchorEdge:(int)arg2 orientation:(int)arg3 ;
-(void)setStretchFactor:(float)arg1 ;
-(void)animateToZeroStretchFactor;
-(int)anchorEdge;
-(float)stretchFactor;
-(void)animateToZeroStretchFactorWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)meshTransform;
-(void)dealloc;
-(id)view;
-(int)orientation;
-(void)setView:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setOrientation:(int)arg1 ;
@end

