/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSEditableListController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class PSSpecifier, NSArray, NSMutableDictionary;

@interface SafariStorageSettingsController : PSEditableListController <UIActionSheetDelegate> {

	id _modalAlert;
	PSSpecifier* _totalUsageSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSMutableDictionary* _domainSpecifiers;
	NSArray* _sortedDomains;
	BOOL _cancelDomainSpecifierUpdate;

}
+(void)deleteAllData;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)_getSpecifierDiskUsage:(id)arg1 ;
-(void)_deleteOriginData:(id)arg1 ;
-(void)_addDomain:(id)arg1 withUsage:(unsigned long long)arg2 toDictionary:(id)arg3 ;
-(id)_totalUsageString;
-(void)showAllDomainSpecifiers;
-(void)_addCookieDomainsToDictionary:(id)arg1 ;
-(void)_updateTotalUsageSpecifier;
-(void)_addDomainSpecifiers;
-(void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_createDomainSpecifiers;
-(void)_showDeleteAllOriginsAlert;
-(void)_deleteAllOrigins;
-(id)specifiers;
@end

