/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompletion.h>

@class GEOPlaceResult, GEOSearchRequest, GEOSearchResponse, MKMapItem;

@interface MKPlaceResultSearchCompletion : MKSearchCompletion {

	GEOPlaceResult* _result;
	GEOSearchRequest* _request;
	GEOSearchResponse* _response;
	MKMapItem* _mapItem;

}
-(BOOL)getCoordinate:(SCD_Struct_MK1*)arg1 ;
-(id)highlightsForLine:(unsigned)arg1 ;
-(void)sendFeedback;
-(void)applyToPlaceSearchRequest:(id)arg1 ;
-(id)initWithPlaceResult:(id)arg1 response:(id)arg2 request:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)displayLines;
-(id)mapItem;
@end

