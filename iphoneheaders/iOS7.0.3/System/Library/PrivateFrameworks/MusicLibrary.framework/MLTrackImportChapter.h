/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying> {

	NSData* _imageData;
	NSString* _imageCacheKey;
	unsigned _startTimeInMilliseconds;
	NSString* _title;
	NSURL* _url;
	NSString* _urlTitle;

}

@property (nonatomic,copy) NSData * imageData;                              //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imageCacheKey;                        //@synthesize imageCacheKey=_imageCacheKey - In the implementation block
@property (assign,nonatomic) unsigned startTimeInMilliseconds;              //@synthesize startTimeInMilliseconds=_startTimeInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLTitle;                             //@synthesize urlTitle=_urlTitle - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)URL;
-(int)compare:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(unsigned)startTimeInMilliseconds;
-(id)imageData;
-(id)imageCacheKey;
-(id)URLTitle;
-(void)normalizeProperties;
-(BOOL)isEqualIgnoringTimesAndTitle:(id)arg1 ;
-(void)setImageData:(id)arg1 ;
-(void)setStartTimeInMilliseconds:(unsigned)arg1 ;
-(void)setURLTitle:(id)arg1 ;
-(void)setImageCacheKey:(id)arg1 ;
-(void).cxx_destruct;
@end

