/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/GeoJSONCoverageRegion.h>

@interface PolygonGeoRegion : NSObject <GeoJSONCoverageRegion> {

	SCD_Struct_Si10* _polygon;
	unsigned _vertexCount;

}
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)coordinateLiesInRegion:(SCD_Struct_Si10)arg1 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

