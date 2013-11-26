/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS23 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)isDirectory;
-(unsigned)filePosixPermissions;
-(unsigned)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned)fileGroupOwnerAccountNumber;
-(int)fileSystemNumber;
-(unsigned)fileSystemFileNumber;
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)fileType;
-(id)fileModificationDate;
-(unsigned long long)fileSize;
-(id)fileOwnerAccountName;
@end

