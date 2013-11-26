/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPImageCacheRequest.h>

@class RadioStation;

@interface MPRadioStationImageCacheRequest : MPImageCacheRequest {

	BOOL _usePlaceholderAsFallback;
	RadioStation* _radioStation;

}

@property (nonatomic,readonly) RadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
@property (assign,nonatomic) BOOL usePlaceholderAsFallback;              //@synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback - In the implementation block
-(id)initWithRadioStation:(id)arg1 ;
-(void)setUsePlaceholderAsFallback:(BOOL)arg1 ;
-(id)placeholderImage;
-(id)radioStation;
-(id)uniqueKey;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(BOOL)canRequestSynchronously;
-(BOOL)usePlaceholderAsFallback;
-(void).cxx_destruct;
@end

