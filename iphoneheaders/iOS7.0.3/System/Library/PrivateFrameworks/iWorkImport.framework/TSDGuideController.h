/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDecorator.h>

@class TSDInteractiveCanvasController, NSMutableDictionary, NSMutableArray, NSSet, NSMutableSet;

@interface TSDGuideController : NSObject <TSDDecorator> {

	TSDInteractiveCanvasController* mICC;
	NSMutableDictionary* mVerticalSpacings;
	NSMutableDictionary* mHorizontalSpacings;
	NSMutableArray* mVerticalSizingGuides;
	NSMutableArray* mHorizontalSizingGuides;
	NSMutableArray* mGuidesForSnappingY;
	NSMutableArray* mGuidesForSnappingX;
	NSMutableArray* mSpacingGuidesForSnappingX;
	NSMutableArray* mSpacingGuidesForSnappingY;
	NSMutableArray* mSpacingCenterGuidesForSnappingX;
	NSMutableArray* mSpacingCenterGuidesForSnappingY;
	NSSet* mCurrentGuides;
	NSMutableSet* mCurrentSizingGuideUILayers;

}

@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController; 
+(id)defaultGuideColor;
+(BOOL)shouldAlignToSizingGuides;
+(BOOL)shouldAlignCenters;
+(BOOL)shouldAlignEdges;
+(BOOL)shouldAlignToSpacingGuides;
+(void)setShouldAlignEdges:(BOOL)arg1 ;
+(void)setShouldAlignToSpacingGuides:(BOOL)arg1 ;
+(void)setShouldAlignToSizingGuides:(BOOL)arg1 ;
+(void)setGuideColor:(id)arg1 ;
+(void)setShouldAlignCenters:(BOOL)arg1 ;
+(void)setShouldAlignEdgesToMasterGuides:(BOOL)arg1 ;
+(BOOL)shouldAlignEdgesToMasterGuides;
+(id)guideColor;
+(void)initialize;
-(id)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(id)decoratorOverlayLayers;
-(void)beginAlignmentOperationForRep:(id)arg1 ;
-(void)hideSizingGuides;
-(void)showSizingGuideUIForRep:(id)arg1 matchingWidth:(BOOL)arg2 matchingHeight:(BOOL)arg3 ;
-(void)endAlignmentOperation;
-(CGPoint)snapRectToGuides:(CGRect)arg1 forKnobTag:(unsigned)arg2 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 forKnobTag:(unsigned)arg2 ;
-(void)hideAlignmentGuides;
-(void)beginAlignmentOperationForReps:(id)arg1 ;
-(void)p_addGuidesForLayout:(id)arg1 ;
-(void)p_addGuide:(id)arg1 toSortedArray:(id)arg2 ;
-(void)p_addSpacingGuidesForFrame:(CGRect)arg1 spacing:(id)arg2 isVerticalSpacing:(BOOL)arg3 ;
-(CGPoint)snapRectToGuides:(CGRect)arg1 forKnobTag:(unsigned)arg2 snapSize:(BOOL)arg3 ;
-(float)p_maxSnap;
-(BOOL)p_guidesAreRelevantForEdge:(int)arg1 whileDraggingKnobTag:(unsigned)arg2 ;
-(id)p_guideClosestToEdge:(int)arg1 ofFrame:(CGRect)arg2 ;
-(id)p_closestGuideForOffset:(float)arg1 predicate:(id)arg2 inArray:(id)arg3 ;
-(BOOL)p_sizingGuidesAreRelevantForOrientation:(int)arg1 whileDraggingKnobTag:(unsigned)arg2 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 forKnobTag:(unsigned)arg2 shouldRenderX:(BOOL)arg3 shouldRenderY:(BOOL)arg4 shouldRenderSizeGuides:(BOOL)arg5 ;
-(id)p_guidesForEdge:(int)arg1 ofFrame:(CGRect)arg2 ;
-(float)p_spacingForCenterOrSpacingGuide:(id)arg1 ;
-(id)p_guidesForOffset:(float)arg1 predicate:(id)arg2 inArray:(id)arg3 ;
-(void)p_getOffset:(float*)arg1 andGuidesArray:(id*)arg2 forEdge:(int)arg3 ofFrame:(CGRect)arg4 ;
-(CGPoint)snapRectToGuides:(CGRect)arg1 ;
-(void)showGuidesAlignedWithRect:(CGRect)arg1 shouldRenderX:(BOOL)arg2 shouldRenderY:(BOOL)arg3 ;
-(void)showSizingGuidesAlignedWithLayout:(id)arg1 forKnobTag:(unsigned)arg2 ;
@end

