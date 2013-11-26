/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLCloudFeedEntry.h>

@class NSString, NSOrderedSet, NSMutableOrderedSet;

@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry

@property (nonatomic,@dynamic,retain) NSString * entryCloudAssetGUID; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * entryComments; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * entryLikeComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryLikeComments; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableEntryComments; 
+(id)entityName;
-(BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1 ;
-(id)mutableEntryLikeComments;
-(id)mutableEntryComments;
@end

