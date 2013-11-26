/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(id)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(/*^block*/ id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/ id)arg1 ;
-(id)readDataOfLength:(unsigned)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(int)fileDescriptor;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)closeFile;
@end

