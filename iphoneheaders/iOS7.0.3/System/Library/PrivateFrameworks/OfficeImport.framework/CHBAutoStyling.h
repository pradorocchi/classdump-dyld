/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHAutoStyling.h>
#import <OfficeImport/CHAutoStyling.h>

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>
-(id)fillWithColorIndex:(unsigned)arg1 ;
-(id)strokeWithColorIndex:(int)arg1 ;
-(id)autoFill;
-(id)autoStroke;
-(void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(BOOL)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(BOOL)arg7 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 isLine:(bool)arg3 colorMap:(id)arg4 colorScheme:(id)arg5 ;
-(id)autoSeriesFill:(unsigned)arg1 ;
-(id)autoStrokeForSeriesIndex:(unsigned)arg1 ;
-(id)autoSeriesBorderStroke;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned)arg2 colorMap:(id)arg3 colorScheme:(id)arg4 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned)arg2 colorMap:(id)arg3 colorScheme:(id)arg4 ;
-(void)resolveChartAreaGraphicProperties:(id)arg1 ;
-(void)resolveWallGraphicProperties:(id)arg1 ;
-(void)resolveFloorGraphicProperties:(id)arg1 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg1 ;
-(void)resolveAxisGraphicProperties:(id)arg1 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveLegendGraphicProperties:(id)arg1 ;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned)arg3 ;
-(id)autoAxisStroke;
@end

