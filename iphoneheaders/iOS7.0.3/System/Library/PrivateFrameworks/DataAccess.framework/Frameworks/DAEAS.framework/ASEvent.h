/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <CoreFoundation/NSCoding.h>
#import <DAEAS/DADataElement.h>

@class ASTimeZone, NSNumber, NSString, NSArray, NSDate, ASEventUID, ASRecurrence;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {

	void* _calRecord;
	ASTimeZone* _timeZone;
	NSNumber* _allDayEvent;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSNumber* _busyStatus;
	NSArray* _categories;
	NSDate* _dTStamp;
	NSDate* _endTime;
	NSString* _location;
	NSNumber* _meetingStatus;
	NSString* _organizerEmail;
	NSString* _organizerName;
	NSNumber* _reminderMinsBefore;
	NSNumber* _sensitivity;
	NSString* _subject;
	NSDate* _startTime;
	NSDate* _tombstoneEndTime;
	ASEventUID* _eventUID;
	NSArray* _attendees;
	NSArray* _attendeesPendingDeletion;
	ASRecurrence* _recurrence;
	NSArray* _exceptions;
	NSNumber* _responseRequested;
	int _meetingResponseToEmailAbout;
	BOOL _calculateNextStatusAsIfMeetingRequest;
	BOOL _shouldUpdateStatus;
	BOOL _cachedOrganizerIsSelf;
	BOOL _haveCheckedOrganizerEmail;
	BOOL _isAttendeeUpdateOnly;
	BOOL _isDTStampUpdateOnly;
	NSNumber* _responseType;

}

@property (retain) ASTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) NSNumber * allDayEvent;                           //@synthesize allDayEvent=_allDayEvent - In the implementation block
@property (nonatomic,retain) NSString * body;                        //@synthesize body=_body - In the implementation block
@property (retain) NSNumber * bodyTruncated;                         //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (retain) NSNumber * busyStatus;                            //@synthesize busyStatus=_busyStatus - In the implementation block
@property (retain) NSArray * categories;                             //@synthesize categories=_categories - In the implementation block
@property (retain) NSDate * dTStamp;                                 //@synthesize dTStamp=_dTStamp - In the implementation block
@property (retain) NSDate * endTime;                                 //@synthesize endTime=_endTime - In the implementation block
@property (retain) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (retain) NSNumber * meetingStatus;                         //@synthesize meetingStatus=_meetingStatus - In the implementation block
@property (retain) NSString * organizerEmail;                        //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (retain) NSString * organizerName;                         //@synthesize organizerName=_organizerName - In the implementation block
@property (retain) NSNumber * reminderMinsBefore;                    //@synthesize reminderMinsBefore=_reminderMinsBefore - In the implementation block
@property (retain) NSNumber * sensitivity;                           //@synthesize sensitivity=_sensitivity - In the implementation block
@property (retain) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (retain) NSDate * startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * tombstoneEndTime;                        //@synthesize tombstoneEndTime=_tombstoneEndTime - In the implementation block
@property (retain) NSArray * attendees;                              //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) ASRecurrence * recurrence;              //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,retain) NSArray * exceptions;                   //@synthesize exceptions=_exceptions - In the implementation block
@property (retain) ASEventUID * eventUID;                            //@synthesize eventUID=_eventUID - In the implementation block
@property (retain) NSArray * attendeesPendingDeletion;               //@synthesize attendeesPendingDeletion=_attendeesPendingDeletion - In the implementation block
@property (retain) NSNumber * responseRequested;                     //@synthesize responseRequested=_responseRequested - In the implementation block
@property (retain) NSNumber * responseType;                          //@synthesize responseType=_responseType - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(void)setSystemTimeZoneNameForUnitTests:(id)arg1 ;
+(id)eventWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
+(void)_setFakeDTStampDateForUnitTests:(id)arg1 ;
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setStartTime:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)body;
-(id)location;
-(id)timeZone;
-(id)categories;
-(void)setSubject:(id)arg1 ;
-(id)startTime;
-(id)subject;
-(void)setBody:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)eventUID;
-(id)uidForCalFramework;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
-(void)setCategories:(id)arg1 ;
-(void)setSensitivity:(id)arg1 ;
-(void)setRecurrence:(id)arg1 ;
-(id)recurrence;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(id)sensitivity;
-(BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)loadCalRecordForAccount:(id)arg1 ;
-(BOOL)saveServerIDToCalendar;
-(BOOL)deleteFromCalendar;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(int)dataclass;
-(void)loadClientIDs;
-(id)bodyTruncated;
-(void)setBodyTruncated:(id)arg1 ;
-(id)allDayEvent;
-(id)_transformedStartDateForCalFramework:(id)arg1 ;
-(void)setEventUID:(id)arg1 ;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setAllDayEvent:(id)arg1 ;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1 ;
-(void)setReminderMinsBefore:(id)arg1 ;
-(void)setOrganizerName:(id)arg1 ;
-(void)setOrganizerEmail:(id)arg1 ;
-(id)_transformedStartDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2 ;
-(id)_transformedEndDateForActiveSync:(id)arg1 isFloating:(BOOL)arg2 ;
-(void)setAttendeesPendingDeletion:(id)arg1 ;
-(void)setExceptions:(id)arg1 ;
-(void)setBusyStatus:(id)arg1 ;
-(void)setDTStamp:(id)arg1 ;
-(void)setMeetingStatus:(id)arg1 ;
-(void)setResponseRequested:(id)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)_loadAttributesFromCalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)setCalEvent:(void*)arg1 ;
-(id)initWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(int)_nextEventStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)_meetingResponseShouldFilterForEmail:(BOOL)arg1 ;
-(id)dTStamp;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(id)endDateForCalFramework;
-(id)reminderMinsBefore;
-(id)organizerName;
-(id)organizerEmail;
-(id)startDateForCalFramework;
-(id)timeZoneNameForCalFramework;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(int)arg2 ;
-(int)_nextEventStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(void*)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(void)_sanitizeLocalExceptionsForAccount:(id)arg1 ;
-(void*)calEvent;
-(void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)arg1 ;
-(void)setShouldUpdateStatus:(BOOL)arg1 ;
-(void)setResponseType:(id)arg1 ;
-(void)informExceptionsThatParentIsReadyForAccount:(id)arg1 ;
-(id)busyStatus;
-(int)CalCalendarItemStatus;
-(id)meetingStatus;
-(BOOL)verifyExternalIds;
-(id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2 ;
-(BOOL)hasOccurrenceInTheFuture;
-(id)attendeesPendingDeletion;
-(id)exceptions;
-(BOOL)_selfIsMoreCorrectThanOtherEvent:(id)arg1 account:(id)arg2 ;
-(id)eventByMergingInLosingEvent:(id)arg1 account:(id)arg2 ;
-(int)calAttendeeStatus;
-(int)calAttendeePendingStatus;
-(int)meetingResponseForAccount:(id)arg1 ;
-(int)meetingResponseForEmail;
-(void)setMeetingResponseForEmail:(int)arg1 ;
-(BOOL)saveDetachedEventsWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)fillOutMissingExternalIds;
-(id)fullOrganizerString;
-(BOOL)purgeAttendeesPendingDeletion;
-(BOOL)isTombstoneEndTimeInFuture;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)eventByMergingInEvent:(id)arg1 account:(id)arg2 ;
-(id)tombstoneEndTime;
-(void)setTombstoneEndTime:(id)arg1 ;
-(id)responseRequested;
-(void)setEndTime:(id)arg1 ;
-(id)endTime;
-(void)setLocation:(id)arg1 ;
-(id)responseType;
@end

