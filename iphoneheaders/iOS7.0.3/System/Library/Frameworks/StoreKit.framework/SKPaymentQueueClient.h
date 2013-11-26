/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _storeExternalVersion;
	NSNumber* _storeItemIdentifier;
	NSString* _vendorIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;              //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;               //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
-(id)bundleVersion;
-(id)storeItemIdentifier;
-(void)setStoreExternalVersion:(id)arg1 ;
-(void)setStoreItemIdentifier:(id)arg1 ;
-(void)setVendorIdentifier:(id)arg1 ;
-(id)storeExternalVersion;
-(id)vendorIdentifier;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end

