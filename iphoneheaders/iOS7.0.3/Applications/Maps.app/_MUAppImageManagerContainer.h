/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableData, NSString;

@interface _MUAppImageManagerContainer : NSObject {

	/*^block*/ id _completionHandler;
	NSMutableData* _data;
	NSString* _urlString;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * urlString;                //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setUrlString:(id)arg1 ;
-(id)urlString;
@end

