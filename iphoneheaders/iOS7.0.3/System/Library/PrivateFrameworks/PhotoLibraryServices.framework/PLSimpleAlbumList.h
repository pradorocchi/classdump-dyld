/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLAssetContainerList.h>

@class NSOrderedSet;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {

	NSOrderedSet* _containers;

}

@property (nonatomic,retain) NSOrderedSet * containers;               //@synthesize containers=_containers - In the implementation block
@property (nonatomic,readonly) unsigned containersCount; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)initWithAssetContainers:(id)arg1 ;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned)containersCount;
-(id)initWithAssetContainer:(id)arg1 ;
-(void)setContainers:(id)arg1 ;
@end

