/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSData, NSMutableArray, GEORPUserCredentials;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {

	NSString* _countryCode;
	NSData* _devicePushToken;
	NSString* _hwMachine;
	NSString* _inputLanguage;
	NSString* _osRelease;
	NSMutableArray* _requestElements;
	GEORPUserCredentials* _userCredentials;

}

@property (nonatomic,retain) NSMutableArray * requestElements;                    //@synthesize requestElements=_requestElements - In the implementation block
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                                //@synthesize hwMachine=_hwMachine - In the implementation block
@property (nonatomic,readonly) BOOL hasOsRelease; 
@property (nonatomic,retain) NSString * osRelease;                                //@synthesize osRelease=_osRelease - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                            //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                            //@synthesize devicePushToken=_devicePushToken - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRequestElements:(id)arg1 ;
-(unsigned)requestElementsCount;
-(void)clearRequestElements;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)requestElements;
-(void)setCountryCode:(id)arg1 ;
-(void)setInputLanguage:(id)arg1 ;
-(BOOL)hasInputLanguage;
-(id)inputLanguage;
-(void)setHwMachine:(id)arg1 ;
-(BOOL)hasHwMachine;
-(id)hwMachine;
-(void)setUserCredentials:(id)arg1 ;
-(BOOL)hasUserCredentials;
-(id)userCredentials;
-(void)addRequestElement:(id)arg1 ;
-(id)requestElementAtIndex:(unsigned)arg1 ;
-(void)setOsRelease:(id)arg1 ;
-(void)setDevicePushToken:(id)arg1 ;
-(BOOL)hasOsRelease;
-(id)osRelease;
-(BOOL)hasDevicePushToken;
-(id)devicePushToken;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCountryCode;
-(id)countryCode;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

