/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSTimer;

@interface GEOTestTileRequester : GEOTileRequester {

	NSTimer* _timer;

}
+(unsigned char)tileProviderIdentifier;
-(void)dealloc;
-(void)start;
-(void)_sendResults:(id)arg1 ;
@end

