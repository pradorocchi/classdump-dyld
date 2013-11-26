/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEODirectionsProvider : NSObject {

	BOOL _isLoading;
	int _requestType;
	/*^block*/ id _finishedHandler;
	/*^block*/ id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
+(unsigned short)providerID;
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(BOOL)isLoading;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)setFinishedHandler:(/*^block*/ id)arg1 ;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)cancelProviderRequest;
-(/*^block*/ id)finishedHandler;
-(void)requestCompleted;
-(void)providerReceivedErrorCode:(int)arg1 userInfo:(id)arg2 problemDetails:(SCD_Struct_GE56*)arg3 ;
-(void)providerReceivedResponse:(id)arg1 ;
-(void)providerDidCancel;
@end

