/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>
#import <iWorkImport/TSDShapeControlRep.h>
#import <iWorkImport/TSDPathEditableRep.h>

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching, TSDShapeControlRep, TSDPathEditableRep> {

	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	BOOL mFrameInUnscaledCanvasIsValid;
	BOOL mDirectlyManagesLayerContent;
	CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
	BOOL mShadowOnChildrenDisabled;

}

@property (assign,nonatomic) BOOL shadowOnChildrenDisabled; 
+(float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3 ;
-(CGRect)frameInUnscaledCanvas;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(BOOL)shouldShowSelectionHighlight;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)canDrawInParallel;
-(id)overlayLayers;
-(void)dynamicallyResizingWithTracker:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(CGRect)layerFrameInScaledCanvasRelativeToParent;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 ;
-(unsigned long long)enabledKnobMask;
-(void)addSelectionKnobsToArray:(id)arg1 ;
-(BOOL)isEditingPath;
-(BOOL)shouldExpandHitRegionWhenSmall;
-(float)shortestDistanceToPoint:(CGPoint)arg1 countAsHit:(BOOL*)arg2 ;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg1 ;
-(CGRect)targetRectForEditMenu;
-(id)shapeInfo;
-(id)shapeLayout;
-(BOOL)p_canApplyStrokeToLayer;
-(BOOL)p_canApplyFillToLayer;
-(BOOL)p_beginApplyOpacity:(CGContextRef)arg1 forDrawingInOneStep:(BOOL)arg2 ;
-(void)p_endApplyOpacity:(CGContextRef)arg1 apply:(BOOL)arg2 ;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 ;
-(void)p_drawChildrenWithoutOpacityInContext:(CGContextRef)arg1 ;
-(BOOL)p_drawsSelfInOneStep;
-(void)p_drawLineEndForHead:(BOOL)arg1 withDelta:(CGPoint)arg2 andStroke:(id)arg3 inContext:(CGContextRef)arg4 useFastDrawing:(BOOL)arg5 ;
-(CGRect)aliasedAlignmentFrameInLayerFrame;
-(BOOL)i_editMenuOverlapsEndKnobs;
-(id)p_pathEditor;
-(BOOL)shouldHideSelectionHighlightDueToRectangularPath;
-(BOOL)shouldShowSmartShapeKnobs;
-(BOOL)shouldShowAdvancedGradientKnobs;
-(BOOL)isEditingChildRep;
-(BOOL)shouldShowAdditionalKnobs;
-(BOOL)selectionIsAppropriateToShowInvisiblePathHighlight;
-(BOOL)shouldShowInvisiblePathHighlight;
-(void)p_beginDynamicallyResizingOrMovingLineEnd;
-(void)p_endDynamicallyResizingOrMovingLineEnd;
-(id)editablePathSource;
-(BOOL)canMakePathEditable;
-(void)dynamicMovePathKnobDidBegin;
-(void)dynamicallyMovedPathKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(void)enqueuePathSourceChanges;
-(void)dynamicallyMovingLineSegmentWithTracker:(id)arg1 ;
-(id)dynamicMoveSmartShapeKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(BOOL)p_pathIsAxisAlignedRect;
-(BOOL)shouldShowShadow;
-(BOOL)shadowOnChildrenDisabled;
-(void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1 ;
-(CGAffineTransform)naturalToEditablePathSpaceTransform;
-(void)dynamicMovePathKnobDidEndWithTracker:(id)arg1 ;
-(BOOL)shouldAlwaysSmoothText;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(id)pathSourceForSelectionHighlightBehavior;
-(BOOL)canBeUsedForImageMask;
-(void)setShadowOnChildrenDisabled:(BOOL)arg1 ;
-(void)invalidateEffectLayersForChildren;
-(BOOL)isPathEditable;
-(id)dynamicMoveLineSegmentDidBegin;
-(void)dynamicMoveLineSegmentDidEndWithTracker:(id)arg1 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(BOOL)isInvisible;
-(CGRect)clipRect;
-(BOOL)isDraggable;
@end

