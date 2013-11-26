/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledLayout.h>
#import <iWorkImport/TSDShapeControlLayout.h>

@class TSDBezierPath, TSDPathSource, TSDEditableBezierPathSource, TSDInfoGeometry, TSDMutableStroke, TSDFill;

@interface TSDShapeLayout : TSDStyledLayout <TSDShapeControlLayout> {

	struct {
		unsigned path : 1;
		unsigned pathBounds : 1;
		unsigned pathBoundsWithoutStroke : 1;
		unsigned pathIsOpen : 1;
		unsigned pathIsLineSegment : 1;
		unsigned alignmentFrame : 1;
		unsigned headAndTail : 1;
		unsigned headLineEnd : 1;
		unsigned tailLineEnd : 1;
		unsigned clippedPath : 1;
	}  mShapeInvalidFlags;
	TSDBezierPath* mCachedPath;
	CGRect mCachedPathBounds;
	CGRect mCachedPathBoundsWithoutStroke;
	BOOL mCachedPathIsOpen;
	BOOL mCachedPathIsLineSegment;
	CGRect mCachedAlignmentFrame;
	CGPoint mHeadPoint;
	CGPoint mTailPoint;
	CGPoint mHeadLineEndPoint;
	CGPoint mTailLineEndPoint;
	float mHeadLineEndAngle;
	float mTailLineEndAngle;
	int mHeadCutSegment;
	int mTailCutSegment;
	float mHeadCutT;
	float mTailCutT;
	TSDBezierPath* mCachedClippedPath;
	TSDPathSource* mShrunkenPathSource;
	TSDEditableBezierPathSource* mCachedEditableBezierPathSource;
	TSDPathSource* mCachedPathSource;
	TSDPathSource* mResizePathSource;
	TSDInfoGeometry* mResizeInfoGeometry;
	TSDInfoGeometry* mInitialInfoGeometry;
	TSDMutableStroke* mDynamicStroke;
	TSDFill* mDynamicFill;

}

@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,retain) TSDFill * dynamicFill; 
@property (nonatomic,readonly) TSDPathSource<TSDSmartPathSource> * smartPathSource; 
-(BOOL)supportsRotation;
-(CGPoint)tailPoint;
-(CGRect)boundsForStandardKnobs;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)endResize;
-(void)invalidateFrame;
-(id)layoutGeometryFromInfo;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)alignmentFrame;
-(CGRect)alignmentFrameInRoot;
-(void)takeRotationFromTracker:(id)arg1 ;
-(BOOL)shouldBeDisplayedInShowMode;
-(BOOL)isStrokeBeingManipulated;
-(void)dynamicStrokeWidthChangeDidBegin;
-(void)dynamicStrokeWidthUpdateToValue:(float)arg1 ;
-(void)dynamicStrokeWidthChangeDidEnd;
-(id)initialInfoGeometry;
-(CGPoint)centerForConnecting;
-(BOOL)supportsResize;
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(unsigned)numberOfControlKnobs;
-(id)pathSource;
-(id)shapeInfo;
-(CGRect)shapeFrameWithTransform:(CGAffineTransform)arg1 ;
-(CGRect)pathBounds;
-(void)aliasPathForScale:(float)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(CGPoint*)arg4 endDelta:(CGPoint*)arg5 ;
-(BOOL)pathIsOpen;
-(CGRect)pathBoundsWithoutStroke;
-(BOOL)pathIsLineSegment;
-(CGRect)aliasedAlignmentFrameForScale:(float)arg1 ;
-(CGPoint)headPoint;
-(void)aliasPathForScale:(float)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(CGPoint*)arg5 endDelta:(CGPoint*)arg6 ;
-(id)editablePathSource;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedPathKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(void)dynamicMovePathKnobDidEnd;
-(void)dynamicallyMovingLineSegmentWithTracker:(id)arg1 ;
-(void)dynamicMoveSmartShapeKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(id)layoutInfoGeometry;
-(id)strokeHeadLineEnd;
-(id)strokeTailLineEnd;
-(CGPoint)headLineEndPoint;
-(CGPoint)tailLineEndPoint;
-(float)headLineEndAngle;
-(float)tailLineEndAngle;
-(float)lineEndScale;
-(void)invalidatePathBounds;
-(CGAffineTransform)computeLayoutTransform;
-(void)p_invalidateHead;
-(void)p_invalidateTail;
-(id)p_cachedPath;
-(CGRect)p_cachedPathBounds;
-(CGRect)p_cachedPathBoundsWithoutStroke;
-(BOOL)p_cachedPathIsOpen;
-(BOOL)p_cachedPathIsLineSegment;
-(void)p_validateHeadAndTail;
-(void)p_validateHeadLineEnd;
-(void)p_validateTailLineEnd;
-(id)p_createClippedPath;
-(id)clippedPathForLineEnds;
-(CGRect)p_boundsOfLineEndForHead:(BOOL)arg1 transform:(CGAffineTransform)arg2 ;
-(BOOL)isInvisibleAutosizingShape;
-(void)p_invalidateClippedPath;
-(void)p_updateResizeInfoGeometryFromResizePathSource;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3 ;
-(void)p_computeAngle:(float*)arg1 point:(CGPoint*)arg2 cutSegment:(int*)arg3 cutT:(float*)arg4 forLineEndAtHead:(BOOL)arg5 ;
-(id)smartPathSource;
-(BOOL)isTailEndOnLeft;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(id)i_computeWrapPath;
-(id)dynamicFill;
-(void)setDynamicFill:(id)arg1 ;
-(id)textWrapperForExteriorWrap;
-(id)initWithInfo:(id)arg1 ;
-(void)invalidatePath;
-(void)dealloc;
-(id)path;
-(id)fill;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(CGSize)minimumSize;
-(BOOL)isInvisible;
-(BOOL)isBeingManipulated;
@end

