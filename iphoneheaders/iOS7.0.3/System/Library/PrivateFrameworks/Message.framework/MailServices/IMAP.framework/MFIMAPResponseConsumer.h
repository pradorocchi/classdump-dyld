/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {

	NSMutableDictionary* _consumersBySection;

}
-(void)dealloc;
-(void)done;
-(void)addConsumer:(id)arg1 forSection:(id)arg2 ;
-(void)appendData:(id)arg1 forSection:(id)arg2 ;
-(id)consumersBySection;
@end

