/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebScriptObject, NSLock, NSString;

@interface SUScriptEventListener : NSObject {

	WebScriptObject* _callback;
	NSLock* _lock;
	NSString* _name;
	BOOL _useCapture;

}

@property (retain) WebScriptObject * callback;              //@synthesize callback=_callback - In the implementation block
@property (copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL shouldUseCapture;                   //@synthesize useCapture=_useCapture - In the implementation block
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setShouldUseCapture:(BOOL)arg1 ;
-(BOOL)shouldUseCapture;
@end

