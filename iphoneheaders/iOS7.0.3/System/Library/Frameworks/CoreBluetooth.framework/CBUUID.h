/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData;

@interface CBUUID : NSObject <NSCopying> {

	NSData* _data;
	NSRange _range;

}

@property (nonatomic,@dynamic,readonly) NSData * data; 
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(id)UUIDWithString:(id)arg1 ;
+(id)UUIDWithData:(id)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
@end

