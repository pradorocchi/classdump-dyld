/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/RoutePreloadCamera.h>

@interface SimpleRoutePreloadCamera : NSObject <RoutePreloadCamera> {

	unsigned _zoomLevel;

}
-(id)initWithZoomLevel:(unsigned)arg1 ;
-(void)implicateTilesForLocation:(id)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 ;
-(unsigned)zoomLevel;
@end

