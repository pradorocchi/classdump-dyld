/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double magneticHeading; 
@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithClientHeading:(SCD_Struct_CL6)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)timestamp;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(double)x;
-(double)y;
-(double)z;
-(id)shortDescription;
-(double)trueHeading;
-(double)magneticHeading;
-(double)headingAccuracy;
@end

