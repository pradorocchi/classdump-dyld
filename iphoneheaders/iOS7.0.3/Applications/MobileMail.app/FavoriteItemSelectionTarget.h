/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol FavoriteItemSelectionTarget <NSObject>
@required
-(void)setSelectedSourceType:(unsigned)arg1;
-(void)selectCombinedMailboxWithType:(int)arg1 animated:(BOOL)arg2;
-(void)selectMailbox:(id)arg1 animated:(BOOL)arg2;
-(void)selectAccount:(id)arg1 animated:(BOOL)arg2;
-(void)selectCombinedInboxWithSourceType:(unsigned)arg1 animated:(BOOL)arg2;
-(void)showVIPSettingsAnimated:(BOOL)arg1;
@end

