/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class SSURLConnectionRequest, NSString, NSURL;

@interface SagaUploadLibraryOperation : CloudLibraryOperation {

	SSURLConnectionRequest* _addComputerRequest;
	SSURLConnectionRequest* _checkRequest;
	NSString* _cuid;
	SSURLConnectionRequest* _matchedTracksRequest;
	NSURL* _resultURL;
	NSString* _troveid;
	NSURL* _updateid;
	SSURLConnectionRequest* _updateRequest;
	NSURL* _uploadURL;

}
-(void)_registerDeviceAndRetrieveUploadTokens;
-(id)_determineUploadURL;
-(id)_newUploadMetadataPayload;
-(id)_determineMatchingResultsURL;
-(id)_requestWithURL:(id)arg1 ;
-(void)_assignCloudIDsForMatchedTracks:(id)arg1 ;
-(id)_requestWithURLBagKey:(id)arg1 bodyPayload:(id)arg2 ;
-(id)_plistKeyForML3TrackProperty:(id)arg1 ;
-(id)_newItemsToUpload;
-(void)dealloc;
-(void)cancel;
-(void)main;
-(void).cxx_destruct;
@end

