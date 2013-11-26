/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNRecordingEvent.h>

@class TSPLazyReference, TSDMovieInfo;

@interface KNRecordingMovieEvent : KNRecordingEvent {

	TSPLazyReference* mMovieInfoReference;
	int mMovieEventType;
	double mMovieEventValue;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (nonatomic,readonly) int movieEventType; 
@property (nonatomic,readonly) double movieEventValue; 
@property (nonatomic,readonly) double seekTime; 
@property (nonatomic,readonly) double rate; 
@property (nonatomic,readonly) BOOL beginsScrubbing; 
@property (nonatomic,readonly) BOOL endsScrubbing; 
@property (nonatomic,readonly) BOOL startsPlayback; 
@property (nonatomic,readonly) BOOL stopsPlayback; 
-(void)saveToArchive:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(id)movieInfo;
-(id)initWithStartTime:(double)arg1 ;
-(BOOL)isIgnoredWhenSeeking;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 movieEventType:(int)arg3 movieEventValue:(double)arg4 ;
-(int)movieEventType;
-(double)movieEventValue;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 seekTime:(double)arg3 ;
-(id)initWithStartTime:(double)arg1 movieInfo:(id)arg2 rate:(double)arg3 ;
-(id)initWithStartTime:(double)arg1 startingPlaybackForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 stoppingPlaybackForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 beginningScrubbingForMovieInfo:(id)arg2 ;
-(id)initWithStartTime:(double)arg1 endingScrubbingForMovieInfo:(id)arg2 withRate:(double)arg3 ;
-(double)seekTime;
-(BOOL)beginsScrubbing;
-(BOOL)endsScrubbing;
-(BOOL)startsPlayback;
-(BOOL)stopsPlayback;
-(id)initWithContext:(id)arg1 archive:(const RecordingEventArchive*)arg2 unarchiver:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(double)rate;
@end

