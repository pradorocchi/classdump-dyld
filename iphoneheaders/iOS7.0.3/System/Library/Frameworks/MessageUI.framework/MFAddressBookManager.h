/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MessageUI/MessageUI-Structs.h>
@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	int _lock;
	CFDictionaryRef _clients;

}
+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(void)_applicationResumed:(id)arg1 ;
-(void)_handleAddressBookChangeNotification;
-(id)_clientWeakReferences;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void*)addressBook;
@end

