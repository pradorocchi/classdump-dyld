/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEvent* _event;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) int errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(id)_initWithAVItemErrorLogEvent:(id)arg1 ;
-(id)serverAddress;
-(id)playbackSessionID;
-(int)errorStatusCode;
-(id)errorDomain;
-(id)errorComment;
-(id)date;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URI;
-(void).cxx_destruct;
@end

