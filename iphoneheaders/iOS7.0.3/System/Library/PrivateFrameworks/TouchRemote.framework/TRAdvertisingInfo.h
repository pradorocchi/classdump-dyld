/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSData;

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSData* _pairingPublicKey;
	NSData* _wirelessProximityIdentifier;

}

@property (nonatomic,readonly) NSData * pairingPublicKey;                         //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
@property (nonatomic,readonly) NSData * wirelessProximityIdentifier;              //@synthesize wirelessProximityIdentifier=_wirelessProximityIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)_initWithTXTRecordRepresentation:(id)arg1 ;
-(id)pairingPublicKey;
-(id)_TXTRecordRepresentation;
-(id)wirelessProximityIdentifier;
-(void).cxx_destruct;
@end

