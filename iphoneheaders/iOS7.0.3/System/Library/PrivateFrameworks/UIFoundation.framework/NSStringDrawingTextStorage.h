/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSTextContainer, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

	NSConcreteNotifyingMutableAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	NSRange _temporaryCharacterRange;
	float _baselineDelta;
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 24;
	}  _sdflags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;

}

@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) BOOL usesSimpleTextEffects; 
+(void)initialize;
+(void)_setHasCustomSettings:(BOOL)arg1 ;
+(id)stringDrawingTextStorage;
-(id)init;
-(unsigned)length;
-(id)string;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)layoutManager;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)textContainer;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg1 ;
-(BOOL)_usesSimpleTextEffects;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)cuiCatalog;
-(id)cuiStyleEffects;
-(BOOL)_isStringDrawingTextStorage;
-(int)typesetterBehavior;
-(void)_setBaselineDelta:(float)arg1 ;
-(BOOL)_baselineMode;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(void)setCuiCatalog:(id)arg1 ;
-(void)setCuiStyleEffects:(id)arg1 ;
-(id)textContainerForAttributedString:(id)arg1 containerSize:(CGSize)arg2 lineFragmentPadding:(float)arg3 ;
-(void)_setBaselineMode:(BOOL)arg1 ;
-(void)drawTextContainer:(id)arg1 withRect:(CGRect)arg2 graphicsContext:(CGContextRef)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(float)arg6 ;
-(float)_baselineDelta;
-(CGPoint)defaultTextContainerOriginForRect:(CGRect)arg1 ;
-(void)fontSetChanged;
-(id)flippedView;
-(id)textContainerForAttributedString:(id)arg1 ;
-(void)processEditing;
@end

