/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/MBConnectionManager.h>

@class NSError;

@interface MBDeviceManager : MBConnectionManager {

	NSError* _error;
	int _checkinMethod;
	double _protocolVersion;

}
+(id)deviceManagerWithCheckinMethod:(int)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(id)initWithCheckinMethod:(int)arg1 ;
-(id)_checkinWithConnectionInfo:(id)arg1 ;
-(id)_acceptConnectionWithInfo:(id)arg1 ;
-(void)_sendResponseMessage:(id)arg1 ;
-(void)_sendSuccessResponseMessageWithProperties:(id)arg1 ;
-(void)_sendResponseMessageWithCode:(int)arg1 description:(id)arg2 ;
-(void)_handleHelloMessage:(id)arg1 ;
-(void)_handleBackupMessage:(id)arg1 ;
-(void)_handleRestoreMessage:(id)arg1 ;
-(void)_handleChangePasswordMessage:(id)arg1 ;
-(void)_handleExtractMessage:(id)arg1 ;
-(void)_handleRemoveMessage:(id)arg1 ;
-(void)_handleInfoMessage:(id)arg1 ;
-(void)_handleListMessage:(id)arg1 ;
-(void)_handleUnbackMessage:(id)arg1 ;
-(void)_enableCloudBackupMessage:(id)arg1 ;
-(void)_uploadOldSessionLogs;
-(id)_settingsContextWithSourceIdentifier:(id)arg1 targetIdentifier:(id)arg2 applicationIDs:(id)arg3 options:(id)arg4 ;
-(void)_uploadSessionLog;
-(void)_sendResponseMessageWithError:(id)arg1 ;
-(void)_sendSuccessResponseMessage;
-(void)_uploadSessionLogPaths:(id)arg1 ;
-(void)_acceptFailedCallback:(id)arg1 ;
-(void)_disconnectCallback:(id)arg1 ;
-(void)_processMessageCallback:(id)arg1 ;
-(void)dealloc;
-(id)run;
-(id)close;
-(void)_stop;
-(id)open;
@end

