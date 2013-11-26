/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/TimerControlsView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol TimerControlsTarget;
@class UITableView, MTTimerPickerView, UITableViewCell, MTTimerButtonsView, NSString, ;

@interface MTTimerPhoneControlsView : TimerControlsView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	MTTimerPickerView* _pickerView;
	UITableViewCell* _toneChooserCell;
	MTTimerButtonsView* _buttonsView;
	NSString* _toneName;
	<TimerControlsTarget>* _target;
	BOOL _isInInitialState;

}
-(void)setTimerToneName:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(id)initWithTarget:(id)arg1 ;
@end

