/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSWPLayoutTarget <NSObject>
@property (nonatomic,readonly) NSMutableArray * columns; 
@property (nonatomic,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer; 
@property (nonatomic,readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject<TSDHint> * nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned pageNumber; 
@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) float maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@optional
-(BOOL)adjustColumnOriginForAlignment;
-(void)setAnchoredDrawablesForRelayout:(id)arg1;
-(id)anchoredDrawablesForRelayout;
-(BOOL)shouldHyphenate;
-(BOOL)siblingTargetIsManipulatingDrawable:(id)arg1;
-(id)parentLayoutForInlineAttachments;
-(CGPoint*)anchoredAttachmentPositionFromLayoutPosition:(CGPoint)arg1;
-(CGPoint*)layoutPositionFromAnchoredAttachmentPosition:(CGPoint)arg1;
-(CFLocaleRef)hyphenationLocale;
-(id)interiorClippingPath;
-(BOOL)invalidateForPageCountChange;
-(CGRect*)maskRect;
-(CGPoint*)layoutPositionFromInlineAttachmentPosition:(CGPoint)arg1;
-(unsigned)pageIndex;
-(id)canvas;

@required
-(BOOL)textIsVertical;
-(id)columnMetricsForCharIndex:(unsigned)arg1 outRange:(NSRange*)arg2;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1;
-(id)previousTargetLastColumn;
-(id)footnoteHeightMeasurer;
-(id)footnoteMarkProvider;
-(float)maxAnchorY;
-(id)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id)nextTargetFirstColumn;
-(id)currentInlineDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(BOOL)isLastTarget;
-(int)naturalAlignment;
-(BOOL)isLayoutOffscreen;
-(CGRect*)targetRectForCanvasRect:(CGRect)arg1;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(CGSize*)currentSize;
-(CGSize*)maxSize;
-(CGPoint*)position;
-(CGPoint*)anchorPoint;
-(CGSize*)minSize;
-(unsigned)pageCount;
-(unsigned)pageNumber;
-(int)verticalAlignment;
-(id)columns;
@end

