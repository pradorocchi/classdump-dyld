/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountSettings/ASRuntimeFixProtocol.h>

@class NSSet;

@interface ASSRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	BOOL _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}
-(void)dealloc;
-(id)init;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(BOOL)arg1 ;
-(id)supportedAccountTypes;
-(BOOL)_cleanupAccountClass:(id)arg1 ;
@end

