/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOPlaceSearchRequest.h>

@interface GEOSearchRequest : GEOPlaceSearchRequest {

	unsigned short _provider;

}

@property (assign,nonatomic) unsigned short provider;              //@synthesize provider=_provider - In the implementation block
-(id)_mapkit_initForCompletionsWithEntriesType:(int)arg1 listType:(int)arg2 ;
-(id)_mapkit_initWithLocalSearchRequest:(id)arg1 ;
-(void)setProvider:(unsigned short)arg1 ;
-(id)init;
-(Class)responseClass;
-(void)setDeviceGEOCoordinate:(SCD_Struct_GE12)arg1 ;
-(unsigned short)provider;
@end

