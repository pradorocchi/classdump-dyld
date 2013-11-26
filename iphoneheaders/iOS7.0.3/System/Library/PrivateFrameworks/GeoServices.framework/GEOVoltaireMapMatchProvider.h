/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/ id _errorHandler;
	/*^block*/ id _finishedHandler;
	BOOL _cancelled;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
+(void)_resetURL;
+(id)providerURL;
+(void)setUsePersistentConnection:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
-(id)requester;
-(void)setRequester:(id)arg1 ;
@end

