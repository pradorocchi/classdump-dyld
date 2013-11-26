/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSDate, NSString;

@interface SAReminderSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * completionStatus; 
@property (nonatomic,copy) NSDate * dueAfter; 
@property (nonatomic,copy) NSDate * dueBefore; 
@property (nonatomic,copy) NSString * listName; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(void)setDueAfter:(id)arg1 ;
-(void)setDueBefore:(id)arg1 ;
-(id)dueAfter;
-(id)dueBefore;
-(id)groupIdentifier;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
-(id)completionStatus;
-(void)setCompletionStatus:(id)arg1 ;
-(id)listName;
-(void)setListName:(id)arg1 ;
@end

