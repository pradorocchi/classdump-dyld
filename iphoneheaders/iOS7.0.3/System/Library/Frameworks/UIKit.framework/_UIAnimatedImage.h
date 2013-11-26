/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImage.h>

@class NSArray;

@interface _UIAnimatedImage : UIImage {

	NSArray* _images;
	double _duration;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(id)_initWithOtherImage:(id)arg1 ;
-(UIEdgeInsets)capInsets;
-(CGRect)_contentStretchInPixels;
-(CGRect)_contentRectInPixels;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(int)resizingMode;
-(BOOL)_isResizable;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)images;
-(id)initWithImages:(id)arg1 duration:(double)arg2 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 resizingMode:(int)arg2 ;
-(id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12 ;
-(id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2 ;
-(id)_imageWithLetterpressEffectWithForegroundColor:(id)arg1 ;
-(id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4 ;
-(id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4 ;
@end

