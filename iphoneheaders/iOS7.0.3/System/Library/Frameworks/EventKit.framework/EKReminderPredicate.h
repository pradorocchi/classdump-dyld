/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicate.h>

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {

	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	BOOL _useCompletionDateAsAlternate;
	BOOL _useDueDateAsCompletionDate;
	NSString* _title;
	NSString* _listTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	int _sortOrder;
	unsigned _maxResults;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * listTitle;                           //@synthesize listTitle=_listTitle - In the implementation block
@property (assign,nonatomic) BOOL limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) BOOL useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) BOOL useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                          //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) unsigned maxResults;                            //@synthesize maxResults=_maxResults - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
-(BOOL)completed;
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(void)setUseDueDateAsCompletionDate:(BOOL)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(BOOL)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setDueAfter:(id)arg1 ;
-(void)setDueBefore:(id)arg1 ;
-(void)setUseCompletionDateAsAlternate:(BOOL)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(void)setListTitle:(id)arg1 ;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(id)listTitle;
-(BOOL)limitToCompletedOrIncomplete;
-(id)dueAfter;
-(id)dueBefore;
-(BOOL)useCompletionDateAsAlternate;
-(BOOL)useDueDateAsCompletionDate;
-(int)sortOrder;
-(unsigned)maxResults;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
@end

