/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/TableViewController.h>
#import <MobileTimer/AlarmDelegate.h>
#import <MobileTimer/AlarmActiveDelegate.h>
#import <MobileTimer/EditAlarmViewControllerDelegate.h>
#import <MobileTimer/StateManagement.h>

@class Alarm;

@interface AlarmViewController : TableViewController <AlarmDelegate, AlarmActiveDelegate, EditAlarmViewControllerDelegate, StateManagement> {

	BOOL _viewVisible;
	Alarm* _alarmToEdit;
	BOOL _didScrollToCurrentTime;

}
-(void)saveScrollPoint;
-(void)showAddView;
-(void)dismissAddViewController:(id)arg1 ;
-(void)showEditViewForRow:(int)arg1 ;
-(void)activeChangedForAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)didEditAlarm:(id)arg1 ;
-(id)noItemsText;
-(float)itemsTableRowHeight;
-(id)addViewController;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)defaultPNGName;
-(int)numberOfItems;
-(void)saveState;
-(void)reloadState;
-(void)alarmDidUpdate:(id)arg1 ;
@end

