/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSData, EKPersistentCalendarItem;

@interface EKPersistentEventAction : EKPersistentObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModTag; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
-(id)externalFolderID;
-(void)setExternalFolderID:(id)arg1 ;
-(id)externalScheduleID;
-(void)setExternalScheduleID:(id)arg1 ;
-(id)externalModTag;
-(void)setExternalModTag:(id)arg1 ;
-(int)entityType;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

