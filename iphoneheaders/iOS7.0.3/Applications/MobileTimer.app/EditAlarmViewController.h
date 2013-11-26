/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EditAlarmViewControllerDelegate;
@class , EditAlarmView, Alarm;

@interface EditAlarmViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	<EditAlarmViewControllerDelegate>* _delegate;
	EditAlarmView* _editAlarmView;
	BOOL _edited;
	BOOL _editingFinished;
	BOOL _newAlarm;
	Alarm* _alarm;
	int _editingAlarmSetting;

}

@property (nonatomic,readonly) Alarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic) <EditAlarmViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)desiredContentSize;
-(id)initWithAlarm:(id)arg1 ;
-(void)_doneButtonClicked:(id)arg1 ;
-(void)handleSuspend;
-(void)handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg1 ;
-(void)markAsEdited;
-(void)_snoozeControlChanged:(id)arg1 ;
-(void)startEditingSetting:(int)arg1 ;
-(id)alarm;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

