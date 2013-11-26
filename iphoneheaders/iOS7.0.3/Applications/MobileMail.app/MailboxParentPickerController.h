/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>

@class MailboxParentPickerTableController;

@interface MailboxParentPickerController : UITableViewController {

	MailboxParentPickerTableController* _tableController;

}
-(id)initWithMailboxUid:(id)arg1 parentMailbox:(id)arg2 account:(id)arg3 ;
-(void)setMailboxSelectionTarget:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

