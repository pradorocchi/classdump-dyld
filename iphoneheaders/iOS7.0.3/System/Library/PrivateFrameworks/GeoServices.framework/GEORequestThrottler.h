/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMapTable;

@interface GEORequestThrottler : NSObject {

	NSMapTable* _throttleMap;

}
+(id)sharedThrottler;
-(void)dealloc;
-(id)init;
-(void)clear;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(BOOL)allowRequest:(unsigned)arg1 toURL:(id)arg2 ;
@end

