/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>

@class RemindersCardBackgroundView, NSString, RemindersListController;

@interface RemindersCardController : UIViewController {

	RemindersCardBackgroundView* _bgView;
	BOOL _displayed;
	NSString* _ID;
	RemindersListController* _listController;

}

@property (readonly) RemindersCardBackgroundView * backgroundView; 
@property (nonatomic,retain) RemindersListController * listController;              //@synthesize listController=_listController - In the implementation block
+(UIEdgeInsets)backgroundEdgeInsets;
+(CGRect)cardContentRect;
-(id)listController;
-(void)setListController:(id)arg1 ;
-(void)alarmsFired;
-(id)displayedCalendar;
-(void)setBeingDisplayed:(BOOL)arg1 ;
-(void)setBeingDisplayed:(BOOL)arg1 reloadModelIfNeeded:(BOOL)arg2 ;
-(void)cardFinishedPresenting;
-(BOOL)isScheduled;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)backgroundView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)loadView;
-(id)ID;
-(void).cxx_destruct;
@end

