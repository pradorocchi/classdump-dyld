/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSLock;

@interface GEOTileDBMRU : NSObject {

	GEOTileKeyList* _mru;
	NSLock* _lock;

}
-(void)dealloc;
-(id)init;
-(id)currentList;
-(void)addKey:(GEOTileKey*)arg1 ;
@end

