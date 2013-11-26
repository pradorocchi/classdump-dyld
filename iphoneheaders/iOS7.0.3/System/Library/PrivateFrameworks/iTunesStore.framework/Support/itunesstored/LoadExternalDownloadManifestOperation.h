/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSOrderedSet, ExternalDownloadManifest, NSURLRequest, SSDownloadManifestResponse;

@interface LoadExternalDownloadManifestOperation : ISOperation {

	NSOrderedSet* _downloadIDs;
	ExternalDownloadManifest* _manifest;
	int _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;

}

@property (assign) int manifestFormat; 
@property (assign) BOOL shouldHideUserPrompts; 
@property (copy) NSURLRequest * URLRequest; 
@property (readonly) ExternalDownloadManifest * manifest; 
@property (readonly) SSDownloadManifestResponse * manifestResponse; 
-(id)manifestResponse;
-(BOOL)_runForPurchaseFormatWithURLRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_runForPublicFormatWithURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)_processValidDownloads:(id)arg1 ;
-(void)_showDialogForError:(id)arg1 ;
-(BOOL)_showConfirmationPromptForManifest:(id)arg1 ;
-(BOOL)_handlePublicResponseForOperation:(id)arg1 error:(id*)arg2 ;
-(id)URLRequest;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(void)run;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(int)manifestFormat;
-(id)manifest;
-(void)setURLRequest:(id)arg1 ;
-(void)setManifestFormat:(int)arg1 ;
@end

