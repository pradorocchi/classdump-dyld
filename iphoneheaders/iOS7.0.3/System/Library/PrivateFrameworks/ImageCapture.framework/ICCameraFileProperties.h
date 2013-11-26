/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSMutableDictionary;

@interface ICCameraFileProperties : NSObject {

	long long _fileSize;
	BOOL _hasThumbnail;
	BOOL _hasMetadata;
	BOOL _raw;
	int _fetchingThumbnailLock;
	BOOL _fetchingThumbnail;
	int _fetchingMetadataLock;
	BOOL _fetchingMetadata;
	CGImageRef _originalThumbnail;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	NSMutableDictionary* _metadata_hidden;
	unsigned _orientation;
	BOOL _hasOverriddenOrientation;

}

@property (assign) long long fileSize;                                 //@synthesize fileSize=_fileSize - In the implementation block
@property (assign) BOOL hasThumbnail;                                  //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign) BOOL hasMetadata;                                   //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (getter=isRaw) BOOL raw;                                     //@synthesize raw=_raw - In the implementation block
@property (assign) BOOL fetchingThumbnail; 
@property (assign) BOOL fetchingMetadata; 
@property (@dynamic) CGImageRef originalThumbnail; 
@property (@dynamic) CGImageRef thumbnail; 
@property (retain) NSMutableDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (retain) NSMutableDictionary * metadata_hidden;              //@synthesize metadata_hidden=_metadata_hidden - In the implementation block
@property (assign) unsigned orientation;                               //@synthesize orientation=_orientation - In the implementation block
@property (assign) BOOL hasOverriddenOrientation;                      //@synthesize hasOverriddenOrientation=_hasOverriddenOrientation - In the implementation block
-(void)setFileSize:(long long)arg1 ;
-(void)dealloc;
-(unsigned)orientation;
-(BOOL)hasMetadata;
-(void)setOrientation:(unsigned)arg1 ;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(CGImageRef)thumbnail;
-(long long)fileSize;
-(void)setFetchingThumbnail:(BOOL)arg1 ;
-(void)setFetchingMetadata:(BOOL)arg1 ;
-(void)setOriginalThumbnail:(CGImageRef)arg1 ;
-(void)setMetadata_hidden:(id)arg1 ;
-(CGImageRef)originalThumbnail;
-(BOOL)fetchingThumbnail;
-(BOOL)fetchingMetadata;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(void)setHasMetadata:(BOOL)arg1 ;
-(void)setRaw:(BOOL)arg1 ;
-(id)metadata_hidden;
-(BOOL)hasOverriddenOrientation;
-(void)setHasOverriddenOrientation:(BOOL)arg1 ;
-(BOOL)isRaw;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(BOOL)hasThumbnail;
-(void)finalize;
@end

