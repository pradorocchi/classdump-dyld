/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileCal/CalendarMessagesViewControllerDelegate.h>
#import <AddressBookUI/ABPersonViewControllerDelegate.h>
#import <EventKitUI/EKEventViewDelegate.h>
#import <MobileCal/PopoverContentView.h>

@class CalendarMessagesViewController, CalendarModel, EKEvent, UINavigationController;

@interface InboxViewController : UIViewController <CalendarMessagesViewControllerDelegate, ABPersonViewControllerDelegate, EKEventViewDelegate, PopoverContentView> {

	BOOL _isShowingDetailView;
	BOOL _showsDoneButton;
	BOOL _hasDismissed;
	/*^block*/ id _doneBlock;
	CalendarMessagesViewController* _messagesViewController;
	CalendarModel* _model;
	EKEvent* _eventToSelect;
	UINavigationController* _embeddedNavigationController;

}

@property (assign,nonatomic) BOOL showsDoneButton;                                                 //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (nonatomic,copy) id doneBlock;                                                           //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,retain) CalendarMessagesViewController * messagesViewController;              //@synthesize messagesViewController=_messagesViewController - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) EKEvent * eventToSelect;                                              //@synthesize eventToSelect=_eventToSelect - In the implementation block
@property (assign,nonatomic) BOOL hasDismissed;                                                    //@synthesize hasDismissed=_hasDismissed - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;                //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
-(id)eventToSelect;
-(void)setMessagesViewController:(id)arg1 ;
-(void)setEmbeddedNavigationController:(id)arg1 ;
-(id)embeddedNavigationController;
-(void)_dismissMessagesViewController;
-(void)pushDetailViewControllerForEvent:(id)arg1 ;
-(BOOL)hasDismissed;
-(/*^block*/ id)doneBlock;
-(void)setHasDismissed:(BOOL)arg1 ;
-(void)calendarNotificationsViewControllerShouldClose:(id)arg1 animated:(BOOL)arg2 ;
-(void)calendarNotificationsViewController:(id)arg1 inspectEvent:(id)arg2 ;
-(id)calendarNotificationsViewControllerRightBarButtonItem:(id)arg1 ;
-(id)initWithModel:(id)arg1 eventToSelect:(id)arg2 ;
-(void)setDoneBlock:(/*^block*/ id)arg1 ;
-(id)messagesViewController;
-(void)setEventToSelect:(id)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)model;
-(BOOL)canDismiss;
-(void)setModel:(id)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(void).cxx_destruct;
@end

