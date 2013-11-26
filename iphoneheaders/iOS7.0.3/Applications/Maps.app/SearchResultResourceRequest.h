/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SearchResult, NSURL, NSURLRequest;

@interface SearchResultResourceRequest : NSObject {

	SearchResult* _result;
	SearchResult* _searchResult;

}

@property (retain) SearchResult * searchResult;                        //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURLRequest * urlRequest; 
-(void)setSearchResult:(id)arg1 ;
-(void)dealloc;
-(id)url;
-(id)urlRequest;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(id)searchResult;
@end

