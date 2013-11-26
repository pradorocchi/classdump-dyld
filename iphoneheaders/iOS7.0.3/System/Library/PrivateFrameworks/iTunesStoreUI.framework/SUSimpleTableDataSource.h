/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource {

	Class _cellConfigurationClass;
	NSArray* _objects;

}

@property (nonatomic,retain) Class cellConfigurationClass;              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,retain) NSArray * objects;                         //@synthesize objects=_objects - In the implementation block
-(id)objects;
-(void)dealloc;
-(int)numberOfRowsInSection:(int)arg1 ;
-(int)numberOfSections;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(float)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(id)objectForIndexPath:(id)arg1 ;
-(Class)cellConfigurationClass;
-(void)setCellConfigurationClass:(Class)arg1 ;
-(void)setObjects:(id)arg1 ;
@end

