/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class UIView;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {

	UIView* _activityAccessoryView;

}
-(BOOL)shouldShowInLockScreen;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)undimsScreen;
-(BOOL)behavesSuperModally;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)dismissOnLock;
@end

