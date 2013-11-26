/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SUDescriptor;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem {

	SUDescriptor* _descriptor;

}

@property (nonatomic,readonly) SUDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(void)activateSoftwareUpdateSettingsDisplay;
-(void)activateDisplayWithURL:(id)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)dealloc;
-(id)updateName;
-(id)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)dismissOnLock;
@end

