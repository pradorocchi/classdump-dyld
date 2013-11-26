/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>
#import <iWorkImport/TSDContainerRep.h>
#import <iWorkImport/TSWPShapeLayoutDelegate.h>

@class CALayer, TSWPRep, TSWPStorage;

@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSDContainerRep, TSWPShapeLayoutDelegate> {

	BOOL _editingContainedRep;
	CALayer* _overflowGlyphLayer;
	CGPoint _originalAutosizePositionOffset;
	TSWPRep* _containedRep;

}

@property (nonatomic,readonly) TSWPStorage * textStorageForTexture; 
@property (nonatomic,readonly) BOOL isShapeInvisible; 
@property (nonatomic,readonly) TSWPRep * containedRep;                                  //@synthesize containedRep=_containedRep - In the implementation block
@property (nonatomic,readonly) NSObject<TSDContainerInfo> * containerInfo; 
+(float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
+(id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 textDeliveryType:(int)arg4 ;
+(id)magicMoveAnimationMatchesFromMatches:(id)arg1 ;
+(id)textPropertiesNeedingCharacterAnimation;
+(id)textPropertiesAffectingVisualStyle;
+(id)textPropertiesAffectingTextMorph;
+(id)textPropertiesNotAffectingVisualStyle;
+(BOOL)p_stylesAreEqualWithOutgoingStorage:(id)arg1 outgoingRange:(NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(NSRange)arg4 ;
+(unsigned)p_numberOfDifferencesBetweenStyleProperties:(id)arg1 betweenOutgoingStorage:(id)arg2 outgoingRange:(NSRange)arg3 incomingStorage:(id)arg4 incomingRange:(NSRange)arg5 maxDifferencesBeforeReturning:(unsigned)arg6 ;
+(float)p_mmAttributeMatchPercentWithOutgoingChunkDict:(id)arg1 incomingChunkDict:(id)arg2 ;
+(id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(NSRange)arg2 toString:(id)arg3 ;
+(id)p_textureSetFromRep:(id)arg1 range:(NSRange)arg2 includeListLabel:(BOOL)arg3 desiredContentRect:(CGRect)arg4 ;
+(BOOL)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(int)arg2 incomingStorage:(id)arg3 incomingCharIndex:(int)arg4 shouldMatch:(BOOL*)arg5 ;
+(void)p_getOutgoingTextureSet:(id*)arg1 incomingTextureSet:(id*)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(NSRange)arg4 incomingRep:(id)arg5 incomingChunkRange:(NSRange)arg6 includeListLabels:(BOOL)arg7 ;
+(id)textPropertiesAffectingVisualStyleExceptSize;
+(BOOL)p_shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg1 outgoingRange:(NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(NSRange)arg4 ;
+(unsigned)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(int)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5 ;
+(id)p_potentialMatchesWithChunkLength:(unsigned)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureContext:(id)arg4 textDeliveryType:(int)arg5 ;
+(void)test_TSWPTextPropertiesCheck;
-(id)hyperlinkRegions;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)willBeRemoved;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowKnobs;
-(id)dynamicResizeDidBegin;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(id)textureForContext:(id)arg1 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)overlayLayers;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)resizedGeometryForTransform:(CGAffineTransform)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(id)childReps;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 ;
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1 ;
-(id)containerInfo;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(id)additionalLayersOverLayer;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(unsigned long long)enabledKnobMask;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(BOOL)shouldIgnoreEditMenuTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2 ;
-(BOOL)wantsToHandleTapsOnContainingGroup;
-(BOOL)isEditingChildRep;
-(BOOL)selectionIsAppropriateToShowInvisiblePathHighlight;
-(BOOL)shapeLayoutShouldUpdateInstructionalText:(id)arg1 ;
-(void)shapeLayoutDidChangeContainedStorage:(id)arg1 ;
-(id)containedRep;
-(id)p_overflowKnobImage;
-(BOOL)p_shouldShowTextOverflowGlyph;
-(void)p_resetOverflowGlyphLayerIfNecessary;
-(float)pParagraphAlignmentOffset;
-(id)textStorageForTexture;
-(BOOL)isShapeInvisible;
-(BOOL)p_hasContentForRange:(NSRange)arg1 labelOnly:(BOOL)arg2 ;
-(id)newTextureRenderableForRange:(NSRange)arg1 includeListLabel:(BOOL)arg2 isMagicMove:(BOOL)arg3 desiredContentRect:(CGRect)arg4 ;
-(float)p_textureSetOpacity;
-(void)p_getBoundsRect:(CGRect*)arg1 contentRect:(CGRect*)arg2 transform:(CGAffineTransform*)arg3 applyReflection:(BOOL*)arg4 applyShadow:(BOOL*)arg5 forRange:(NSRange)arg6 includeListLabel:(BOOL)arg7 isMagicMove:(BOOL)arg8 ;
-(CGRect)p_rectForRubyFields:(NSRange)arg1 ;
-(void)p_drawRubyInContext:(CGContextRef)arg1 forRange:(NSRange)arg2 ;
-(void)willEndEditingContainedRep;
-(void)willBeginEditingContainedRep;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id).cxx_construct;
-(BOOL)isSelectable;
-(BOOL)isInvisible;
@end

