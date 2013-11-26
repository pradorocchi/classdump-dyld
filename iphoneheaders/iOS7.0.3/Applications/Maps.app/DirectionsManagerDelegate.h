/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol DirectionsManagerDelegate <NSObject>
@required
-(void)directionsManagerUpdatedETA:(id)arg1;
-(void)directionsManagerUpdatedTrafficIncidents:(id)arg1;
-(void)directionsManager:(id)arg1 didChangeNavigatorState:(int)arg2;
-(void)directionsManagerDidFailToReceiveRoute:(id)arg1;
-(void)directionsManagerWillRecalculateRoute:(id)arg1;
-(void)directionsManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5;
-(void)directionsManager:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3 distanceUntilManeuver:(double)arg4 timeUntilManeuver:(double)arg5;
-(void)directionsManager:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di3*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)directionsManager:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di3*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)directionsManagerHideSecondaryStep:(id)arg1;
-(void)directionsManagerHasArrived:(id)arg1;
-(void)directionsManagerDidFailToRecalculateRoute:(id)arg1;
@end

