/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface VKRasterOverlayTileSource : VKTileSource {

	NSMutableArray* _overlays;
	NSObject<OS_dispatch_group>* _renderGroup;
	NSObject<OS_dispatch_queue>* _homeQ;

}

@property (nonatomic,readonly) NSArray * overlays; 
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(int)tileSize;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(BOOL)cancelFetchForKey:(const VKTileKey*)arg1 ;
-(int)minimumDownloadZoomLevel;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(int)maximumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 sourceKey:(const VKTileKey*)arg2 ;
-(void)_queueDraw:(const VKTileKey*)arg1 ;
-(void)_flush;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)invalidateRect:(const SCD_Struct_VK47*)arg1 level:(int)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned)arg1 withOverlayAtIndex:(unsigned)arg2 ;
@end

