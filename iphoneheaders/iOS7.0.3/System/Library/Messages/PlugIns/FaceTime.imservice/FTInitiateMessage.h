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

@class NSData, NSNumber, NSArray, NSDictionary;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
	NSArray* _canonicalizedPeers;
	NSDictionary* _regionInformation;

}

@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfNatIP;                            //@synthesize selfNatIP=_selfNatIP - In the implementation block
@property (copy) NSDictionary * regionInformation;              //@synthesize regionInformation=_regionInformation - In the implementation block
@property (copy) NSArray * peers;                               //@synthesize peers=_peers - In the implementation block
@property (copy) NSArray * canonicalizedPeers;                  //@synthesize canonicalizedPeers=_canonicalizedPeers - In the implementation block
-(void)setSelfBlob:(id)arg1 ;
-(id)selfBlob;
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)canonicalizedPeers;
-(void)setSelfPushToken:(id)arg1 ;
-(void)setSelfNATType:(id)arg1 ;
-(void)setSelfNatIP:(id)arg1 ;
-(void)setRegionInformation:(id)arg1 ;
-(id)selfPushToken;
-(id)selfNATType;
-(id)regionInformation;
-(id)selfNatIP;
-(void)setCanonicalizedPeers:(id)arg1 ;
-(id)peers;
-(void)setPeers:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end

