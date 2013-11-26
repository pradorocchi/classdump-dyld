/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;
@class NSObject, MediaControlClient, ;

@interface AirPlayRemoteSlideshow : NSObject {

	NSObject<OS_dispatch_queue>* _internalQueue;
	MediaControlClient* _client;
	<AirPlayRemoteSlideshowDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _userQueue;
	BOOL _started;
	double _startTime;

}

@property (assign,nonatomic) <AirPlayRemoteSlideshowDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setDispatchQueue:(id)arg1 ;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/ id)arg2 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/ id)arg1 ;
@end

