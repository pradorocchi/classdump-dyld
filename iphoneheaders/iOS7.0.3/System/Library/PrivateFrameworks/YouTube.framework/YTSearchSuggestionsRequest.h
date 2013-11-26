/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSString;

@interface YTSearchSuggestionsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _suggestions;
	NSString* _query;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)clearDelegate;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(id)_suggestionsURLForQuery:(id)arg1 ;
-(void)requestSuggestionsWithDelegate:(id)arg1 query:(id)arg2 ;
@end

