/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class RTLocationOfInterest, GEOLocation, GEOPlaceResult, RTLOIDisplayInfo;

@interface RTLOIETA : NSObject {

	RTLocationOfInterest* _loi;
	GEOLocation* _destinationLocation;
	GEOPlaceResult* _origin;
	unsigned _liveETASeconds;
	unsigned _historicalETASeconds;
	RTLOIDisplayInfo* _displayInfo;

}

@property (nonatomic,readonly) RTLocationOfInterest * loi;              //@synthesize loi=_loi - In the implementation block
-(id)description;
-(id)localizedDescription;
-(id)_preferredName;
-(id)_displayInfoForDate:(id)arg1 ;
-(id)displayInfo;
-(id)initWithLOI:(id)arg1 destinationLocation:(id)arg2 origin:(id)arg3 liveETASeconds:(unsigned)arg4 historicalETASeconds:(unsigned)arg5 ;
-(id)_urlName;
-(BOOL)etaExceedsMinimumETA:(unsigned)arg1 ;
-(BOOL)hasEquivalentDisplayTo:(id)arg1 ;
-(id)loi;
-(id)mapsURL;
-(void).cxx_destruct;
@end

