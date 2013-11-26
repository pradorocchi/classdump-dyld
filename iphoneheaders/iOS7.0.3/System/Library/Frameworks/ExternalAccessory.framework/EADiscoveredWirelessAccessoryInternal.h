/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol EADiscoveredWirelessAccessoryDelegate;
@class NSString, ;

@interface EADiscoveredWirelessAccessoryInternal : NSObject {

	NSString* _name;
	BOOL _connected;
	<EADiscoveredWirelessAccessoryDelegate>* _delegate;

}

@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) <EADiscoveredWirelessAccessoryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL connected;                                                            //@synthesize connected=_connected - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
@end

