/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <EventKitUI/EKShareeViewControllerDelegate.h>
#import <EventKitUI/EKShareePickerViewControllerDelegate.h>

@class NSMutableArray;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {

	NSMutableArray* _shareeCells;

}

@property (nonatomic,retain) NSMutableArray * shareeCells;              //@synthesize shareeCells=_shareeCells - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(unsigned)numberOfSubitems;
-(id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3 ;
-(id)_stringForShareeStatus:(int)arg1 ;
-(id)_stringForShareeAccessLevel:(int)arg1 ;
-(id)shareeCells;
-(id)_addPersonCell;
-(void)_popBackToCalendarEditor:(BOOL)arg1 ;
-(void)shareeViewControllerDidChangeAccessLevel:(id)arg1 ;
-(void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)eventStoreForShareePickerViewController:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(void)setShareeCells:(id)arg1 ;
-(void)reset;
-(id)headerTitle;
-(void).cxx_destruct;
@end

