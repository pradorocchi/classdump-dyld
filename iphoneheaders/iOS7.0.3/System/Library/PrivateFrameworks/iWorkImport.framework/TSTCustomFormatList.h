/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {

	NSMutableDictionary* mNamesList;

}
-(TSUCustomFormat*)customFormatForKey:(unsigned)arg1 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 withOldKey:(unsigned)arg2 ;
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(unsigned)maxKey;
-(id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2 ;
-(unsigned)addCustomFormat:(TSUCustomFormat*)arg1 duringImport:(BOOL)arg2 ;
-(void)p_setupNamesList;
-(id)customFormatWrapperForKey:(unsigned)arg1 ;
-(id)allNumberKeys;
-(id)newUniqueNameFromName:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end

