/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CPPage;

@interface CPZoneFilter : NSObject {

	CPPage* page;
	double minArea;

}
+(void)filterZonesInPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)filterZonesInZone:(id)arg1 ;
-(void)findBackgroundGraphicsInZone:(id)arg1 ;
-(void)findUsedGraphicsInZone:(id)arg1 ;
@end

