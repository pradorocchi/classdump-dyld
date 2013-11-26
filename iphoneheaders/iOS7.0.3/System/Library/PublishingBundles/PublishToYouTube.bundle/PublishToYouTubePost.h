/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <YouTube/YTFeedRequest.h>
#import <PhotoLibrary/PLDataArrayInputStreamProgressDelegate.h>

@interface PublishToYouTubePost : YTFeedRequest <PLDataArrayInputStreamProgressDelegate> {

	BOOL _allowsCellularAccessForUploads;

}

@property (assign,nonatomic) BOOL allowsCellularAccessForUploads;              //@synthesize allowsCellularAccessForUploads=_allowsCellularAccessForUploads - In the implementation block
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(BOOL)allowsCellularAccessForUploads;
-(void)setAllowsCellularAccessForUploads:(BOOL)arg1 ;
-(void)uploadVideoAtPath:(id)arg1 withXMLData:(id)arg2 title:(id)arg3 ;
-(id)_publishURL;
@end

