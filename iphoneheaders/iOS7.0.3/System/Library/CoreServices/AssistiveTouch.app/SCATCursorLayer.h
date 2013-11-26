/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface SCATCursorLayer : CAShapeLayer {

	BOOL _ensureHidden;
	BOOL _simpleRect;
	BOOL _isSimpleRect;
	UIColor* _restingStrokeColor;
	UIColor* _restingFillColor;
	float _boundsInset;
	int _theme;
	int _level;

}

@property (assign,nonatomic) int theme;                                        //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) int level;                                        //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) BOOL isSimpleRect;                              //@synthesize isSimpleRect=_isSimpleRect - In the implementation block
@property (nonatomic,retain) UIColor * restingStrokeColor;                     //@synthesize restingStrokeColor=_restingStrokeColor - In the implementation block
@property (nonatomic,retain) UIColor * restingFillColor;                       //@synthesize restingFillColor=_restingFillColor - In the implementation block
@property (assign,nonatomic) float boundsInset;                                //@synthesize boundsInset=_boundsInset - In the implementation block
@property (assign,getter=isSimpleRect,nonatomic) BOOL simpleRect;              //@synthesize simpleRect=_simpleRect - In the implementation block
-(void)_updatePresentationProperties:(int)arg1 ;
-(void)setRestingFillColor:(id)arg1 ;
-(void)setRestingStrokeColor:(id)arg1 ;
-(BOOL)usesHighVisibility;
-(void)setSimpleRect:(BOOL)arg1 ;
-(id)_strokeColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(id)restingStrokeColor;
-(id)_fillColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(id)restingFillColor;
-(float)_boundsInsetForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(void)setBoundsInset:(float)arg1 ;
-(float)_borderWidthForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(id)_borderPatternForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(float)_opacityForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(void)ensureHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateTheme:(int)arg1 animated:(BOOL)arg2 options:(int)arg3 ;
-(void)updateLevel:(int)arg1 animated:(BOOL)arg2 options:(int)arg3 ;
-(void)updatePath:(id)arg1 frame:(CGRect)arg2 isSimpleRect:(BOOL)arg3 animated:(BOOL)arg4 options:(int)arg5 ;
-(BOOL)isSimpleRect;
-(BOOL)isSimpleRect;
-(float)boundsInset;
-(id)styleProvider;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(int)theme;
-(void)setTheme:(int)arg1 ;
@end

