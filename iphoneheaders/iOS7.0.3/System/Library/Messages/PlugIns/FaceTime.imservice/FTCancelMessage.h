/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;

}

@property (copy) NSArray * peers;                //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;              //@synthesize reason=_reason - In the implementation block
-(void)setReason:(id)arg1 ;
-(id)bagKey;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)reason;
-(id)peers;
-(void)setPeers:(id)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end

