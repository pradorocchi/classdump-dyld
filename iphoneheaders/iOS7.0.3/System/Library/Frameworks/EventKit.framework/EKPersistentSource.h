/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKPersistentObject.h>

@class EKSourceConstraints, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	EKSourceConstraints* _constraints;

}

@property (assign,nonatomic) NSString * UUID; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (nonatomic,readonly) EKSourceConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(id)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(id)arg1 ;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(int)entityType;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(BOOL)isEnabled;
-(id)UUID;
-(void)setEnabled:(BOOL)arg1 ;
-(id)title;
-(id)constraints;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)reset;
-(void)setUUID:(id)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(BOOL)refresh;
@end

