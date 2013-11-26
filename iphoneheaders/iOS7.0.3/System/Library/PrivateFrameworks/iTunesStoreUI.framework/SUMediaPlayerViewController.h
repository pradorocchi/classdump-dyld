/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPMoviePlayerViewController.h>
#import <iTunesStore/ISOperationDelegate.h>

@class UIView, SUClientInterface, SUMediaPlayerItem, NSMutableArray;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {

	UIView* _backgroundContainerView;
	SUClientInterface* _clientInterface;
	SUMediaPlayerItem* _mediaItem;
	NSMutableArray* _operations;
	int _playerState;

}

@property (nonatomic,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                //@synthesize clientInterface=_clientInterface - In the implementation block
+(void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3 ;
+(void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1 ;
+(BOOL)_URLIsITunesU:(id)arg1 ;
+(void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
-(void)operationFinished:(id)arg1 ;
-(id)copyScriptViewController;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(void)_mediaTypesAvailableNotification:(id)arg1 ;
-(void)_playbackFinishedNotification:(id)arg1 ;
-(void)_bookmarkCurrentTime;
-(void)_insertBackgroundContainerView;
-(void)_prepareMediaItem;
-(void)_loadBackgroundImage;
-(void)_setIsActivePlayer:(BOOL)arg1 ;
-(void)_dequeueOperation:(id)arg1 ;
-(void)_showBackgroundImage:(id)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
-(id)_backgroundContainerView;
-(id)mediaPlayerItem;
@end

