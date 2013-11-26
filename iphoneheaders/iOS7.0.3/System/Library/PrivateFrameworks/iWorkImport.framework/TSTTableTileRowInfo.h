/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject {

	CFDataRef mStorageBuffer;
	unsigned short mStorageOffsets[255];
	unsigned short mBufferSize;
	unsigned short mTileRowIndex;
	unsigned short mCellCount;
	unsigned char mMaxTileColumnIndex;
	BOOL mMaxTileColumnIndexValid;
	unsigned char mStorageVersion;

}

@property (assign,nonatomic) unsigned short tileRowIndex; 
@property (nonatomic,readonly) unsigned short cellCount; 
-(void)saveToArchive:(TileRowInfo*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileRowInfo*)arg1 owner:(id)arg2 ;
-(void)debugDump;
-(void)i_upgradeWithDataStore:(id)arg1 ;
-(id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2 ;
-(id)p_debugDumpCompact;
-(unsigned short)tileRowIndex;
-(void)setTileRowIndex:(unsigned short)arg1 ;
-(void)validate;
-(void)dealloc;
-(id)description;
-(unsigned short)cellCount;
@end

