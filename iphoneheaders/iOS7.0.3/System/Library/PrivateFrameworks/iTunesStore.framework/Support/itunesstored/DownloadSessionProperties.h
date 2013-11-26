/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURLAuthenticationChallenge, NSString, NSNumber;

@interface DownloadSessionProperties : NSObject <NSCopying> {

	long long _assetID;
	NSURLAuthenticationChallenge* _authenticationChallenge;
	NSString* _clientIdentifier;
	long long _downloadID;
	NSString* _downloadPhase;
	NSNumber* _duetBudget;
	long long _handlerIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) long long handlerIdentifier;                                       //@synthesize handlerIdentifier=_handlerIdentifier - In the implementation block
@property (assign,nonatomic) long long assetIdentifier;                                           //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                                        //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSString * downloadPhase;                                              //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (nonatomic,copy) NSNumber * duetBudget;                                                 //@synthesize duetBudget=_duetBudget - In the implementation block
@property (nonatomic,retain) NSURLAuthenticationChallenge * authenticationChallenge;              //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
-(long long)assetIdentifier;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 handlerIdentifier:(long long)arg2 ;
-(void)setAssetIdentifier:(long long)arg1 ;
-(void)setAuthenticationChallenge:(id)arg1 ;
-(id)duetBudget;
-(void)setDuetBudget:(id)arg1 ;
-(id)authenticationChallenge;
-(long long)downloadIdentifier;
-(id)downloadPhase;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setDownloadPhase:(id)arg1 ;
-(long long)handlerIdentifier;
-(id)clientIdentifier;
@end

