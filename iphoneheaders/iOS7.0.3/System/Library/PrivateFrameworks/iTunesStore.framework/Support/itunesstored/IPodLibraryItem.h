/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSData, NSObject, NSString, StoreDownload, NSDictionary;

@interface IPodLibraryItem : NSObject <NSCopying> {

	NSMutableDictionary* _additionalEntityProperties;
	NSData* _artworkData;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _downloadIdentifier;
	int _downloadType;
	long long _libraryPersistentIdentifier;
	NSString* _mediaPath;
	StoreDownload* _metadata;
	int _updateType;

}

@property (getter=isDownloading,readonly) BOOL downloading; 
@property (assign) int downloadType; 
@property (copy) NSString * itemDownloadIdentifier; 
@property (assign) long long libraryPersistentIdentifier; 
@property (copy) NSData * itemArtworkData; 
@property (copy) NSString * itemMediaPath; 
@property (copy) StoreDownload * itemMetadata; 
@property (assign) int updateType; 
@property (copy) NSDictionary * additionalEntityProperties; 
+(unsigned long)mediaTypeForStoreDownload:(id)arg1 ;
-(long long)libraryPersistentIdentifier;
-(void)setLibraryPersistentIdentifier:(long long)arg1 ;
-(void)setDownloadType:(int)arg1 ;
-(void)setItemMetadata:(id)arg1 ;
-(void)setItemDownloadIdentifier:(id)arg1 ;
-(id)itemMediaPath;
-(id)itemDownloadIdentifier;
-(void)setItemArtworkData:(id)arg1 ;
-(id)itemArtworkData;
-(id)additionalEntityProperties;
-(int)downloadType;
-(id)itemMetadata;
-(void)setAdditionalEntityProperties:(id)arg1 ;
-(void)setItemMediaPath:(id)arg1 ;
-(void)setValue:(id)arg1 forAdditionalEntityProperty:(id)arg2 ;
-(BOOL)isDownloading;
-(void)setUpdateType:(int)arg1 ;
-(int)updateType;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

