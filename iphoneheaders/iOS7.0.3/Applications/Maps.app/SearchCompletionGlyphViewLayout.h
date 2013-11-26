/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Maps/Maps-Structs.h>
@class NSDictionary, NSString, NSArray, UIView, UIImageView, UIImage, UILabel;

@interface SearchCompletionGlyphViewLayout : NSObject {

	NSDictionary* _titleLabelTextAttributes;
	NSDictionary* _subtitleLabelTextAttributes;
	NSDictionary* _boldTitleLabelTextAttributes;
	NSDictionary* _boldSubtitleLabelTextAttributes;
	NSString* _titleText;
	NSArray* _titleBoldRanges;
	NSString* _titleLocalityText;
	NSString* _subtitleText;
	NSArray* _subtitleBoldRanges;
	NSString* _subtitleLocalityText;
	UIView* _containerView;
	UIImageView* _glyphImageView;
	UIImage* _glyph;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned _state;
	UIView* _alternateGlyphAreaView;
	CGSize _alternateGlyphAreaViewSize;

}

@property (nonatomic,copy) NSString * titleText;                                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSArray * titleBoldRanges;                                       //@synthesize titleBoldRanges=_titleBoldRanges - In the implementation block
@property (nonatomic,copy) NSString * titleLocalityText;                                    //@synthesize titleLocalityText=_titleLocalityText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSArray * subtitleBoldRanges;                                    //@synthesize subtitleBoldRanges=_subtitleBoldRanges - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalityText;                                 //@synthesize subtitleLocalityText=_subtitleLocalityText - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                                               //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * glyphImageView;                                //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UIView * alternateGlyphAreaView;                               //@synthesize alternateGlyphAreaView=_alternateGlyphAreaView - In the implementation block
@property (assign,nonatomic) CGSize alternateGlyphAreaViewSize;                             //@synthesize alternateGlyphAreaViewSize=_alternateGlyphAreaViewSize - In the implementation block
@property (nonatomic,readonly) NSDictionary * titleLabelTextAttributes;                     //@synthesize titleLabelTextAttributes=_titleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * subtitleLabelTextAttributes;                  //@synthesize subtitleLabelTextAttributes=_subtitleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * boldTitleLabelTextAttributes;                 //@synthesize boldTitleLabelTextAttributes=_boldTitleLabelTextAttributes - In the implementation block
@property (nonatomic,readonly) NSDictionary * boldSubtitleLabelTextAttributes;              //@synthesize boldSubtitleLabelTextAttributes=_boldSubtitleLabelTextAttributes - In the implementation block
@property (assign,nonatomic) unsigned state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) float leftInset; 
+(id)unsafeBoldCharacterSet;
+(void)initialize;
-(void)setStateFromTableViewCell:(id)arg1 ;
-(void)setGlyph:(id)arg1 ;
-(id)titleLabelTextAttributes;
-(id)subtitleLabelTextAttributes;
-(void)setAlternateGlyphAreaView:(id)arg1 ;
-(id)alternateGlyphAreaView;
-(void)setAlternateGlyphAreaViewSize:(CGSize)arg1 ;
-(id)titleLocalityText;
-(id)subtitleLocalityText;
-(id)glyph;
-(id)glyphImageView;
-(CGSize)alternateGlyphAreaViewSize;
-(id)boldTitleLabelTextAttributes;
-(id)boldSubtitleLabelTextAttributes;
-(id)titleBoldRanges;
-(void)setTitleBoldRanges:(id)arg1 ;
-(void)setTitleLocalityText:(id)arg1 ;
-(id)subtitleBoldRanges;
-(void)setSubtitleBoldRanges:(id)arg1 ;
-(void)setSubtitleLocalityText:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)containerView;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)titleLabel;
-(void)layout;
-(id)subtitleLabel;
-(void)setTitleText:(id)arg1 ;
-(void)setContainerView:(id)arg1 ;
-(float)leftInset;
-(void)setSubtitleText:(id)arg1 ;
-(id)subtitleText;
-(id)titleText;
@end

