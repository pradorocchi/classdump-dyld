/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <Preferences/PSEditableListController.h>

@class NSSet;

@interface APKnownNetworksController : PSEditableListController {

	CFLocaleRef _locale;
	CFDateFormatterRef _formatter;
	NSSet* _managedNetworkNames;

}
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)_createFormatter;
-(void)removeNetwork:(id)arg1 ;
-(id)specifiers;
@end

