/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFContactsSearchConsumer <NSObject>
@required
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
-(void)finishedSearchingForType:(int)arg1;
-(void)finishedTaskWithID:(id)arg1;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
@end

