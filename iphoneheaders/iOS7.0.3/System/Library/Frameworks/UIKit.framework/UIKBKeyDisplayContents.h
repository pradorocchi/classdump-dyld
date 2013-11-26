/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	BOOL _isCustomGlyph;
	BOOL _secondaryIsCustomGlyph;
	BOOL _fallbackIsCustomGlyph;
	BOOL _fillPath;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSString* _secondaryDisplayString;
	NSString* _fallbackDisplayString;
	NSArray* _variantDisplayStrings;
	NSArray* _variantDisplayImages;
	int _highlightedVariantIndex;
	int _displayPathType;

}

@property (nonatomic,retain) NSString * displayString;                       //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                  //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (assign,nonatomic) BOOL isCustomGlyph;                             //@synthesize isCustomGlyph=_isCustomGlyph - In the implementation block
@property (nonatomic,retain) NSString * fallbackDisplayString;               //@synthesize fallbackDisplayString=_fallbackDisplayString - In the implementation block
@property (assign,nonatomic) BOOL fallbackIsCustomGlyph;                     //@synthesize fallbackIsCustomGlyph=_fallbackIsCustomGlyph - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayString;              //@synthesize secondaryDisplayString=_secondaryDisplayString - In the implementation block
@property (assign,nonatomic) BOOL secondaryIsCustomGlyph;                    //@synthesize secondaryIsCustomGlyph=_secondaryIsCustomGlyph - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayStrings;                //@synthesize variantDisplayStrings=_variantDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayImages;                 //@synthesize variantDisplayImages=_variantDisplayImages - In the implementation block
@property (assign,nonatomic) int highlightedVariantIndex;                    //@synthesize highlightedVariantIndex=_highlightedVariantIndex - In the implementation block
@property (assign,nonatomic) int displayPathType;                            //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) BOOL fillPath;                                  //@synthesize fillPath=_fillPath - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setVariantDisplayStrings:(id)arg1 ;
-(id)displayString;
-(void)setDisplayString:(id)arg1 ;
-(void)setHighlightedVariantIndex:(int)arg1 ;
-(int)highlightedVariantIndex;
-(void)setIsCustomGlyph:(BOOL)arg1 ;
-(id)secondaryDisplayString;
-(id)displayStringImage;
-(BOOL)isCustomGlyph;
-(BOOL)secondaryIsCustomGlyph;
-(id)fallbackDisplayString;
-(BOOL)fallbackIsCustomGlyph;
-(id)variantDisplayImages;
-(id)variantDisplayStrings;
-(int)displayPathType;
-(BOOL)fillPath;
-(void)setDisplayStringImage:(id)arg1 ;
-(void)setDisplayPathType:(int)arg1 ;
-(void)setSecondaryDisplayString:(id)arg1 ;
-(void)setFallbackDisplayString:(id)arg1 ;
-(void)setSecondaryIsCustomGlyph:(BOOL)arg1 ;
-(void)setFallbackIsCustomGlyph:(BOOL)arg1 ;
-(void)setVariantDisplayImages:(id)arg1 ;
-(void)setFillPath:(BOOL)arg1 ;
@end

