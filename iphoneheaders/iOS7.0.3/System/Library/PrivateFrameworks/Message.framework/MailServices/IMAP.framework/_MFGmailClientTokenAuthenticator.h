/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFSASLAuthenticator.h>

@interface _MFGmailClientTokenAuthenticator : MFSASLAuthenticator {

	BOOL _sentResponse;

}
-(id)saslName;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
@end

