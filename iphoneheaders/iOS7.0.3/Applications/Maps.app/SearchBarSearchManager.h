/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/SearchBookmarksAndHistoryOperationDelegate.h>
#import <Maps/SearchMeCardLabelsOperationDelegate.h>
#import <Maps/SearchAddressBookOperationDelegate.h>
#import <Maps/SearchRecentsOperationDelegate.h>

@protocol SearchBarSearchManagerDelegate;
@class , NSOperationQueue, NSString, NSDate, SearchBarSearchManagerRequest, NSTimer, SearchBarSearchResults;

@interface SearchBarSearchManager : NSObject <SearchBookmarksAndHistoryOperationDelegate, SearchMeCardLabelsOperationDelegate, SearchAddressBookOperationDelegate, SearchRecentsOperationDelegate> {

	<SearchBarSearchManagerDelegate>* _delegate;
	NSOperationQueue* _searchQueue;
	NSString* _query;
	void* _addressBook;
	NSDate* _lastSearchDate;
	SearchBarSearchManagerRequest* _pendingSearch;
	NSTimer* _pendingSearchTimer;
	SearchBarSearchResults* _searchResults;

}

@property (nonatomic,copy) NSString * query;                                             //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSTimer * pendingSearchTimer;                               //@synthesize pendingSearchTimer=_pendingSearchTimer - In the implementation block
@property (nonatomic,retain) SearchBarSearchManagerRequest * pendingSearch;              //@synthesize pendingSearch=_pendingSearch - In the implementation block
@property (nonatomic,retain) NSDate * lastSearchDate;                                    //@synthesize lastSearchDate=_lastSearchDate - In the implementation block
-(int)_integerValueForDefaultsKey:(id)arg1 networkDefaultsKey:(id)arg2 defaultValue:(int)arg3 ;
-(void)setPendingSearch:(id)arg1 ;
-(void)setPendingSearchTimer:(id)arg1 ;
-(void)_searchUsingSearchRequest:(id)arg1 ;
-(void)_startPendingSearchRequest;
-(id)pendingSearch;
-(void)setLastSearchDate:(id)arg1 ;
-(void)bookmarksAndHistoryOperation:(id)arg1 didFindMatches:(id)arg2 ;
-(void)meCardLabelsOperation:(id)arg1 didMatchResults:(id)arg2 ;
-(void)searchAddressBookOperation:(id)arg1 didMatchResults:(id)arg2 ;
-(void)searchRecentsOperation:(id)arg1 didMatchResults:(id)arg2 ;
-(void)searchName:(id)arg1 forSearchMode:(int)arg2 withTypes:(int)arg3 ;
-(void)cancelCurrentSearch;
-(id)pendingSearchTimer;
-(id)lastSearchDate;
-(void)setQuery:(id)arg1 ;
-(void)dealloc;
-(id)query;
-(id)initWithDelegate:(id)arg1 ;
@end

