/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <CalDAV/CalDAVCalendar.h>

@class NSString, NSURL, NSSet, NSTimeZone, NSDictionary, NSArray, MobileCalDAVPrincipal, NSMutableDictionary, NSMutableArray, CalDiagCalendarCollectionSync;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {

	MobileCalDAVPrincipal* _principal;
	NSString* _calGUID;
	NSString* _calendarURLString;
	BOOL _isDirty;
	BOOL _isSubscribed;
	BOOL _isScheduleInbox;
	BOOL _isScheduleOutbox;
	BOOL _isEnabled;
	BOOL _isAffectingAvailability;
	NSString* _pushKey;
	NSString* _syncToken;
	BOOL _needsResync;
	BOOL _didResync;
	BOOL _needsPublishUpdate;
	NSSet* _sharees;
	NSMutableDictionary* _uniqueIdentifierToRecordIDMap;
	NSMutableDictionary* _URLToRecordIDMap;
	NSMutableDictionary* _URLToEtagMap;
	void* _calCalendar;
	int _mostRecentEventChangeIndex;
	int _mostRecentTaskChangeIndex;
	int _mostRecentAlarmChangeIndex;
	int _mostRecentAttendeeChangeIndex;
	int _mostRecentAttachmentChangeIndex;
	int _mostRecentRecurChangeIndex;
	int _mostRecentEventActionChangeIndex;
	int _mostRecentShareeChangeIndex;
	NSMutableDictionary* _deletedCalendarItems;
	NSArray* _syncActions;
	NSArray* _shareeActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSDictionary* _uuidsToAddActions;
	NSMutableArray* _outstandingTaskGroups;
	/*^block*/ id _syncActionCompletionBlock;
	CalDiagCalendarCollectionSync* _calendarCollectionSyncDiagnostics;
	BOOL _wasModifiedLocally;

}

@property (readonly) <CalDAVPrincipal> * principal;                                                            //@synthesize principal=_principal - In the implementation block
@property (retain) NSString * guid; 
@property (retain) NSURL * calendarURL; 
@property (retain) NSString * title; 
@property (retain) NSString * notes; 
@property (retain) NSString * color; 
@property (retain) NSString * symbolicColorName; 
@property (retain) NSString * pushKey; 
@property (retain) NSURL * owner; 
@property (retain) NSString * ownerDisplayName; 
@property (readonly) NSString * ownerEmailAddress; 
@property (retain) NSSet * calendarUserAddresses; 
@property (retain) NSURL * publishURL; 
@property (retain) NSURL * prePublishURL; 
@property (assign) int order; 
@property (assign) int sharingStatus; 
@property (retain) NSSet * sharees; 
@property (assign) BOOL isTaskContainer; 
@property (assign) BOOL isEventContainer; 
@property (assign) BOOL isSubscribed; 
@property (assign) BOOL isManagedByServer; 
@property (assign) BOOL isScheduleInbox; 
@property (assign) BOOL isScheduleOutbox;                                                                      //@synthesize isScheduleOutbox=_isScheduleOutbox - In the implementation block
@property (assign) BOOL isNotification; 
@property (assign) BOOL isEditable; 
@property (assign) BOOL isRenameable; 
@property (assign) BOOL isEnabled;                                                                             //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign) BOOL isAffectingAvailability;                                                               //@synthesize isAffectingAvailability=_isAffectingAvailability - In the implementation block
@property (assign) BOOL canBePublished; 
@property (assign) BOOL canBeShared; 
@property (retain) NSString * ctag; 
@property (retain) NSDictionary * bulkRequests; 
@property (retain) NSString * syncToken; 
@property (assign) BOOL needsResync;                                                                           //@synthesize needsResync=_needsResync - In the implementation block
@property (assign) BOOL didResync;                                                                             //@synthesize didResync=_didResync - In the implementation block
@property (readonly) NSSet * allItemURLs; 
@property (assign) BOOL isDirty;                                                                               //@synthesize isDirty=_isDirty - In the implementation block
@property (readonly) NSString * displayColor; 
@property (readonly) BOOL isHidden; 
@property (readonly) NSString * accountID; 
@property (assign) BOOL needsPublishUpdate;                                                                    //@synthesize needsPublishUpdate=_needsPublishUpdate - In the implementation block
@property (readonly) NSString * calendarURLString; 
@property (nonatomic,readonly) CalDiagCalendarCollectionSync * calendarCollectionSyncDiagnostics;              //@synthesize calendarCollectionSyncDiagnostics=_calendarCollectionSyncDiagnostics - In the implementation block
@property (retain) NSTimeZone * timeZone; 
@property (assign) BOOL isPoll; 
@property (assign) BOOL isPublished; 
@property (assign) BOOL wasModifiedLocally;                                                                    //@synthesize wasModifiedLocally=_wasModifiedLocally - In the implementation block
@property (readonly) NSArray * syncActions; 
@property (readonly) NSArray * shareeActions; 
@property (readonly) NSDictionary * uuidsToAddActions; 
@property (readonly) NSDictionary * hrefsToModDeleteActions; 
+(int)addedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)modifiedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(int)deletedCalendars:(id*)arg1 inPrincipal:(id)arg2 ;
+(BOOL)clearCalendarChangesToIndex:(int)arg1 inPrincipal:(id)arg2 ;
-(BOOL)isSubscribed;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setCanBePublished:(BOOL)arg1 ;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(int)sharingStatus;
-(void)setSharingStatus:(int)arg1 ;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isPublished;
-(BOOL)canBePublished;
-(BOOL)canBeShared;
-(BOOL)hasEvents;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(BOOL)isEditable;
-(BOOL)isEnabled;
-(id)title;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)timeZone;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
-(id)principal;
-(id)uuidsToAddActions;
-(id)hrefsToModDeleteActions;
-(id)ctag;
-(void)setCtag:(id)arg1 ;
-(id)calendarURL;
-(void)deleteCalendar;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void)setIsDirty:(BOOL)arg1 ;
-(id)calendarUserAddresses;
-(void)setWasModifiedLocally:(BOOL)arg1 ;
-(BOOL)needsPublishUpdate;
-(void)setNeedsPublishUpdate:(BOOL)arg1 ;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 ;
-(void)setCalendarUserAddresses:(id)arg1 ;
-(void)_dropCalStoreContext;
-(void*)getCalCalendar;
-(void*)initCalCalendarWithTitle:(id)arg1 ;
-(BOOL)_updateCalendarOwnerInfo;
-(id)calendarURLString;
-(BOOL)isEventContainer;
-(void)_setSupportsEvents:(BOOL)arg1 supportsTodos:(BOOL)arg2 ;
-(BOOL)isTaskContainer;
-(id)publishURL;
-(id)ownerDisplayName;
-(BOOL)isRenameable;
-(CalRecordIDRef)recordIDForUniqueIdentifier:(id)arg1 ;
-(void)setUniqueIdentifier:(id)arg1 forRecordID:(CalRecordIDRef)arg2 ;
-(void*)_copyCalItemWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(void*)_copyCalItemWithExternalID:(id)arg1 ;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(id)calendarCollectionSyncDiagnostics;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(id)ownerEmailAddress;
-(void)_addCalendarItemWithRowID:(int)arg1 toArrayIfNeeded:(id)arg2 withChangeRowid:(int)arg3 changeType:(id)arg4 ;
-(int)_addAddedItemsOfType:(int)arg1 toArray:(id)arg2 ;
-(int)_gatherModifiedItemsFromCalChangesCall:(/*function pointer*/ void*)arg1 forType:(id)arg2 inArray:(id)arg3 ;
-(int)_gatherModifiedTasksInArray:(id)arg1 ;
-(int)_gatherModifiedEventsInArray:(id)arg1 ;
-(id)_itemPropertyDictForItemAtIndex:(long)arg1 withChangedIDs:(CFArrayRef)arg2 withChangedRowids:(CFArrayRef)arg3 withExternalIDs:(CFArrayRef)arg4 uniqueIdentifiers:(CFArrayRef)arg5 significantAttributeChanges:(CFArrayRef)arg6 oldCalendarIDs:(CFArrayRef)arg7 ;
-(int)_gatherDeletedChanges:(/*function pointer*/ void*)arg1 inDictionary:(id)arg2 ;
-(void)_clearChangesAtIndices:(id)arg1 withClearCall:(/*function pointer*/ void*)arg2 forType:(id)arg3 ;
-(void)_clearChangesFromItem:(id)arg1 ;
-(void)_forceRefreshNextSync;
-(void)_collectShareeActions;
-(void)_addShareeWithRowID:(id)arg1 toDictionaryIfNeeded:(id)arg2 ;
-(id)copyDeletedItems;
-(id)copyAddedItems;
-(id)_createActionsForItems:(id)arg1 withAction:(int)arg2 alreadySentItems:(id)arg3 shouldSave:(BOOL*)arg4 ;
-(id)copyModifiedItems;
-(id)_copyDeletedEventActions;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg1 ;
-(id)copyAllItems;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg1 ;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)clearShareeActions;
-(void)syncDidFinishWithError:(id)arg1 ;
-(void)putAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)deleteAction:(id)arg1 completedWithError:(id)arg2 ;
-(void)setCalendarURL:(id)arg1 ;
-(void)setOwnerDisplayName:(id)arg1 ;
-(void)setPublishURL:(id)arg1 ;
-(id)prePublishURL;
-(void)setPrePublishURL:(id)arg1 ;
-(void)setIsTaskContainer:(BOOL)arg1 ;
-(void)setIsEventContainer:(BOOL)arg1 ;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(BOOL)isManagedByServer;
-(void)setIsManagedByServer:(BOOL)arg1 ;
-(BOOL)isScheduleInbox;
-(void)setIsScheduleInbox:(BOOL)arg1 ;
-(BOOL)isScheduleOutbox;
-(void)setIsScheduleOutbox:(BOOL)arg1 ;
-(BOOL)isNotification;
-(void)setIsNotification:(BOOL)arg1 ;
-(BOOL)isPoll;
-(void)setIsPoll:(BOOL)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(void)setIsRenameable:(BOOL)arg1 ;
-(BOOL)isAffectingAvailability;
-(void)setIsAffectingAvailability:(BOOL)arg1 ;
-(BOOL)wasModifiedLocally;
-(BOOL)needsResync;
-(void)setNeedsResync:(BOOL)arg1 ;
-(id)syncActions;
-(id)shareeActions;
-(id)allItemURLs;
-(id)initWithCalendarURL:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(id)displayColor;
-(id)_calExternalRep;
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(BOOL)didResync;
-(void)setDidResync:(BOOL)arg1 ;
-(id)guid;
-(id)accountID;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(id)owner;
-(BOOL)isDirty;
-(void)flushCaches;
-(void)setOwner:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
@end

