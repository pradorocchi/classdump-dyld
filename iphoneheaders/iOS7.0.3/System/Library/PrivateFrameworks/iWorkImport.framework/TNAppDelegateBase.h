/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (nonatomic,readonly) NSArray * excelDocumentTypes; 
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(Class)documentRootClass;
-(id)applicationTemplateVariants;
-(id)appChartPropertyOverrides;
-(id)createCompatibilityDelegate;
-(id)documentTypeDisplayName;
-(id)templateTypeDisplayName;
-(void)registerClassTypeMappings;
-(id)previewImageNameForDocumentType:(id)arg1 ;
-(id)previewImageNameForNativeDocument;
-(id)previewImageNameForEncryptedNativeDocument;
-(void)wakeUpDownloadManager;
-(void)configureSharedCode;
-(id)excelDocumentTypes;
-(Class)documentViewControllerClass;
-(id)image32IconForTXTFiles;
-(id)defaultAppStoreURLString;
-(id)init;
-(id)applicationName;
@end

