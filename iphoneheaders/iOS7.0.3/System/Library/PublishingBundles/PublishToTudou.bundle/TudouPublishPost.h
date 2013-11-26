/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PublishingBundles/PublishToTudou.bundle/PublishToTudou
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VideoUpload/VUPublishPost.h>
#import <VideoUpload/JSONHTTPRequestDelegate.h>

@class JSONHTTPRequest, NSURL, VUFileUpload, NSString, NSArray, VUCategory;

@interface TudouPublishPost : VUPublishPost <JSONHTTPRequestDelegate> {

	JSONHTTPRequest* _currentRequest;
	int _publishState;
	NSURL* _uploadURL;
	VUFileUpload* _file;
	NSString* _token;
	NSString* _filePath;
	NSString* _title;
	NSString* _description;
	NSArray* _tags;
	VUCategory* _category;

}

@property (nonatomic,retain) NSString * filePath;                 //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * description;              //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSArray * tags;                      //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) VUCategory * category;               //@synthesize category=_category - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(void)_publishVideo;
-(void)_uploadVideo;
-(id)_uploadURL;
-(id)_verifyParameters;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(void)setDescription:(id)arg1 ;
-(id)_tags;
-(void)_errorWithCode:(int)arg1 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)request:(id)arg1 hasWrittenBytes:(int)arg2 expectsToWrite:(int)arg3 ;
-(void)startUpload;
@end

