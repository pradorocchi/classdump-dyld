/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PSController <NSObject>
@required
-(id)specifier;
-(void)setSpecifier:(id)arg1;
-(void)suspend;
-(void)handleURL:(id)arg1;
-(id)parentController;
-(void)setParentController:(id)arg1;
-(id)rootController;
-(void)setRootController:(id)arg1;
-(void)pushController:(id)arg1;
-(BOOL)canBeShownFromSuspendedState;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1;
@end

