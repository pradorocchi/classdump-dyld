/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSASAssetDownloaderDelegate <NSObject>
@required
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned)arg2;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1;
@end

