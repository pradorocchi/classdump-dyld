/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) int packetNumber; 
@property (nonatomic,copy) NSArray * packets; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)speechPacket;
+(id)speechPacketWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(int)packetNumber;
-(void)setPacketNumber:(int)arg1 ;
-(id)packets;
-(void)setPackets:(id)arg1 ;
@end

