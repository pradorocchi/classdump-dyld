/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicPlaybackContext.h>

@class RadioStation, MPAVItem;

@interface MusicRadioPlaybackContext : MusicPlaybackContext {

	RadioStation* _station;
	unsigned _initialTrackIndex;
	MPAVItem* _prefixItem;

}

@property (nonatomic,readonly) RadioStation * station;                //@synthesize station=_station - In the implementation block
@property (assign,nonatomic) unsigned initialTrackIndex;              //@synthesize initialTrackIndex=_initialTrackIndex - In the implementation block
@property (nonatomic,retain) MPAVItem * prefixItem;                   //@synthesize prefixItem=_prefixItem - In the implementation block
+(Class)queueFeederClass;
-(id)station;
-(int)playbackMode;
-(id)initWithStation:(id)arg1 ;
-(void)setPrefixItem:(id)arg1 ;
-(id)prefixItem;
-(unsigned)initialTrackIndex;
-(void)setInitialTrackIndex:(unsigned)arg1 ;
-(void).cxx_destruct;
@end

