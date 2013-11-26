/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GEOGeocodeProvider : NSObject {

	/*^block*/ id _successHandler;
	/*^block*/ id _batchSuccessHandler;
	/*^block*/ id _errorHandler;

}

@property (nonatomic,copy) id successHandler;                   //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id batchSuccessHandler;              //@synthesize batchSuccessHandler=_batchSuccessHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                     //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)providerName;
+(unsigned short)provider;
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(void)cancel;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)successHandler;
-(void)setSuccessHandler:(/*^block*/ id)arg1 ;
-(void)reverseGeocode:(id)arg1 success:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(/*^block*/ id)batchSuccessHandler;
-(void)setBatchSuccessHandler:(/*^block*/ id)arg1 ;
-(void)forwardGeocode:(id)arg1 success:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
@end

