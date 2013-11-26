/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class SBAlertWindowViewController, NSMapTable;

@interface SBAlertWindow : SBWindow {

	SBAlertWindowViewController* _rootViewController;
	NSMapTable* _alertToDisplayMap;

}
+(int)jailBehavior;
-(id)initWithScreen:(id)arg1 rootViewController:(id)arg2 ;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)arg1 ;
-(BOOL)hasActiveAlertsOrDisplays;
-(int)stackedDisplayCount;
-(void)displayAlert:(id)arg1 ;
-(BOOL)deactivateAlert:(id)arg1 ;
-(void)noteInterfaceOrientationChangingTo:(int)arg1 animated:(BOOL)arg2 ;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isOpaque;
@end

