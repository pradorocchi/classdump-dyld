/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/EKCalendar.servicebundle/EKCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class BBBulletin;

@interface EKAlertItem : SBAlertItem {

	BBBulletin* _bulletin;

}

@property (nonatomic,readonly) BBBulletin * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
+(void)_addActiveItem:(id)arg1 ;
+(void)_removeActiveItem:(id)arg1 ;
+(id)activeAlertItems;
+(id)_activeItems;
-(id)initWithBulletin:(id)arg1 ;
-(id)urlForReveal;
-(void)revealEvent;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(void)dealloc;
-(id)init;
-(void)didPresentAlertView:(id)arg1 ;
-(id)bulletin;
-(void)_playPresentationSound;
-(id)lockLabel;
-(void)performUnlockAction;
-(void)didDeactivateForReason:(int)arg1 ;
-(void).cxx_destruct;
-(BOOL)dismissOnLock;
@end

