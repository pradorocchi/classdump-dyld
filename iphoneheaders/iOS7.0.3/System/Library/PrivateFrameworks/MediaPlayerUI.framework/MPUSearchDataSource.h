/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MPUQueryDataSource.h>

@class NSOperationQueue, _MPUSearchOperation, NSArray, MPUQueryDataSource, NSString;

@interface MPUSearchDataSource : MPUQueryDataSource {

	NSOperationQueue* _operationQueue;
	_MPUSearchOperation* _searchOperation;
	NSArray* _searchResults;
	MPUQueryDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,readonly) MPUQueryDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
-(void)dealloc;
-(unsigned)count;
-(id)dataSource;
-(id)searchString;
-(id)_searchPropertiesForGroupingType:(int)arg1 ;
-(void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 operationQueue:(id)arg2 ;
-(void)filterResultsUsingSearchString:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void).cxx_destruct;
-(id)entities;
@end

