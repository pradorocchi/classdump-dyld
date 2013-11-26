/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate, NSTimeZone, NSString, NSData, EKPersistentLocation, NSSet;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

@property (nonatomic,copy) NSDate * absoluteDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) double relativeOffset; 
@property (nonatomic,readonly) BOOL isAbsolute; 
@property (assign,nonatomic) int alarmType; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) EKPersistentLocation * location; 
@property (assign,nonatomic) int proximity; 
@property (nonatomic,copy) NSDate * acknowledgedDate; 
@property (assign,getter=isDefaultAlarm,nonatomic) BOOL defaultAlarm; 
@property (nonatomic,retain) EKPersistentAlarm * originalAlarm; 
@property (nonatomic,copy) NSSet * snoozedAlarms; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)validate:(id*)arg1 ;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(void)setOriginalAlarm:(id)arg1 ;
-(BOOL)isAbsolute;
-(double)relativeOffset;
-(void)setAbsoluteDate:(id)arg1 ;
-(id)absoluteDate;
-(int)proximity;
-(id)originalAlarm;
-(void)setProximity:(int)arg1 ;
-(id)acknowledgedDate;
-(BOOL)isDefaultAlarm;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(id)snoozedAlarms;
-(void)setSnoozedAlarms:(id)arg1 ;
-(int)alarmType;
-(void)setAlarmType:(int)arg1 ;
-(int)entityType;
-(id)init;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)UUID;
-(id)location;
-(id)timeZone;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(id)owner;
-(void)setLocation:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
@end

