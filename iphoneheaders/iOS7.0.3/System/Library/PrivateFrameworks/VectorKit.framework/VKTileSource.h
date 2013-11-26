/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKTileSourceClient;
#import <VectorKit/VectorKit-Structs.h>
@class , VKTilePool, VKTileKeyMap, VKTileKeyList, VKStylesheet, NSError;

@interface VKTileSource : NSObject {

	<VKTileSourceClient>* _client;
	VKTilePool* _tilePool;
	VKTileKeyMap* _pendingLoads;
	VKTileKeyList* _decoding;
	VKTileKeyList* _failedTiles;
	VKStylesheet* _stylesheet;
	float _contentScale;
	int loadingTiles;
	NSError* _recentError;

}

@property (assign,nonatomic) <VKTileSourceClient> * client;                    //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) VKStylesheet * stylesheet;                        //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) float contentScale;                               //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) int tileSize; 
@property (nonatomic,readonly) int minimumZoomLevel; 
@property (nonatomic,readonly) int maximumZoomLevel; 
@property (nonatomic,readonly) BOOL minimumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) BOOL maximumZoomLevelBoundsCamera; 
@property (nonatomic,readonly) int zEquivalenceClass; 
@property (nonatomic,readonly) int minimumDownloadZoomLevel; 
@property (nonatomic,readonly) int maximumDownloadZoomLevel; 
-(void)clearCaches;
-(void)dealloc;
-(id)init;
-(int)tileSize;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(id)detailedDescription;
-(int)minimumZoomLevel;
-(int)maximumZoomLevel;
-(void)setClient:(id)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 ;
-(int)minimumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 ;
-(void)forceDownload;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(GEOTileKey)downloadKeyForSourceKey:(const VKTileKey*)arg1 ;
-(void)tileAvailabilityChanged:(id)arg1 ;
-(int)maximumDownloadZoomLevel;
-(int)zEquivalenceClass;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(void)fetchedTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(VKTileKey)nativeKeyForRenderKey:(const VKTileKey*)arg1 ;
-(id)tileForSourceKey:(const VKTileKey*)arg1 renderKey:(const VKTileKey*)arg2 ;
-(void)failedToDecodeSourceKey:(const VKTileKey*)arg1 ;
-(void)_fetchedTile:(id)arg1 ;
-(void)performDownload:(const GEOTileKey*)arg1 ;
-(void)fetchTileForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(void)cancelDownload:(const GEOTileKey*)arg1 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(BOOL)mayUseNetwork;
-(void)willGoToNetwork;
-(void)didFinishWithNetwork;
-(void)didFailToLoadTileKey:(const GEOTileKey*)arg1 error:(id)arg2 ;
-(void)didFetchData:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(void)didLoadTile:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(VKTileKey)sourceKeyForDownloadKey:(const GEOTileKey*)arg1 ;
-(BOOL)_shouldDecodeTile:(const VKTileKey*)arg1 ;
-(void)decodeData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(void)_failedToLoadSourceKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 error:(id)arg3 ;
-(void)foreachTileInPool:(/*^block*/ id)arg1 ;
-(id)client;
@end

