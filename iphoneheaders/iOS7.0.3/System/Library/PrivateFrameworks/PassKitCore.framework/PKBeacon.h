/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSUUID * proximityUUID;               //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * major;                     //@synthesize major=_major - In the implementation block
@property (nonatomic,retain) NSNumber * minor;                     //@synthesize minor=_minor - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)proximityUUID;
-(id)major;
-(id)minor;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)relevantText;
-(void)setRelevantText:(id)arg1 ;
-(void)setProximityUUID:(id)arg1 ;
-(void)setMajor:(id)arg1 ;
-(void)setMinor:(id)arg1 ;
-(void)setProximityUUIDWithString:(id)arg1 ;
-(id)proximityUUIDAsString;
@end

