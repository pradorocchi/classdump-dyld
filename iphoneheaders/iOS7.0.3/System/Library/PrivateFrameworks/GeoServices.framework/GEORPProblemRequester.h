/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMapTable, NSLock;

@interface GEORPProblemRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	NSMapTable* _providers;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)registerProvider:(Class)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(Class)classForProviderID:(short)arg1 ;
-(void)startSubmissionRequest:(id)arg1 finished:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)startStatusRequest:(id)arg1 finished:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
@end

