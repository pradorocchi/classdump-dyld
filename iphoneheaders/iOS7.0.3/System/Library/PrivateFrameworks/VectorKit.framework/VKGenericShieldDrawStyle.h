/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDrawStyle.h>

@interface VKGenericShieldDrawStyle : VKDrawStyle {

	int _style;
	VGLColor _backgroundColor;
	VGLColor _borderColor;
	VGLColor _textColor;
	float _haloSize;
	VGLColor _haloColor;
	CGSize _dropShadowOffset;
	float _dropShadowSize;
	VGLColor _dropShadowColor;

}

@property (assign,nonatomic) int style;                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) VGLColor backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) VGLColor borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) VGLColor textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) float haloSize;                        //@synthesize haloSize=_haloSize - In the implementation block
@property (assign,nonatomic) VGLColor haloColor;                    //@synthesize haloColor=_haloColor - In the implementation block
@property (assign,nonatomic) CGSize dropShadowOffset;               //@synthesize dropShadowOffset=_dropShadowOffset - In the implementation block
@property (assign,nonatomic) float dropShadowSize;                  //@synthesize dropShadowSize=_dropShadowSize - In the implementation block
@property (assign,nonatomic) VGLColor dropShadowColor;              //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
-(id)variant;
-(void)setBackgroundColor:(VGLColor)arg1 ;
-(VGLColor)backgroundColor;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)setTextColor:(VGLColor)arg1 ;
-(VGLColor)textColor;
-(void)setBorderColor:(VGLColor)arg1 ;
-(id).cxx_construct;
-(VGLColor)borderColor;
-(VGLColor)dropShadowColor;
-(void)setDropShadowColor:(VGLColor)arg1 ;
-(id)initWithStyleInfo:(id)arg1 ;
-(void)setHaloSize:(float)arg1 ;
-(void)setHaloColor:(VGLColor)arg1 ;
-(void)setDropShadowOffset:(CGSize)arg1 ;
-(void)setDropShadowSize:(float)arg1 ;
-(float)haloSize;
-(VGLColor)haloColor;
-(float)dropShadowSize;
-(CGSize)dropShadowOffset;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned)arg2 globals:(id)arg3 ;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
@end

