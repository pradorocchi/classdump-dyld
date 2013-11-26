/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@protocol SearchBookmarksAndHistoryOperationDelegate;
@class NSString, NSArray, ;

@interface SearchBookmarksAndHistoryOperation : NSOperation {

	void* _addressBook;
	NSString* _searchQuery;
	int _searchMode;
	NSArray* _history;
	NSArray* _bookmarks;
	BOOL _abAllowed;
	<SearchBookmarksAndHistoryOperationDelegate>* _delegate;

}

@property (assign,nonatomic) <SearchBookmarksAndHistoryOperationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSearchQuery:(id)arg1 searchMode:(int)arg2 addressBook:(void*)arg3 bookmarks:(id)arg4 history:(id)arg5 ;
-(id)_bookmarksAndHistoryResultsForSearchQuery:(id)arg1 searchMode:(int)arg2 ;
-(void)_addCompletionString:(id)arg1 toCompletions:(id)arg2 query:(id)arg3 ;
-(BOOL)_removeCompletionString:(id)arg1 fromCompletions:(id)arg2 query:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
@end

