/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSGlyphStorage.h>
#import <CoreFoundation/NSCoding.h>

@protocol NSTextContainerView;
@class NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, NSStorage, NSRunStorage, NSTextContainer, UIView, UIFont, NSArray;

@interface NSLayoutManager : NSObject <NSGlyphStorage, NSCoding> {

	NSTextStorage* _textStorage;
	NSGlyphGenerator* _glyphGenerator;
	NSTypesetter* _typesetter;
	NSMutableArray* _textContainers;
	NSStorage* _containerUsedRects;
	NSRunStorage* _containerRuns;
	NSTextContainer* _extraLineFragmentContainer;
	struct {
		unsigned containersAreFull : 1;
		unsigned glyphsMightDrawOutsideLines : 1;
		unsigned backgroundLayoutEnabled : 1;
		unsigned resizingInProgress : 1;
		unsigned allowScreenFonts : 1;
		unsigned cachedRectArrayInUse : 1;
		unsigned displayInvalidationInProgress : 1;
		unsigned insertionPointNeedsUpdate : 1;
		unsigned layoutManagerInDirtyList : 1;
		unsigned originalFontOverride : 1;
		unsigned showInvisibleCharacters : 1;
		unsigned showControlCharacters : 1;
		unsigned delegateRespondsToDidInvalidate : 1;
		unsigned delegateRespondsToDidComplete : 1;
		unsigned glyphFormat : 2;
		unsigned textStorageRespondsToIsEditing : 1;
		unsigned notifyEditedInProgress : 1;
		unsigned containersChanged : 1;
		unsigned isGeneratingGlyphs : 1;
		unsigned hasNonGeneratedGlyphData : 1;
		unsigned loggedBGLayoutException : 1;
		unsigned syncAlignmentToDirection : 1;
		unsigned defaultAttachmentScaling : 2;
		unsigned usesFontLeading : 1;
		unsigned seenRightToLeft : 1;
		unsigned ignoresViewTransformations : 1;
		unsigned needToFlushGlyph : 1;
		unsigned flipsIfNeeded : 1;
		unsigned allowNonContig : 1;
		unsigned useNonContig : 1;
		unsigned inBackgroundLayout : 1;
	}  _lmFlags;
	id _delegate;
	unsigned short _textViewResizeDisableStack;
	unsigned short _displayInvalidationDisableStack;
	NSRange _deferredDisplayCharRange;
	UIView<NSTextContainerView>* _firstTextView;
	CGRect* _cachedRectArray;
	unsigned _cachedRectArrayCapacity;
	char* _glyphBuffer;
	unsigned _glyphBufferSize;
	NSRange _cachedLocationNominalGlyphRange;
	unsigned _cachedLocationGlyphIndex;
	CGPoint _cachedLocation;
	NSRange _cachedFontCharRange;
	UIFont* _cachedFont;
	unsigned _firstUnlaidGlyphIndex;
	unsigned _firstUnlaidCharIndex;
	NSRange _newlyFilledGlyphRange;
	id _extraData;

}

@property (assign) BOOL allowsOriginalFontMetricsOverride; 
@property (assign,nonatomic) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSArray * textContainers; 
@property (assign,nonatomic) <NSLayoutManagerDelegate> * delegate; 
@property (assign,nonatomic) BOOL showsInvisibleCharacters; 
@property (assign,nonatomic) BOOL showsControlCharacters; 
@property (assign,nonatomic) float hyphenationFactor; 
@property (assign,nonatomic) BOOL usesFontLeading; 
@property (assign,nonatomic) BOOL allowsNonContiguousLayout; 
@property (nonatomic,readonly) BOOL hasNonContiguousLayout; 
@property (nonatomic,readonly) unsigned numberOfGlyphs; 
@property (nonatomic,readonly) CGRect extraLineFragmentRect; 
@property (nonatomic,readonly) CGRect extraLineFragmentUsedRect; 
@property (nonatomic,readonly) NSTextContainer * extraLineFragmentTextContainer; 
+(void)initialize;
+(id)_defaultLinkAttributes;
+(BOOL)_usesScreenFonts;
+(BOOL)_ignoresViewTransformations;
+(BOOL)_showsInvisibleCharacters;
+(BOOL)_showsControlCharacters;
-(id)_commonTextViewController;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)_commonInit;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)addTextContainer:(id)arg1 ;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(id)textStorage;
-(void)ensureLayoutForTextContainer:(id)arg1 ;
-(void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(NSRange)arg3 ;
-(void)invalidateDisplayForCharacterRange:(NSRange)arg1 ;
-(id)textContainerForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(CGRect)boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 ;
-(void)ensureLayoutForCharacterRange:(NSRange)arg1 ;
-(void)ensureLayoutForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(NSRange)glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)invalidateGlyphsForCharacterRange:(NSRange)arg1 changeInLength:(int)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(void)setGlyphs:(const unsigned short*)arg1 properties:(const int*)arg2 characterIndexes:(const unsigned*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 ;
-(NSRange)glyphRangeForTextContainer:(id)arg1 ;
-(unsigned)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(int*)arg3 characterIndexes:(unsigned*)arg4 bidiLevels:(char*)arg5 ;
-(void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfGlyphs;
-(float)baselineOffsetForGlyphAtIndex:(unsigned)arg1 ;
-(void)coordinateAccess:(/*^block*/ id)arg1 ;
-(id)attributedString;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(BOOL)allowsNonContiguousLayout;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)setAllowsNonContiguousLayout:(BOOL)arg1 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(float)defaultLineHeightForFont:(id)arg1 ;
-(void)_setGlyphsPerLineEstimate:(unsigned)arg1 offsetPerLineEstimate:(float)arg2 ;
-(id)textContainers;
-(void)enumerateLineFragmentsForGlyphRange:(NSRange)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(BOOL)hasNonContiguousLayout;
-(unsigned)firstUnlaidGlyphIndex;
-(CGRect*)rectArrayForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned*)arg4 ;
-(void)ensureLayoutForGlyphRange:(NSRange)arg1 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSRange)rangeOfCharacterClusterAtIndex:(unsigned)arg1 type:(long)arg2 ;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(id)extraLineFragmentTextContainer;
-(void)enumerateEnclosingRectsForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(unsigned)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(float*)arg3 ;
-(unsigned)characterIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(float*)arg3 ;
-(CGRect)extraLineFragmentRect;
-(int)propertyForGlyphAtIndex:(unsigned)arg1 ;
-(unsigned)glyphIndexForCharacterAtIndex:(unsigned)arg1 ;
-(unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(float*)arg4 characterIndexes:(unsigned*)arg5 ;
-(void)enumerateEnclosingRectsForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(unsigned)layoutOptions;
-(CGRect)extraLineFragmentUsedRect;
-(void)setBackgroundLayoutEnabled:(BOOL)arg1 ;
-(void)setSynchronizesAlignmentToDirection:(BOOL)arg1 ;
-(id)typesetter;
-(CGPoint)locationForGlyphAtIndex:(unsigned)arg1 ;
-(int)intAttribute:(int)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(CGRect*)rectArrayForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned*)arg4 ;
-(unsigned)characterIndexForGlyphAtIndex:(unsigned)arg1 ;
-(unsigned short)glyphAtIndex:(unsigned)arg1 ;
-(BOOL)_drawsUnderlinesLikeWebKit;
-(BOOL)notShownAttributeForGlyphAtIndex:(unsigned)arg1 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9 ;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(float)defaultBaselineOffsetForFont:(id)arg1 ;
-(void)drawUnderlineForGlyphRange:(NSRange)arg1 underlineType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)drawStrikethroughForGlyphRange:(NSRange)arg1 strikethroughType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)_showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)showAttachmentCell:(id)arg1 inRect:(CGRect)arg2 characterIndex:(unsigned)arg3 ;
-(void)drawSpellingUnderlineForGlyphRange:(NSRange)arg1 spellingState:(int)arg2 inGlyphRange:(NSRange)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(BOOL)arg8 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 type:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 isStrikethrough:(BOOL)arg7 ;
-(void)_lineGlyphRange:(NSRange)arg1 type:(int)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 isStrikethrough:(BOOL)arg6 ;
-(NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)arg1 ;
-(NSRange)_blockRangeForCharRange:(NSRange)arg1 ;
-(NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 completeRows:(BOOL*)arg2 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 ;
-(unsigned)_glyphIndexForCharacterIndex:(unsigned)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4 ;
-(void)_fillGlyphHoleForCharacterRange:(NSRange)arg1 startGlyphIndex:(unsigned)arg2 desiredNumberOfCharacters:(unsigned)arg3 ;
-(void)setExtraLineFragmentRect:(CGRect)arg1 usedRect:(CGRect)arg2 textContainer:(id)arg3 ;
-(void)setTextContainer:(id)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 ;
-(BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)arg1 forCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 lineLimit:(unsigned)arg4 nextGlyphIndex:(unsigned*)arg5 ;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(int)arg2 includeBlocks:(BOOL)arg3 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)arg1 nextGlyphIndex:(unsigned*)arg2 ;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3 ;
-(void)_invalidateUsageForTextContainersInRange:(NSRange)arg1 ;
-(void)_resizeTextViewForTextContainer:(id)arg1 ;
-(void)_invalidateInsertionPoint;
-(void)invalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(void)_invalidateDisplayIfNeeded;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 ;
-(void)_fillLayoutHoleForCharacterRange:(NSRange)arg1 desiredNumberOfLines:(unsigned)arg2 isSoft:(BOOL)arg3 ;
-(unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4 ;
-(void)_mergeLayoutHoles;
-(void)_fillLayoutHoleAtIndex:(unsigned)arg1 desiredNumberOfLines:(unsigned)arg2 ;
-(id)_lineFragmentDescriptionForGlyphRange:(NSRange)arg1 includeGlyphLocations:(BOOL)arg2 ;
-(id)_lineFragmentDescription:(BOOL)arg1 ;
-(id)_glyphDescriptionForGlyphRange:(NSRange)arg1 ;
-(unsigned)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2 ;
-(void)_recalculateUsageForTextContainerAtIndex:(unsigned)arg1 ;
-(void)_growCachedRectArrayToSize:(unsigned)arg1 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9 rectArray:(CGRect*)arg10 rectArrayCapacity:(unsigned)arg11 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9 ;
-(id)substituteFontForFont:(id)arg1 ;
-(CGSize)attachmentSizeForGlyphAtIndex:(unsigned)arg1 ;
-(NSRange)_glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 okToFillHoles:(BOOL)arg3 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 hintGlyphRange:(NSRange)arg3 okToFillHoles:(BOOL)arg4 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3 ;
-(void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)arg1 ;
-(void)_setRowArrayCache:(id)arg1 ;
-(void)_markSelfAsDirtyForBackgroundLayout:(id)arg1 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)temporaryAttributesAtCharacterIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)fillBackgroundRectArray:(const CGRect*)arg1 count:(unsigned)arg2 forCharacterRange:(NSRange)arg3 color:(id)arg4 ;
-(BOOL)_hasSeenRightToLeft;
-(void)showAttachment:(id)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterIndex:(unsigned)arg4 ;
-(void)underlineGlyphRange:(NSRange)arg1 underlineType:(int)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(void)strikethroughGlyphRange:(NSRange)arg1 strikethroughType:(int)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(void)setBaselineOffset:(float)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(int)arg2 ;
-(void)_mergeGlyphHoles;
-(NSRange)_blockRangeForGlyphRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 completeRows:(BOOL*)arg2 ;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 ;
-(id)_rowArrayCache;
-(NSRange)_extendedCharRangeForInvalidation:(NSRange)arg1 editedCharRange:(NSRange)arg2 ;
-(void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)arg1 byDelta:(int)arg2 ;
-(BOOL)_canDoLayout;
-(void)_fillGlyphHoleAtIndex:(unsigned)arg1 desiredNumberOfCharacters:(unsigned)arg2 ;
-(unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 ;
-(unsigned)_glyphIndexForCharacterIndex:(unsigned)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 ;
-(id)_containerDescription;
-(id)_lineFragmentDescription;
-(id)_glyphLocationDescription;
-(id)_glyphDescription;
-(id)_glyphHoleDescription;
-(id)_layoutHoleDescription;
-(id)_glyphTreeDescription;
-(id)_layoutTreeDescription;
-(id)_blockDescription;
-(void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(CGRect)arg2 ;
-(NSStoredContainerUsage*)_validatedStoredUsageForTextContainerAtIndex:(unsigned)arg1 ;
-(id)_selectedRanges;
-(void)_fixSelectionAfterChangeInCharacterRange:(NSRange)arg1 changeInLength:(int)arg2 ;
-(CGRect)_boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4 ;
-(NSRange)_glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4 ;
-(void)_firstTextViewChanged;
-(void)_drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 parameters:(NSDrawingParameters*)arg3 ;
-(id)selectedTextAttributesForCharacterAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(char*)_packedGlyphs:(unsigned)arg1 range:(NSRange)arg2 length:(unsigned*)arg3 ;
-(void)_drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(unsigned)_glyphAtIndex:(unsigned)arg1 characterIndex:(unsigned*)arg2 glyphInscription:(unsigned*)arg3 isValidIndex:(BOOL*)arg4 ;
-(BOOL)_needToFlushGlyph;
-(void)_setNeedToFlushGlyph:(BOOL)arg1 ;
-(void)_simpleInsertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned)arg2 characterIndex:(unsigned)arg3 elastic:(BOOL)arg4 ;
-(void)_simpleDeleteGlyphsInRange:(NSRange)arg1 ;
-(void)_insertGlyphs:(unsigned*)arg1 elasticAttributes:(BOOL*)arg2 count:(unsigned)arg3 atGlyphIndex:(unsigned)arg4 characterIndex:(unsigned)arg5 ;
-(void)_promoteGlyphStoreToFormat:(unsigned)arg1 ;
-(id)_attachmentSizesRun;
-(CGRect)_currentAttachmentRect;
-(unsigned)_currentAttachmentIndex;
-(void)_setCurrentAttachmentRect:(CGRect)arg1 index:(unsigned)arg2 ;
-(void)_clearCurrentAttachmentSettings;
-(void)_clearTemporaryAttributes;
-(void)_clearTemporaryAttributesForCharacterRange:(NSRange)arg1 changeInLength:(int)arg2 ;
-(void)setAllowsOriginalFontMetricsOverride:(BOOL)arg1 ;
-(BOOL)allowsOriginalFontMetricsOverride;
-(void)_setHasSeenRightToLeft:(BOOL)arg1 ;
-(BOOL)flipsIfNeeded;
-(void)setFlipsIfNeeded:(BOOL)arg1 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(float)arg4 ;
-(BOOL)ignoresViewTransformations;
-(void)setIgnoresViewTransformations:(BOOL)arg1 ;
-(BOOL)ignoresAntialiasThreshold;
-(void)setIgnoresAntialiasThreshold:(BOOL)arg1 ;
-(BOOL)_alwaysDrawsActive;
-(void)_setAlwaysDrawsActive:(BOOL)arg1 ;
-(id)_insertionPointHelperForGlyphAtIndex:(unsigned)arg1 ;
-(int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)arg1 inDisplayOrder:(BOOL)arg2 positions:(float*)arg3 characterIndexes:(unsigned*)arg4 count:(unsigned*)arg5 alternatePositions:(float*)arg6 characterIndexes:(unsigned*)arg7 count:(unsigned*)arg8 ;
-(id)_selectionRangesForInsertionPointRange:(NSRange)arg1 ;
-(void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1 ;
-(void)getFirstUnlaidCharacterIndex:(unsigned*)arg1 glyphIndex:(unsigned*)arg2 ;
-(BOOL)synchronizesAlignmentToDirection;
-(int)typesetterBehavior;
-(float)hyphenationFactor;
-(BOOL)usesFontLeading;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned)arg2 characterIndex:(unsigned)arg3 ;
-(void)setEllipsisGlyphAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setTypesetterBehavior:(int)arg1 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(void)insertGlyphs:(const unsigned*)arg1 length:(unsigned)arg2 forStartingGlyphAtIndex:(unsigned)arg3 characterIndex:(unsigned)arg4 ;
-(void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned)arg3 ;
-(id)glyphGenerator;
-(void)setGlyphGenerator:(id)arg1 ;
-(void)insertTextContainer:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 ;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 isSoft:(BOOL)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(void)_invalidateGlyphsForCharacterRange:(NSRange)arg1 editedCharacterRange:(NSRange)arg2 changeInLength:(int)arg3 actualCharacterRange:(NSRange*)arg4 ;
-(void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
-(void)textStorage:(id)arg1 edited:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)ensureGlyphsForCharacterRange:(NSRange)arg1 ;
-(void)_primitiveDeleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned short)glyphAtIndex:(unsigned)arg1 isValidIndex:(BOOL*)arg2 ;
-(unsigned)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned*)arg3 glyphInscriptions:(unsigned*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char*)arg6 ;
-(unsigned)firstUnlaidCharacterIndex;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(unsigned)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(id)temporaryAttributesAtCharacterIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)usesScreenFonts;
-(void)setTextStorage:(id)arg1 ;
-(void)replaceTextStorage:(id)arg1 ;
-(id)_glyphGenerator;
-(void)_setGlyphGenerator:(id)arg1 ;
-(void)setTypesetter:(id)arg1 ;
-(void)removeTextContainerAtIndex:(unsigned)arg1 ;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2 ;
-(void)_setGlyphsPerLineEstimate:(unsigned)arg1 integerOffsetPerLineEstimate:(unsigned)arg2 ;
-(BOOL)backgroundLayoutEnabled;
-(void)setUsesScreenFonts:(BOOL)arg1 ;
-(void)setShowsInvisibleCharacters:(BOOL)arg1 ;
-(BOOL)showsInvisibleCharacters;
-(void)setShowsControlCharacters:(BOOL)arg1 ;
-(BOOL)showsControlCharacters;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)ensureGlyphsForGlyphRange:(NSRange)arg1 ;
-(void)replaceGlyphAtIndex:(unsigned)arg1 withGlyph:(unsigned)arg2 ;
-(void)setCharacterIndex:(unsigned)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)arg1 ;
-(BOOL)isValidGlyphIndex:(unsigned)arg1 ;
-(unsigned)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned*)arg3 glyphInscriptions:(unsigned*)arg4 elasticBits:(BOOL*)arg5 ;
-(unsigned)getGlyphs:(unsigned*)arg1 range:(NSRange)arg2 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 coalesceRuns:(BOOL)arg3 ;
-(void)setLocations:(CGPoint*)arg1 startingGlyphIndexes:(unsigned*)arg2 count:(unsigned)arg3 forGlyphRange:(NSRange)arg4 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned)arg2 ;
-(id)textContainerForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(BOOL)arg3 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 allowLayout:(BOOL)arg3 ;
-(BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)arg1 ;
-(NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned)arg1 ;
-(void)setLayoutRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(void)setBoundsRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)arg1 ;
-(void)setTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(void)addTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(id)_temporaryAttributesAtCharacterIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)finalize;
@end

