/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VimeoPostDelegate;
@class NSURL, NSString, ALAssetsLibrary, , NSData, NSArray, ACAccount, ALAsset;

@interface VimeoPost : NSObject {

	NSURL* _baseURL;
	int _uploadState;
	NSString* _videoID;
	NSString* _ticketID;
	NSURL* _uploadEndpoint;
	BOOL _continuingUpload;
	unsigned _lastByteStored;
	int _retryCount;
	BOOL _canUploadOverCellular;
	ALAssetsLibrary* _assetsLibrary;
	<VimeoPostDelegate>* _delegate;
	NSURL* _assetURL;
	NSData* _assetData;
	NSString* _title;
	NSString* _description;
	NSArray* _tags;
	unsigned _accessType;
	int _videoSize;
	int _privacySettings;
	ACAccount* _account;
	ALAsset* _asset;
	NSURL* _exportedVideoURL;

}

@property (assign,nonatomic) <VimeoPostDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSData * assetData;                          //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * description;                      //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSArray * tags;                              //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) unsigned accessType;                         //@synthesize accessType=_accessType - In the implementation block
@property (assign,nonatomic) int videoSize;                               //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) int privacySettings;                         //@synthesize privacySettings=_privacySettings - In the implementation block
@property (nonatomic,retain) ACAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ALAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * exportedVideoURL;                    //@synthesize exportedVideoURL=_exportedVideoURL - In the implementation block
+(BOOL)_isUsingCellular;
+(id)dictionaryWithResponseData:(id)arg1 error:(id*)arg2 ;
+(void)getAvailableQuotaForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_commit;
-(id)assetsLibrary;
-(int)privacySettings;
-(void)setPrivacySettings:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)initWithDictionary:(id)arg1 ;
-(id)title;
-(void)_cleanup;
-(void)setAsset:(id)arg1 ;
-(id)asset;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(void)_verify;
-(id)assetData;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)assetURL;
-(void)setDescription:(id)arg1 ;
-(void)setAssetURL:(id)arg1 ;
-(int)videoSize;
-(void)setVideoSize:(int)arg1 ;
-(void)setAssetData:(id)arg1 ;
-(id)_tags;
-(id)exportedVideoURL;
-(void)_errorWithCode:(int)arg1 ;
-(void)setExportedVideoURL:(id)arg1 ;
-(void)_checkQuota;
-(unsigned long long)postSize;
-(void)_getTicket;
-(void)_warningWithCode:(int)arg1 ;
-(void)_uploadData;
-(void)uploadToAccount:(id)arg1 ;
-(void)_setTitle;
-(void)_setDescription;
-(void)_setTags;
-(void)_setPrivacy;
-(id)serializedDictionary;
-(unsigned)accessType;
-(void)setAccessType:(unsigned)arg1 ;
@end

