/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary {

	NSMutableDictionary* dict;

}
+(void)initialize;
-(id)removeFile:(id)arg1 ;
-(BOOL)isPackage;
-(id)_getDocInfoForKey:(id)arg1 ;
-(id)getDirInfo:(BOOL)arg1 ;
-(unsigned)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(unsigned)initFromDocument:(id)arg1 ;
-(unsigned)addDirNamed:(id)arg1 lazy:(BOOL)arg2 ;
-(unsigned)addFileNamed:(id)arg1 fileAttributes:(id)arg2 ;
-(unsigned)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 markBusy:(BOOL)arg5 hardLinkPath:(id)arg6 ;
-(unsigned)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4 ;
-(id)tmpNameFromPath:(id)arg1 extension:(id)arg2 ;
-(id)nameFromPath:(id)arg1 extra:(id)arg2 ;
-(unsigned)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5 ;
-(unsigned)internalSaveTo:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(id)initWithPasteboardDataRepresentation:(id)arg1 ;
-(id)createRandomKey:(id)arg1 ;
-(id)createUniqueKey:(id)arg1 ;
-(id)getDocument:(id)arg1 docInfo:(id)arg2 ;
-(id)uniqueKey:(id)arg1 ;
-(id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(NSZoneRef)arg4 ;
-(id)replaceFile:(id)arg1 path:(id)arg2 ;
-(id)setPackage:(BOOL)arg1 ;
-(unsigned)initUnixFile:(id)arg1 ;
-(id)tmpNameFromPath:(id)arg1 ;
-(unsigned)saveToDocument:(id)arg1 removeBackup:(BOOL)arg2 errorHandler:(id)arg3 ;
-(id)replaceFile:(id)arg1 data:(id)arg2 ;
-(id)addFile:(id)arg1 ;
-(id)dataForFile:(id)arg1 ;
-(id)copy:(id)arg1 into:(id)arg2 ;
-(id)addData:(id)arg1 name:(id)arg2 ;
-(int)validatePath:(id)arg1 ignore:(id)arg2 ;
-(id)initFromElement:(id)arg1 ofDocument:(id)arg2 ;
-(unsigned)realAddDirNamed:(id)arg1 ;
-(unsigned)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(NSZoneRef)arg4 plist:(id)arg5 ;
-(id)serialize:(void*)arg1 length:(unsigned*)arg2 ;
-(id)freeSerialized:(void*)arg1 length:(unsigned)arg2 ;
-(id)initFromSerialized:(id)arg1 ;
-(id)pasteboardDataRepresentation;
-(BOOL)_isLink:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)copy;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)addLink:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)dataRepresentation;
@end

