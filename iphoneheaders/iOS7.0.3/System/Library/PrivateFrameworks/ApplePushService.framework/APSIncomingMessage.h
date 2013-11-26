/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ApplePushService/APSMessage.h>

@class NSDate;

@interface APSIncomingMessage : APSMessage

@property (nonatomic,copy) NSDate * timestamp; 
@property (assign,getter=wasFromStorage,nonatomic) BOOL fromStorage; 
@property (assign,getter=wasLastMessageFromStorage,nonatomic) BOOL lastMessageFromStorage; 
@property (assign,nonatomic) int priority; 
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setFromStorage:(BOOL)arg1 ;
-(BOOL)wasLastMessageFromStorage;
-(void)setLastMessageFromStorage:(BOOL)arg1 ;
-(BOOL)wasFromStorage;
@end

