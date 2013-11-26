/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class SBApplication, NSString;

@interface SBProxyRemoteView : UIView {

	id _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	BOOL _remoteViewOpaque;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;              //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (assign,nonatomic) BOOL remoteViewOpaque;                        //@synthesize remoteViewOpaque=_remoteViewOpaque - In the implementation block
@property (assign,nonatomic) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)setRemoteViewIdentifier:(id)arg1 ;
-(void)_setIsConnected:(BOOL)arg1 ;
-(void)connectToContextID:(unsigned)arg1 forIdentifier:(id)arg2 application:(id)arg3 ;
-(void)noteConnectionLost;
-(BOOL)remoteViewOpaque;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)didMoveToSuperview;
-(void)setRemoteViewOpaque:(BOOL)arg1 ;
-(id)remoteViewIdentifier;
-(void)disconnect;
@end

