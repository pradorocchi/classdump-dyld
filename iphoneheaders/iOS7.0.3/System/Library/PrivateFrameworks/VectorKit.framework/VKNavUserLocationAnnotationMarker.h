/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMeshAnnotationMarker.h>

@class VKAnimation, VGLTexture, VGLRenderState;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker {

	BOOL _shouldBillboard;
	VKAnimation* _billboardAnimation;
	float _billboardFactor;
	float _scale;
	BOOL _shouldShowCourse;
	BOOL _puckFlipped;
	double _presentationCourse;
	double _sizePoints;
	BOOL _stale;
	VGLTexture* _arrowTexture;
	VGLTexture* _circleTexture;
	VKAnimation* _puckStyleAnimation;
	int _puckStyle;
	float _greyPuckAlphaScale;
	VGLRenderState* _puckRenderState;
	SCD_Struct_VK151 _puckState;
	int _style;
	VGLColor _arrowColor;
	VGLColor _arrowColorStale;
	float _circleBrightness;
	float _arrowBrightness;

}

@property (assign,nonatomic) BOOL shouldBillboard;                   //@synthesize shouldBillboard=_shouldBillboard - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCourse;                  //@synthesize shouldShowCourse=_shouldShowCourse - In the implementation block
@property (assign,nonatomic) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isStale,nonatomic) BOOL stale;              //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) VGLColor innerColor;                    //@synthesize arrowColor=_arrowColor - In the implementation block
-(void)dealloc;
-(void)setStyle:(int)arg1 ;
-(float)scale;
-(int)style;
-(void)setScale:(float)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(void)setModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(void)drawWithContext:(id)arg1 ;
-(void)_updatePuckStyle;
-(void)_updateTextures;
-(double)presentationCourse;
-(void)_drawPuckWithContext:(id)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setShouldBillboard:(BOOL)arg1 ;
-(void)setShouldShowCourse:(BOOL)arg1 ;
-(void)setStale:(BOOL)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3 ;
-(void)updateWithStyle:(id)arg1 ;
-(BOOL)isStale;
-(BOOL)shouldBillboard;
-(BOOL)shouldShowCourse;
-(VGLColor)innerColor;
-(void)setInnerColor:(VGLColor)arg1 ;
@end

