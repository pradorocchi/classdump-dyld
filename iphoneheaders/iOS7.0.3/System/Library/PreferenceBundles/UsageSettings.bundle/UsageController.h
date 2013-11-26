/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSTimer, NSString, NSMutableArray, NSDate, CloudStorageGroupController;

@interface UsageController : PSListController {

	int _fullyChargedToken;
	int _pluggedInToken;
	int _isCharged;
	int _isPlugged;
	float _standbySeconds;
	float _usageSeconds;
	BOOL _trusted;
	PSSpecifier* _textSpecifier;
	PSSpecifier* _usageSpecifier;
	PSSpecifier* _standbySpecifier;
	NSTimer* _timer;
	NSString* _notTrustedString;
	NSString* _chargingString;
	NSMutableArray* _storageSpecifiers;
	NSDate* _storageExpiry;
	double _timeoutLimit;
	BOOL _showingAllStorage;
	BOOL _storageLookupInProgress;
	PSSpecifier* _storageGroup;
	PSSpecifier* _musicSpecifier;
	PSSpecifier* _videoSpecifier;
	PSSpecifier* _photosSpecifier;
	PSSpecifier* _storageShowAll;
	CloudStorageGroupController* _cloudGroup;

}
-(void)prepareForSnapshot;
-(id)standbyElapsed:(id)arg1 ;
-(id)usageElapsed:(id)arg1 ;
-(void)showAllStorage;
-(id)_storageGroupSpecifier;
-(void)backgrounded;
-(void)addStorageSpecifiers:(id)arg1 ;
-(id)storageSpecifiers;
-(void)_pluggedInStateChanged;
-(void)_fullyChargedStateChanged;
-(Class)usageDetailControllerForBundleID:(id)arg1 ;
-(void)foregrounded;
-(void)removeStorageSpecifier:(id)arg1 ;
-(id)appSize:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)update:(id)arg1 ;
-(void)startTimer;
-(void)updateUI:(BOOL)arg1 ;
-(void)stopTimer;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)didLock;
-(void)didUnlock;
@end

