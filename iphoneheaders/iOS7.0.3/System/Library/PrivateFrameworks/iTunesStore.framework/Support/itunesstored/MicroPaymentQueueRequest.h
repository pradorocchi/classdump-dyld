/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class StoreKitClientIdentity, NSLock, NSNumber;

@interface MicroPaymentQueueRequest : NSObject <NSCopying> {

	StoreKitClientIdentity* _clientIdentity;
	NSLock* _lock;
	BOOL _needsAuthentication;
	NSNumber* _rangeEndIdentifier;
	NSNumber* _rangeStartIdentifier;
	NSNumber* _userIdentifier;

}

@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (assign) BOOL needsAuthentication; 
@property (readonly) int URLBagType; 
@property (readonly) BOOL usesSoftwareMap; 
@property (retain) NSNumber * rangeEndIdentifier; 
@property (retain) NSNumber * rangeStartIdentifier; 
@property (retain) NSNumber * userIdentifier; 
-(id)clientIdentity;
-(void)setClientIdentity:(id)arg1 ;
-(BOOL)usesSoftwareMap;
-(id)newStoreURLOperation:(id*)arg1 ;
-(id)_ntsQueryParameters:(id*)arg1 ;
-(id)_copyApplicationIdentity:(id*)arg1 ;
-(id)rangeEndIdentifier;
-(id)rangeStartIdentifier;
-(void)setRangeEndIdentifier:(id)arg1 ;
-(void)setRangeStartIdentifier:(id)arg1 ;
-(id)userIdentifier;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(int)URLBagType;
-(void)setUserIdentifier:(id)arg1 ;
@end

