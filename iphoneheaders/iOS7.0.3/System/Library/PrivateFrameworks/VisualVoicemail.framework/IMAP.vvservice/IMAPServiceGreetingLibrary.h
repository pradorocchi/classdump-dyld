/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFMessageLibrary.h>

@class NSMutableArray;

@interface IMAPServiceGreetingLibrary : MFMessageLibrary {

	NSMutableArray* _messages;

}
-(void)dealloc;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(id)messages;
-(void)resetMessages;
@end

