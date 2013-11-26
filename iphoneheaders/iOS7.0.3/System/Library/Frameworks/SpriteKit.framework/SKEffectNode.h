/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SKNode.h>

@class CIFilter;

@interface SKEffectNode : SKNode

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) BOOL shouldCenterFilter; 
@property (assign,nonatomic) BOOL shouldEnableEffects; 
@property (assign,nonatomic) BOOL shouldRasterize; 
@property (assign,nonatomic) int blendMode; 
-(void)setShouldEnableEffects:(BOOL)arg1 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(BOOL)shouldEnableEffects;
-(BOOL)shouldCenterFilter;
-(void)setShouldCenterFilter:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setFilter:(id)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(BOOL)shouldRasterize;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)filter;
@end

