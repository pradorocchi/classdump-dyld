/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, DownloadStep, DownloadResultsSet, Download, DownloadAsset;

@interface DownloadStepOperation : ISOperation {

	int _canceledResultType;
	NSString* _clientID;
	DownloadStep* _downloadStep;
	long long _handlerID;
	DownloadResultsSet* _results;
	Download* _download;
	DownloadAsset* _downloadAsset;

}

@property (nonatomic,readonly) DownloadStep * downloadStep;              //@synthesize downloadStep=_downloadStep - In the implementation block
@property (readonly) Download * download;                                //@synthesize download=_download - In the implementation block
@property (readonly) DownloadAsset * downloadAsset;                      //@synthesize downloadAsset=_downloadAsset - In the implementation block
@property (readonly) NSString * assetScratchPath; 
@property (copy) DownloadResultsSet * downloadStepResults; 
@property (readonly) int canceledResultType; 
+(id)operationWithDownloadStep:(id)arg1 ;
-(void)addDownloadResults:(id)arg1 ;
-(id)downloadStep;
-(void)prepareUsingDownloadsSession:(id)arg1 ;
-(id)initWithDownloadStep:(id)arg1 ;
-(int)canceledResultType;
-(void)cancelWithResultType:(int)arg1 ;
-(id)assetScratchPath;
-(id)downloadStepResults;
-(BOOL)handleAuthenticationChallenge:(id)arg1 ;
-(id)newAuthenticationContextWithDownloadEntity:(id)arg1 ;
-(id)newRequestPropertiesWithAssetEntity:(id)arg1 ;
-(id)newURLOperationWithRequestProperties:(id)arg1 ;
-(void)setDownloadStepResults:(id)arg1 ;
-(void)setResultsWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)download;
-(id)downloadAsset;
-(void)dealloc;
-(void)cancel;
@end

