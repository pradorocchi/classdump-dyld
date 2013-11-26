/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class SBFBackdropStatisticsProvider, CABackdropLayer;

@interface SBFBackdropWallpaperView : SBFWallpaperView {

	SBFBackdropStatisticsProvider* _statisticsProvider;
	CABackdropLayer* _layer;

}

@property (assign,nonatomic) BOOL colorSamplingEnabled; 
+(BOOL)_allowsParallax;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)_computeAverageColor;
@end

