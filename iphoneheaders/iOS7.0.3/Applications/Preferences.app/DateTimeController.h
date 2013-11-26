/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, NSTimer, PSSpecifier;

@interface DateTimeController : PSListController <UIPopoverControllerDelegate> {

	UIPopoverController* _setDateAndTimePopoverController;
	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	BOOL _localeForces24HourTime;
	BOOL _setDateAndTimePopoverShouldRePresent;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;

}

@property (retain) PSSpecifier * timeZoneSpecifier;                 //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;               //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;              //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
-(void)localeChanged:(id)arg1 ;
-(void)reloadTimezoneSpinner;
-(void)setTimeZoneSpecifier:(id)arg1 ;
-(void)setTimePickerSpecifier:(id)arg1 ;
-(void)setCurrentTimeSpecifier:(id)arg1 ;
-(void)_createDateTimeFormatters;
-(id)timeZoneSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2 ;
-(id)currentTimeSpecifier;
-(id)makeCurrentTimeSpecifier;
-(id)timePickerSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)makeTimePickerSpecifier;
-(void)_updateCurrentTime;
-(id)is24HourTime:(id)arg1 ;
-(id)currentTimeString;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)startTimer;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(void)newCarrierNotification;
-(void)significantTimeChange:(id)arg1 ;
-(void)stopTimer;
-(id)specifiers;
@end

