/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MPMediaChapter : NSObject {

	int _chapterType;
	unsigned _indexInChaptersWithAnyType;
	unsigned _indexInChaptersWithSameType;
	double _playbackDuration;
	double _playbackTime;
	id _value;
	/*^block*/ id _valueLoader;

}

@property (assign,nonatomic) int chapterType;                                   //@synthesize chapterType=_chapterType - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double playbackTime;                               //@synthesize playbackTime=_playbackTime - In the implementation block
@property (assign,nonatomic) double playbackDuration;                           //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,copy) id valueLoader;                                      //@synthesize valueLoader=_valueLoader - In the implementation block
@property (assign,nonatomic) unsigned indexInChaptersWithSameType;              //@synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType - In the implementation block
@property (assign,nonatomic) unsigned indexInChaptersWithAnyType;               //@synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType - In the implementation block
-(double)playbackDuration;
-(int)chapterType;
-(double)playbackTime;
-(unsigned)indexInChaptersWithAnyType;
-(int)_sortByChapterIndex:(id)arg1 ;
-(void)setChapterType:(int)arg1 ;
-(void)setIndexInChaptersWithSameType:(unsigned)arg1 ;
-(void)setIndexInChaptersWithAnyType:(unsigned)arg1 ;
-(void)setPlaybackTime:(double)arg1 ;
-(void)setPlaybackDuration:(double)arg1 ;
-(void)setValueLoader:(/*^block*/ id)arg1 ;
-(unsigned)indexInChaptersWithSameType;
-(/*^block*/ id)valueLoader;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)title;
-(void).cxx_destruct;
@end

