/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/XPCServices/com.apple.ContactsService.xpc/com.apple.ContactsService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Contacts/CNXContactStore.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>

@interface CNSContactStore : NSObject <CNXContactStore, NSXPCListenerDelegate>
+(id)sharedStore;
-(id)_valuesForProperty:(int)arg1 record:(void*)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)allContacts:(/*^block*/ id)arg1 ;
@end

