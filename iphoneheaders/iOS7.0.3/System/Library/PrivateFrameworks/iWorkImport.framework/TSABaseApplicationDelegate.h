/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKApplicationDelegate.h>

@protocol TSADownloadDelegate;
@class TSADocumentRoot, , NSString, NSArray;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {

	TSADocumentRoot* mDocumentRoot;
	<TSADownloadDelegate>* _downloadDelegate;

}

@property (assign,nonatomic) TSADocumentRoot * documentRoot; 
@property (nonatomic,readonly) NSString * nativeDocumentType; 
@property (nonatomic,readonly) NSString * nativeDocumentExtension; 
@property (nonatomic,readonly) NSString * templateDocumentType; 
@property (nonatomic,readonly) NSString * templateSFFDocumentType; 
@property (nonatomic,readonly) NSString * templateDocumentExtension; 
@property (nonatomic,readonly) NSString * tangierEditingFormatDocumentType; 
@property (nonatomic,readonly) NSString * nativeSFFDocumentType; 
@property (nonatomic,readonly) NSArray * readableDocumentTypes; 
@property (nonatomic,readonly) NSArray * importableDocumentTypes; 
@property (nonatomic,readonly) NSArray * applicationTemplateVariants; 
@property (nonatomic,retain) <TSADownloadDelegate> * downloadDelegate;                   //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
+(void)resetSharedConfigurations;
+(id)sharedDelegate;
-(void)registerDefaults;
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(id)readableDocumentTypes;
-(id)invalidURLSchemes;
-(Class)documentRootClass;
-(void)persistenceError:(id)arg1 ;
-(id)nativeDocumentExtension;
-(id)templateDocumentExtension;
-(BOOL)isReadableDocumentType:(id)arg1 ;
-(id)applicationTemplateVariants;
-(float)mimimumAspectRatioForPreviewImage;
-(float)maximumAspectRatioForPreviewImage;
-(BOOL)URLIsValidForImportedHyperlink:(id)arg1 ;
-(id)existingNestedDocumentPathForPath:(id)arg1 ;
-(id)init;
-(BOOL)openURL:(id)arg1 ;
-(void)setDownloadDelegate:(id)arg1 ;
-(id)documentRoot;
-(void)setDocumentRoot:(id)arg1 ;
-(id)downloadDelegate;
@end

