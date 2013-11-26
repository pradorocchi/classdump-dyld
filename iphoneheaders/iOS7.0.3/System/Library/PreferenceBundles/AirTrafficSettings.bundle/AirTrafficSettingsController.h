/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirTrafficSettings/AirTrafficSettingsBaseController.h>
#import <AirTrafficSettings/AirTrafficSettingsDataSourceDelegate.h>

@class NSString;

@interface AirTrafficSettingsController : AirTrafficSettingsBaseController <AirTrafficSettingsDataSourceDelegate> {

	NSString* _hostIdentifier;

}
-(void)_resumed:(id)arg1 ;
-(void)_suspended:(id)arg1 ;
-(void)toggleSync:(id)arg1 ;
-(id)_headerText;
-(void)_updateSyncButton:(id)arg1 ;
-(void)dataSource:(id)arg1 updatedSyncingState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 updatedConnectedState:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 updatedProgress:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void).cxx_destruct;
@end

