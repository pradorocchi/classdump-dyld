/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, SSDownload, SSPurchase, SSPurchaseResponse, NSError, NSString;

@interface MPStoreDownload : NSObject {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSDictionary* _attributes;
	BOOL _canceled;
	SSDownload* _SSDownload;
	SSPurchase* _SSPurchase;
	SSPurchaseResponse* _SSPurchaseResponse;
	int _type;

}

@property (nonatomic,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,readonly) NSError * failureError; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (getter=isPurchasing,nonatomic,readonly) BOOL purchasing; 
@property (nonatomic,readonly) unsigned long long libraryItemIdentifier; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSError * purchaseError; 
@property (getter=isRestore,nonatomic,readonly) BOOL restore; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) int type;                                              //@synthesize type=_type - In the implementation block
+(id)storeDownloadsForMediaItems:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)_storeDownloadForMediaItem:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)_SSPurchaseForType:(int)arg1 attributes:(id)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 URLBagKeyOverride:(id)arg5 ;
+(id)_storeDownloadForCompletionOffer:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)storeDownloadsForMediaQuery:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)storeDownloadsForRadioTracks:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
+(id)storeDownloadForCompletionOffering:(id)arg1 type:(int)arg2 attributes:(id)arg3 ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(id)failureError;
-(long long)downloadIdentifier;
-(BOOL)isPurchasing;
-(BOOL)isRestore;
-(id)initWithType:(int)arg1 attributes:(id)arg2 ;
-(void)_setSSPurchase:(id)arg1 SSPurchaseResponse:(id)arg2 ;
-(id)phaseIdentifier;
-(BOOL)isCanceled;
-(id)_SSDownload;
-(BOOL)_isCanceled;
-(id)_SSPurchaseResponse;
-(id)_SSPurchase;
-(id)_valueForDownloadProperty:(id)arg1 ;
-(unsigned long long)libraryItemIdentifier;
-(id)purchaseError;
-(long long)storeItemIdentifier;
-(void)_setCanceled:(BOOL)arg1 ;
-(void)_setSSDownload:(id)arg1 ;
-(id)description;
-(double)percentComplete;
-(int)type;
-(id)attributes;
-(BOOL)isFinished;
-(void).cxx_destruct;
@end

