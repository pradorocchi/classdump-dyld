/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation {

	NSArray* _bundleIDs;
	NSArray* _itemIDs;
	NSArray* _softwareLibraryItems;

}

@property (readonly) NSArray * bundleIdentifiers; 
@property (readonly) NSArray * itemIdentifiers; 
@property (readonly) NSArray * softwareLibraryItems; 
-(id)initWithItemIdentifiers:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(id)softwareLibraryItems;
-(void)_loadFromItemIdentifiers;
-(void)_loadFromBundleIdentifiers;
-(id)_newSoftwareLibraryItemWithContainerPath:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)itemIdentifiers;
-(id)bundleIdentifiers;
@end

