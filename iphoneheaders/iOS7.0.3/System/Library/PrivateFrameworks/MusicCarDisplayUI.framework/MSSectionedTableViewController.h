/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MSTableViewController.h>

@interface MSSectionedTableViewController : MSTableViewController {

	unsigned* _offsetOfSection;

}

@property (nonatomic,readonly) BOOL isSectioning; 
@property (nonatomic,readonly) unsigned countOfActions; 
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(BOOL)isSectioning;
-(unsigned)countOfActions;
-(unsigned)rowAtIndexPath:(id)arg1 ;
@end

