/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableIndexSet, NSMutableArray, MFMailComposeRecipientView, NSArray;

@interface MFMailComposeCorecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSMutableIndexSet* _selectedIndexes;
	NSMutableArray* _recipients;
	MFMailComposeRecipientView* _recipientView;

}

@property (nonatomic,readonly) NSArray * recipients;                                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) MFMailComposeRecipientView * recipientView;              //@synthesize recipientView=_recipientView - In the implementation block
-(id)initWithRecentComposeRecipients:(id)arg1 ;
-(void)setRecipientView:(id)arg1 ;
-(void)_didTapDoneButton:(id)arg1 ;
-(void)_dismissAndAddSelectedContacts;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(id)recipients;
-(id)recipientView;
@end

