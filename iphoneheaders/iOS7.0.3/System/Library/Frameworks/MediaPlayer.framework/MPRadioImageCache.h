/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPImageCache.h>

@interface MPRadioImageCache : MPImageCache
+(id)_rawTrackImageForKey:(id)arg1 ;
+(CGSize)_maximumSizeForRadioTracks;
+(void)_cacheRawTrackImage:(id)arg1 forKey:(id)arg2 ;
+(void)registerRadioStationStyle:(id)arg1 ;
+(void)registerRadioTrackStyle:(id)arg1 ;
+(void)unregisterRadioStationStyle:(id)arg1 ;
+(void)unregisterRadioTrackStyle:(id)arg1 ;
+(void)_cacheRawStationImage:(id)arg1 forKey:(id)arg2 ;
+(CGSize)_maximumSizeForRadioStations;
+(id)_rawStationImageForKey:(id)arg1 ;
+(void)initialize;
@end

