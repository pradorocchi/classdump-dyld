/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL;

@interface ErrorHandlerResponse : NSObject {

	int _responseType;
	NSURL* _url;

}

@property (assign,nonatomic) int responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSURL * URL;                     //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setResponseType:(int)arg1 ;
-(int)responseType;
@end

