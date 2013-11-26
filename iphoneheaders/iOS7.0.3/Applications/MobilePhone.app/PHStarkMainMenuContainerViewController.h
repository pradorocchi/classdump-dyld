/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhone/PHStarkTelephonyStateMonitorDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, UIView, UIViewController, PHStarkTelephonyStateMonitor;

@interface PHStarkMainMenuContainerViewController : UIViewController <PHStarkTelephonyStateMonitorDelegate, UITabBarControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSArray* _rootViewControllerDictionaries;
	UIView* _centralAreaContainerView;
	UIViewController* _selectedViewController;
	PHStarkTelephonyStateMonitor* _telephonyStateMonitor;

}

@property (retain) NSArray * rootViewControllerDictionaries;                          //@synthesize rootViewControllerDictionaries=_rootViewControllerDictionaries - In the implementation block
@property (retain) UIView * centralAreaContainerView;                                 //@synthesize centralAreaContainerView=_centralAreaContainerView - In the implementation block
@property (retain) UIViewController * selectedViewController;                         //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (retain) PHStarkTelephonyStateMonitor * telephonyStateMonitor;              //@synthesize telephonyStateMonitor=_telephonyStateMonitor - In the implementation block
-(void)telephonyStateDidChangeToState:(int)arg1 ;
-(void)_initializeRootViewControllerDictionaries;
-(void)setTelephonyStateMonitor:(id)arg1 ;
-(id)telephonyStateMonitor;
-(void)setCentralAreaContainerView:(id)arg1 ;
-(id)centralAreaContainerView;
-(id)rootViewControllerDictionaries;
-(void)setRootViewControllerDictionaries:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)selectedViewController;
-(void)setSelectedViewController:(id)arg1 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
@end

