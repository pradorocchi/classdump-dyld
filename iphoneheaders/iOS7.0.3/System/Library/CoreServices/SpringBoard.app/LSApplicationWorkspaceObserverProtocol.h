/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol LSApplicationWorkspaceObserverProtocol <NSObject>
@optional
-(void)applicationInstallsDidCancel:(id)arg1;
-(void)applicationInstallsDidPause:(id)arg1;
-(void)applicationInstallsDidPrioritize:(id)arg1;
-(void)applicationInstallsDidResume:(id)arg1;
-(void)networkUsageChanged:(BOOL)arg1;
-(void)applicationInstallsDidStart:(id)arg1;
-(void)applicationInstallsDidUpdateIcon:(id)arg1;
-(void)applicationInstallsDidChange:(id)arg1;
-(void)applicationsDidInstall:(id)arg1;
-(void)applicationsDidUninstall:(id)arg1;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
@end

