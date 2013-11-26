/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {

	BOOL _albumHasUnseenContent;
	BOOL _assetCollectionHasUnreadComments;
	NSString* _albumGUID;
	NSString* _assetCollectionGUID;
	NSDate* _assetCollectionLastViewedCommentDate;
	long long _jobType;
	long long _albumUnviewedAssetCount;

}

@property (assign,nonatomic) long long jobType;                                          //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                                       //@synthesize albumGUID=_albumGUID - In the implementation block
@property (assign,nonatomic) BOOL albumHasUnseenContent;                                 //@synthesize albumHasUnseenContent=_albumHasUnseenContent - In the implementation block
@property (assign,nonatomic) long long albumUnviewedAssetCount;                          //@synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                             //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (assign,nonatomic) BOOL assetCollectionHasUnreadComments;                      //@synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments - In the implementation block
@property (nonatomic,retain) NSDate * assetCollectionLastViewedCommentDate;              //@synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate - In the implementation block
+(void)markAlbum:(id)arg1 asHavingUnseenContent:(BOOL)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2 ;
+(void)markAssetCollection:(id)arg1 asHavingUnreadComments:(BOOL)arg2 inAlbum:(id)arg3 ;
+(void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(id)initFromXPCObject:(id)arg1 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)albumGUID;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(id)arg1 ;
-(void)setAlbumHasUnseenContent:(BOOL)arg1 ;
-(void)setAlbumUnviewedAssetCount:(long long)arg1 ;
-(void)setAssetCollectionGUID:(id)arg1 ;
-(void)setAssetCollectionHasUnreadComments:(BOOL)arg1 ;
-(void)setAssetCollectionLastViewedCommentDate:(id)arg1 ;
-(BOOL)albumHasUnseenContent;
-(long long)albumUnviewedAssetCount;
-(id)assetCollectionGUID;
-(BOOL)assetCollectionHasUnreadComments;
-(id)assetCollectionLastViewedCommentDate;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
@end

