/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEORegionalResourceTileData;

@interface _GEORegionalResourcesTileLoader : NSObject {

	NSMutableArray* _pendingDownloads;
	GEORegionalResourceTileData* _tile;
	/*^block*/ id _finishedHandler;
	/*^block*/ id _errorHandler;
	BOOL _canceled;

}
-(void)dealloc;
-(void)cancel;
-(void)_loadNextResource;
-(void)loadResourcesForTileKey:(const GEOTileKey*)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(id)_destinationPathForResource:(id)arg1 ;
-(BOOL)_loadRegionalResourceFromFilesystemIfPossible:(id)arg1 resourceChecksum:(id)arg2 ;
-(void)_addDownloadForName:(id)arg1 ofType:(int)arg2 baseURLString:(id)arg3 expectedChecksum:(id)arg4 ;
@end

