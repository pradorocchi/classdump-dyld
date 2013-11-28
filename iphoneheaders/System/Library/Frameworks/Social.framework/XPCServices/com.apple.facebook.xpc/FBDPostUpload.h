/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.facebook.xpc/com.apple.facebook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@protocol FBDPostUploadDelegateNSObject;
@class NSMutableArray, NSURLRequest, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSError, SLFacebookPost, SLAssetDataProvider, NSString, ACAccount;

@interface FBDPostUpload : NSObject <NSURLConnectionDataDelegate> {

	NSMutableArray* _uploadQueue;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSMutableData* _responseData;
	NSError* _connectionError;
	unsigned long long _totalBytes;
	unsigned long long _transferredBytes;
	BOOL _canceled;
	SLFacebookPost* _currentPost;
	SLAssetDataProvider* _assetDataProvider;
	BOOL _suppressAlerts;
	NSString* _postIdentifier;
	SLFacebookPost* _post;
	NSString* _sourceAppIdentifier;
	ACAccount* _account;
	<FBDPostUploadDelegate><NSObject>* _delegate;
	/*^block*/ id _postCompletion;

}

@property (readonly) NSString * postIdentifier;                               //@synthesize postIdentifier=_postIdentifier - In the implementation block
@property (retain) SLFacebookPost * post;                                     //@synthesize post=_post - In the implementation block
@property (retain) NSString * sourceAppIdentifier;                            //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (retain) ACAccount * account;                                       //@synthesize account=_account - In the implementation block
@property (retain) <FBDPostUploadDelegate><NSObject> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id postCompletion;                                           //@synthesize postCompletion=_postCompletion - In the implementation block
@property (assign) BOOL suppressAlerts;                                       //@synthesize suppressAlerts=_suppressAlerts - In the implementation block
@property (readonly) unsigned long long totalBytes;                           //@synthesize totalBytes=_totalBytes - In the implementation block
@property (readonly) unsigned long long transferredBytes;                     //@synthesize transferredBytes=_transferredBytes - In the implementation block
@property (readonly) int type; 
-(id)post;
-(id)postIdentifier;
-(/*^block*/ id)postCompletion;
-(id)initWithPost:(id)arg1 account:(id)arg2 ;
-(void)setSuppressAlerts:(BOOL)arg1 ;
-(void)setSourceAppIdentifier:(id)arg1 ;
-(void)setPostCompletion:(/*^block*/ id)arg1 ;
-(void)setPost:(id)arg1 ;
-(void)_requestCredentialRenewal;
-(void)_notifyDelegateWithSuccess:(BOOL)arg1 ;
-(void)_directUserToCheckpointURL:(id)arg1 ;
-(void)_handleRetry;
-(BOOL)_uploadQueueEmpty;
-(void)_processUploadQueue;
-(id)_nextPost;
-(id)assetDataProvider;
-(void)_post:(id)arg1 didReceiveAssetImageData:(id)arg2 error:(id)arg3 ;
-(void)_post:(id)arg1 didReceiveAssetVideoData:(id)arg2 error:(id)arg3 ;
-(void)_fetchDataForVideoURL:(id)arg1 exportPreset:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_startUploadWithPost:(id)arg1 ;
-(id)sourceAppIdentifier;
-(void)handleResponse:(id)arg1 withError:(id)arg2 ;
-(BOOL)suppressAlerts;
-(id)facebookIconURL;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(unsigned long long)transferredBytes;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)type;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(unsigned long long)totalBytes;
-(void)startUpload;
-(void).cxx_destruct;
@end
