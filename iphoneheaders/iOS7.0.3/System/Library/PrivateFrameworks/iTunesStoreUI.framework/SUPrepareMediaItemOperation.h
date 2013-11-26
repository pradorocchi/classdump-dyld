/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(id)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end

