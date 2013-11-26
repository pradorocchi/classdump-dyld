/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
-(void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidStart:(id)arg2;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
-(void)client:(id)arg1 installDidStart:(id)arg2;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 installDidFinish:(id)arg2;
@end

