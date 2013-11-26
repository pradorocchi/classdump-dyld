/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	bool mColumn;
	int mOverlap;

}
-(bool)isColumn;
-(bool)isHorizontal;
-(id)initWithChart:(id)arg1 ;
-(void)setOverlap:(int)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(void)setColumn:(bool)arg1 ;
-(int)defaultLabelPosition;
-(int)gapWidth;
-(int)overlap;
@end

