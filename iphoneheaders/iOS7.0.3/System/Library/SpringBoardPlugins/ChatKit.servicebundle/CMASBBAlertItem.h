/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class BBBulletin;

@interface CMASBBAlertItem : SBAlertItem {

	BBBulletin* _bulletin;
	BOOL _alreadyPlayedAlertTone;
	BOOL _overrideDefaultDisplayOrder;

}

@property (nonatomic,retain) BBBulletin * bulletin;                         //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL overrideDefaultDisplayOrder;              //@synthesize overrideDefaultDisplayOrder=_overrideDefaultDisplayOrder - In the implementation block
-(void)setOverrideDefaultDisplayOrder:(BOOL)arg1 ;
-(BOOL)overrideDefaultDisplayOrder;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(id)bulletin;
-(void)setBulletin:(id)arg1 ;
-(Class)alertSheetClass;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)reappearsAfterUnlock;
-(BOOL)preventInterruption;
@end

