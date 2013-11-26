/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>
#import <iWorkImport/TSKChangeSourceObserver.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPColumnMetrics.h>

@class TSWPLayout, TSWPPadding;

@interface KNNoteLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics> {

	CGSize mSizeOfScrollViewEnclosingCanvas;
	TSWPLayout* mContainedLayout;
	TSWPPadding* mPadding;

}

@property (nonatomic,readonly) TSWPLayout * containedLayout; 
@property (nonatomic,readonly) TSWPPadding * padding; 
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) float textScaleFactor; 
-(void)invalidateSize;
-(id)layoutGeometryFromInfo;
-(id)computeLayoutGeometry;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)updateChildrenFromInfo;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)childSearchTargets;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsets;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(float)widthForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)gapForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)positionForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4 ;
-(id)layoutMargins;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(float)textScaleFactor;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(float)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(id)columnMetricsForCharIndex:(unsigned)arg1 outRange:(NSRange)arg2 ;
-(void)createContainedLayoutForEditing;
-(id)containedLayout;
-(void)p_setSizeOfScrollViewEnclosingCanvasFromLayoutController:(id)arg1 ;
-(id)p_adjustedPaddingForBodyWidth:(float)arg1 ;
-(void)sizeOfScrollViewEnclosingCanvasDidChange;
-(float)textScaleFactorForPrinting;
-(BOOL)supportsBoldItalicUnderlineShortcuts;
-(void)dealloc;
-(id)padding;
-(id).cxx_construct;
-(unsigned)columnCount;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(id)children;
@end

