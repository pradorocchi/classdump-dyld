/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIWindow, RemindersCardStackViewController, RemindersSplitViewController, EKEventStore, NSMutableArray, CLLocationManager, NSMutableDictionary, RemindersCardController, RemindersScheduledListController, NSURL, UIAlertView;

@interface RemindersApp : UIApplication <UIApplicationDelegate, UIAlertViewDelegate> {

	RemindersCardStackViewController* _stackViewController;
	RemindersSplitViewController* _splitViewController;
	EKEventStore* _eventStore;
	NSMutableArray* _sortedCalendars;
	CLLocationManager* _locationManager;
	UIWindow* _window;
	NSMutableDictionary* _controllersByCalendar;
	RemindersCardController* _scheduledCard;
	RemindersScheduledListController* _scheduledList;
	NSURL* _actionToPerform;
	UIAlertView* _actionAlertView;

}

@property (readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)eventStoreChanged:(id)arg1 ;
-(id)reminderURLFromLaunchURL:(id)arg1 openedViaBB:(BOOL*)arg2 ;
-(id)listControllerForCalendarToDisplay:(id)arg1 ;
-(void)adjustStackForTimestamp:(id)arg1 ;
-(void)reenableLocationReminders;
-(id)sortedCalendars;
-(void)archive:(BOOL)arg1 ;
-(void)cancelLocationRequest;
-(CGRect)detailViewContentRect;
-(void)calendarsChangedWithChangedObjectIDs:(id)arg1 ;
-(id)sortedDisplayOrders:(id)arg1 ;
-(int)highestDisplayOrderInSource:(id)arg1 ;
-(void)removeUnnecessaryCachedControllers;
-(id)cardControllerForCalendarToDisplay:(id)arg1 ;
-(id)createReminderInCalendar:(id)arg1 ;
-(void)_alarmsDidFire;
-(void)deleteCalendar:(id)arg1 ;
-(void)moveCalendar:(id)arg1 toSortedIndex:(int)arg2 ;
-(void)assignDisplayOrders:(id)arg1 ;
-(void)calendarsChanged;
-(id)archivedSortedLists;
-(void)startScrollRemindersCardStackTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startShowScheduledRemindersCardTestWithName:(id)arg1 options:(id)arg2 ;
-(void)startScrollScheduledRemindersCardTestWithName:(id)arg1 simulateSync:(BOOL)arg2 options:(id)arg3 ;
-(void)_simulateExternalChange;
-(void)startSearchTestWithName:(id)arg1 options:(id)arg2 ;
-(id)eventStore;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)_extendLaunchTest;
-(void)applicationDidResume;
-(void)applicationDidEndResumeAnimation;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)addCalendar:(id)arg1 ;
-(void).cxx_destruct;
@end

