/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@protocol MNETAManagerDelegate;
@class MKETAUpdater, NSMapTable, MNRouteSet, ;

@interface MNETAManager : NSObject <GEOResourceManifestTileGroupObserver> {

	MKETAUpdater* _etaUpdater;
	NSMapTable* _routesStepsLookup;
	MNRouteSet* _currentRouteSet;
	<MNETAManagerDelegate>* _delegate;
	int _etaBehavior;

}

@property (assign,nonatomic) <MNETAManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int etaBehavior;                                //@synthesize etaBehavior=_etaBehavior - In the implementation block
-(void)updateCurrentRoute:(id)arg1 ;
-(void)updateUserLocation:(id)arg1 routeMatch:(id)arg2 ;
-(void)useRouteSet:(id)arg1 ;
-(void)setEtaBehavior:(int)arg1 ;
-(void)_updateRequestInterval;
-(void)_createCurrentRouteStepsLookup;
-(void)_updateRouteStepsLookupWithContingentRoutes;
-(int)etaBehavior;
-(void)startUpdateRequests;
-(BOOL)_handleETARequestFinished:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(void)stopUpdateRequests;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)reset;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

