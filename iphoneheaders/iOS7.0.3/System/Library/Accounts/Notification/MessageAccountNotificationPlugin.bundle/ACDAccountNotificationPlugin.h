/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:30:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;
@end

