/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventOrganizerDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;

}
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(void)reset;
-(void).cxx_destruct;
@end

