/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPFileDataStorage.h>

@class NSString, SFUCryptoKey, TSPBundle;

@interface TSPBundleDataStorage : TSPFileDataStorage {

	NSString* _path;
	SFUCryptoKey* _decryptionKey;
	unsigned char _packageIdentifier;
	TSPBundle* _bundle;
	BOOL _gilligan_isRemote;

}
-(id)packageLocator;
-(unsigned char)packageIdentifier;
-(void)performIOChannelReadWithAccessor:(/*^block*/ id)arg1 ;
-(BOOL)gilligan_isRemote;
-(BOOL)copyToTemporaryURL:(id)arg1 ;
-(void)setGilligan_isRemote:(BOOL)arg1 ;
-(id)initWithFilename:(id)arg1 decryptionKey:(id)arg2 bundle:(id)arg3 ;
-(BOOL)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id*)arg3 didCopyDataToBundle:(BOOL*)arg4 ;
-(id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2 ;
-(BOOL)isInPackage:(id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end

