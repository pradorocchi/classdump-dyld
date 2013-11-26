/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUCryptoKey;

@interface SFUFileDataRepresentation : OISFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned long mFileType;
	BOOL mHasFileAttributes;
	long long mPlaintextDataLength;
	OISFUCryptoKey* mCryptoKey;
	BOOL mDeleteFileWhenDone;

}
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(void)setFileType:(unsigned long)arg1 ;
-(unsigned long)fileType;
-(long long)dataLength;
-(id)inputStream;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(long long)encodedLength;
-(BOOL)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(BOOL)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(void)readFileAttributes;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(void)deleteFileWhenDone;
@end

