/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
@end

