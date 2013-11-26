/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UILabel.h>

@interface StrokableLabel : UILabel {

	BOOL _stroke;
	BOOL _nonAlphaShadow;

}

@property (assign,nonatomic) BOOL stroke;                      //@synthesize stroke=_stroke - In the implementation block
@property (assign,nonatomic) BOOL nonAlphaShadow;              //@synthesize nonAlphaShadow=_nonAlphaShadow - In the implementation block
-(BOOL)nonAlphaShadow;
-(void)setNonAlphaShadow:(BOOL)arg1 ;
-(BOOL)stroke;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setStroke:(BOOL)arg1 ;
@end

