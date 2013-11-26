/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <Foundation/SSDownloadManagerObserver.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSString, NSMutableSet, NSArray;

@interface MPItemDownloadProperties : NSObject <SSDownloadManagerObserver, NSCopying> {

	long long _assetFileSize;
	NSURL* _destinationURL;
	BOOL _downloadExists;
	NSString* _downloadIdentifier;
	long long _downloadSizeLimit;
	unsigned long long _downloadToken;
	NSMutableSet* _downloadTokenCompletionHandlers;
	NSArray* _sinfs;
	NSURL* _sourceURL;

}

@property (nonatomic,readonly) long long assetFileSize;                     //@synthesize assetFileSize=_assetFileSize - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                      //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) BOOL downloadExists;                         //@synthesize downloadExists=_downloadExists - In the implementation block
@property (nonatomic,readonly) NSString * downloadIdentifier;               //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,readonly) long long downloadSizeLimit;                 //@synthesize downloadSizeLimit=_downloadSizeLimit - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
-(id)destinationURL;
-(id)sourceURL;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(id)initWithMediaItem:(id)arg1 ;
-(unsigned long long)downloadToken;
-(id)downloadIdentifier;
-(long long)assetFileSize;
-(long long)downloadSizeLimit;
-(void)_reloadNetworkConstraints;
-(id)initWithDownload:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)acquireDownloadTokenWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)newAVAssetOptionsWithDownloadStyle:(int)arg1 ;
-(BOOL)downloadExists;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void).cxx_destruct;
@end

