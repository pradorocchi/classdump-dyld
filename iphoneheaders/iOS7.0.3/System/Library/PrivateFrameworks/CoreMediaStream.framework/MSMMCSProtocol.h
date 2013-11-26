/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStorageProtocol.h>

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {

	NSString* _personID;
	NSString* _MMCSDirPath;
	MMCSEngineRef _engine;
	NSString* _engineDirPath;

}

@property (nonatomic,readonly) NSString * personID;               //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) MMCSEngineRef engine;              //@synthesize engine=_engine - In the implementation block
+(id)computeItemIDForAsset:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)deactivateRemoveAllFiles:(BOOL)arg1 ;
-(void)didFinishUsingAssets:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 path:(id)arg2 ;
-(int)_getFileDescriptorFromItem:(unsigned long long)arg1 ;
-(id)_getUTIFromItem:(unsigned long long)arg1 ;
-(void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3 ;
-(void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_requestCompleted;
-(MMCSEngineRef)engine;
-(void)abort;
-(id)personID;
-(void).cxx_destruct;
@end

