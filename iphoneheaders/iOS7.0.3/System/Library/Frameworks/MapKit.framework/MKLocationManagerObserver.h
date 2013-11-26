/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKLocationManagerObserver <NSObject>
@required
-(void)locationManagerUpdatedLocation:(id)arg1;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
-(void)locationManagerDidReset:(id)arg1;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
@end

