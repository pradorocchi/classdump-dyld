/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKTileProviderClient <NSObject>
@required
-(BOOL)tileProviderMayUseNetwork:(id)arg1;
-(void)tileProviderNeedsUpdate:(id)arg1;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1;
@end

