/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLPreheatItemSource <NSObject>
@optional
-(void)preheatImageDataAtIndexes:(id)arg1;
-(id)imageDataAtIndex:(unsigned)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 dataOffset:(int*)arg7;

@required
-(id)preheatItemForAsset:(id)arg1 options:(unsigned)arg2;
@end

