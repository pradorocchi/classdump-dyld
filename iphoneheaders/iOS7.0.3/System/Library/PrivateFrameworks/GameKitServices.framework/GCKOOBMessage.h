/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding> {

	unsigned type;
	unsigned band;
	NSData* data;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)type;
-(id)data;
-(unsigned)band;
@end

