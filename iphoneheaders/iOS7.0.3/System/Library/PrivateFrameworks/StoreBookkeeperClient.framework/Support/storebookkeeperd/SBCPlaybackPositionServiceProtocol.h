/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBCPlaybackPositionServiceProtocol <NSObject>
@required
-(oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;
-(oneway void)beginUsingPlaybackPositions;
-(oneway void)endUsingPlaybackPositions;
-(oneway void)synchronizeImmediately;
-(oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
-(oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
-(oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1;
-(oneway void)synchronizeLocalChangesSoon;
-(oneway void)setClientConfiguration:(id)arg1;
@end

