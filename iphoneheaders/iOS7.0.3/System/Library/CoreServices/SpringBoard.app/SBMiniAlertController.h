/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBApplication, UIView;

@interface SBMiniAlertController : NSObject {

	SBApplication* _displayShowingAnAlert;
	unsigned _sbMiniAlertVisible : 1;
	UIView* _hiddenAlertWindow;

}
+(id)sharedInstance;
-(void)displayWillDismissMiniAlert:(id)arg1 ;
-(BOOL)miniAlertVisible;
-(void)deactivateAlertItemsForDisplay:(id)arg1 ;
-(void)noteMiniAlertStateChanged;
-(void)_setAlertVisibleNotifyState:(BOOL)arg1 ;
-(void)_hideMiniAlertsForApp:(id)arg1 ;
-(void)_setDisplayShowingAnAlert:(id)arg1 ;
-(void)showApplicationMiniAlertsIfNeeded;
-(id)displayShowingAnAlert;
-(void)hideApplicationMiniAlerts;
-(void)displayWillShowMiniAlert:(id)arg1 ;
-(void)displayDidDismissMiniAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)canShowAlerts;
@end

