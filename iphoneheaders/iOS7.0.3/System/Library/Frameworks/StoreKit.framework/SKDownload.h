/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL, NSNumber, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	NSString* _contentIdentifier;
	long long _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	int _downloadState;
	NSError* _error;
	float _progress;
	double _timeRemaining;
	SKPaymentTransaction* _transaction;
	NSString* _version;

}

@property (nonatomic,readonly) int downloadState;                                                         //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,readonly) long long contentLength;                                                   //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,readonly) NSString * contentIdentifier;                                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL;                                                        //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,readonly) NSString * contentVersion;                                                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) float progress;                                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) double timeRemaining;                                                      //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (nonatomic,readonly) SKPaymentTransaction * transaction;                                        //@synthesize transaction=_transaction - In the implementation block
@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID;              //@synthesize downloadID=_downloadID - In the implementation block
-(long long)contentLength;
-(void)_setError:(id)arg1 ;
-(id)contentURL;
-(void)_setContentLength:(long long)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(int)downloadState;
-(void)_setDownloadState:(int)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_setContentIdentifier:(id)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
-(id)contentVersion;
-(id)_downloadID;
-(void)_setDownloadID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
-(id)transaction;
-(id)error;
-(double)timeRemaining;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)contentIdentifier;
@end

