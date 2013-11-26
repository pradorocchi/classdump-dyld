/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface RTStateModelEarliestLatestEl : NSObject <NSSecureCoding> {

	double _earliestEl_s;
	double _latestEl_s;

}

@property (assign,nonatomic) double earliestEl_s;              //@synthesize earliestEl_s=_earliestEl_s - In the implementation block
@property (assign,nonatomic) double latestEl_s;                //@synthesize latestEl_s=_latestEl_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEarliest:(double)arg1 andLatest:(double)arg2 ;
-(double)earliestEl_s;
-(double)latestEl_s;
-(void)setEarliestEl_s:(double)arg1 ;
-(void)setLatestEl_s:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end

