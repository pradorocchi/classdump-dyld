/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapPageRenderer.h>

@interface SimpleMapPageRenderer : MapPageRenderer {

	SCD_Struct_Si10 topLeftCorner;
	double _widthInMeters;

}
-(void)drawTopContentInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(CGRect)overviewRect;
-(void)_setTitlesWithResponse:(id)arg1 ;
-(id)initWithWorldView:(id)arg1 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
@end

