/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MCSMessageOperation.h>

@class NSArray;

@interface _MCSJunk : MCSMessageOperation {

	NSArray* _operations;

}
-(BOOL)willMarkRead;
-(BOOL)willMarkUnread;
-(BOOL)willUnflag;
-(BOOL)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(BOOL)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(BOOL)isRevertibleWithMessages:(id)arg1 ;
-(id)initWithSpecialDestination:(int)arg1 markAsRead:(BOOL)arg2 flagsToSet:(id)arg3 flagsToClear:(id)arg4 ;
-(void)dealloc;
-(id)description;
@end

