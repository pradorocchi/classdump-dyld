/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKETAUpdaterDelegate;
@class , GEOClientETATrafficUpdateRequest, GEOLocation, VKAttributedRouteMatch, GEORoute, GEOWaypoint, GEORouteAttributes, NSTimer, NSData;

@interface MKETAUpdater : NSObject {

	<MKETAUpdaterDelegate>* _delegate;
	/*^block*/ id _willSendRequestHandler;
	/*^block*/ id _receivedResponseHandler;
	GEOClientETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	VKAttributedRouteMatch* _routeMatch;
	GEORoute* _route;
	GEOWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	int _etaState;
	BOOL _allowRequests;
	BOOL _shouldUseConditionalRequest;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	NSData* _directionsResponseID;

}

@property (assign,nonatomic) <MKETAUpdaterDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id willSendRequestHandler;                                          //@synthesize willSendRequestHandler=_willSendRequestHandler - In the implementation block
@property (nonatomic,copy) id receivedResponseHandler;                                         //@synthesize receivedResponseHandler=_receivedResponseHandler - In the implementation block
@property (nonatomic,readonly) GEOClientETATrafficUpdateRequest * currentRequest;              //@synthesize currentETARequest=_currentETARequest - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                                       //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) VKAttributedRouteMatch * routeMatch;                              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEORoute * route;                                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEOWaypoint * destination;                                        //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                             //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                                    //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL allowRequests;                                               //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) BOOL shouldUseConditionalRequest;                                 //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) double requestInterval;                                           //@synthesize requestInterval=_requestInterval - In the implementation block
-(id)currentRequest;
-(void)_clearCurrentETARequest;
-(void)_clearTimer;
-(void)startUpdateRequests;
-(void)startUpdateRequestsWithRequestHandler:(/*^block*/ id)arg1 responseHandler:(/*^block*/ id)arg2 ;
-(void)setWillSendRequestHandler:(/*^block*/ id)arg1 ;
-(void)setReceivedResponseHandler:(/*^block*/ id)arg1 ;
-(void)setEtaState:(int)arg1 ;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(BOOL)_shouldStartConditionalETARequest;
-(void)_startConditionalConnectionETARequest;
-(BOOL)_sendETARequest:(id)arg1 isUpdate:(BOOL)arg2 ;
-(BOOL)_handleETARequestFinished:(id)arg1 currentStep:(id)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(void)_addCurrentRouteToETARequest:(id)arg1 currentStepIndex:(unsigned)arg2 percentOfCurrentStepRemaining:(double)arg3 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)stopUpdateRequests;
-(/*^block*/ id)willSendRequestHandler;
-(/*^block*/ id)receivedResponseHandler;
-(BOOL)allowRequests;
-(void)setAllowRequests:(BOOL)arg1 ;
-(BOOL)shouldUseConditionalRequest;
-(void)setShouldUseConditionalRequest:(BOOL)arg1 ;
-(double)requestInterval;
-(void)setRequestInterval:(double)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(void)reset;
-(void)setUserLocation:(id)arg1 ;
-(void)setRouteAttributes:(id)arg1 ;
-(id)routeAttributes;
-(void)setDirectionsResponseID:(id)arg1 ;
-(id)directionsResponseID;
-(id)userLocation;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(id)routeMatch;
-(void)setRouteMatch:(id)arg1 ;
@end

