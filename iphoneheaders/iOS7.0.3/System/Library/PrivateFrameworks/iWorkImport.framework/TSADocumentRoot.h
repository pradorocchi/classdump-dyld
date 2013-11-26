/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKDocumentRoot.h>
#import <iWorkImport/TSKImportExportDelegate.h>

@protocol TSADocumentRootDelegate;
@class , NSMutableDictionary, TSKViewState, NSMutableSet, NSString, TSCECalculationEngine, TSAFunctionBrowserState, TSTCustomFormatList, NSArray, NSSet;

@interface TSADocumentRoot : TSKDocumentRoot <TSKImportExportDelegate> {

	int _needsToCaptureViewState;
	<TSADocumentRootDelegate>* _delegate;
	NSMutableDictionary* _upgradeState;
	TSKViewState* _viewState;
	NSMutableSet* _warnings;
	NSString* _creationLanguage;
	unsigned _creationLanguageWritingDirection;
	TSCECalculationEngine* _calculationEngine;
	TSAFunctionBrowserState* _functionBrowserState;
	TSTCustomFormatList* _tablesCustomFormatList;
	BOOL _needsMovieCompatibilityUpgrade;
	NSString* _templateIdentifier;
	BOOL _hasPreUFFVersion;
	NSArray* buildVersionHistory;

}

@property (nonatomic,readonly) TSKViewState * viewState; 
@property (nonatomic,readonly) NSSet * missingFontWarningMessages; 
@property (assign,nonatomic) BOOL needsMovieCompatibilityUpgrade; 
@property (assign,nonatomic) <TSADocumentRootDelegate> * delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (getter=isDocumentEditedSinceLastSave,nonatomic,readonly) BOOL documentEditedSinceLastSave; 
@property (nonatomic,copy) NSArray * buildVersionHistory; 
@property (nonatomic,copy) NSString * templateIdentifier; 
@property (assign,nonatomic) BOOL hasPreUFFVersion;                                                                //@synthesize hasPreUFFVersion=_hasPreUFFVersion - In the implementation block
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
+(id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3 ;
+(void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2 ;
+(id)buildVersionHistoryPath;
+(CGSize)previewImageMaxSizeForType:(unsigned)arg1 ;
+(BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4 ;
+(id)supportedPreviewImageExtensions;
+(void)removeExistingPreviewsForDocumentAtPath:(id)arg1 ;
+(void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(/*^block*/ id)arg7 ;
+(id)scaledPreviewImageForType:(unsigned)arg1 scalableImage:(id)arg2 ;
+(CGSize)previewImageSizeForType:(unsigned)arg1 ;
+(id)buildVersionHistoryPathPreUFF;
+(BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 ;
+(void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 ;
+(void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2 ;
+(void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2 ;
-(void)willClose;
-(id)additionalDocumentPropertiesForWrite;
-(id)packageDataForWrite;
-(BOOL)hasPreUFFVersion;
-(void)saveToArchive:(DocumentArchive*)arg1 archiver:(id)arg2 ;
-(void)setCalculationEngine:(id)arg1 ;
-(void)documentDidLoad;
-(id)calculationEngine;
-(void)loadFromArchive:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_updateCreationLanguage;
-(id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1 ;
-(void)setBuildVersionHistory:(id)arg1 ;
-(void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1 ;
-(id)buildVersionHistory;
-(void)setCreationLanguage:(id)arg1 ;
-(id)upgradeState;
-(void)setHasPreUFFVersion:(BOOL)arg1 ;
-(void)stashUpgradeState:(const DocumentArchive*)arg1 unarchiver:(id)arg2 ;
-(void)setFunctionBrowserState:(id)arg1 ;
-(void)upgradeTextStylesForUnity;
-(BOOL)isMultiPageForQuickLook;
-(void)fulfillPasteboardPromises;
-(BOOL)hasICloudConflict;
-(id)captureViewState;
-(id)createViewStateRoot;
-(void)updateViewStateWithRoot:(id)arg1 ;
-(id)previewImageForSize:(CGSize)arg1 ;
-(void)blockForRecalcWithTimeout:(double)arg1 ;
-(void)p_registerAllFormulasAfterImport;
-(BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned*)arg3 ;
-(id)protected_defaultTextPresetOrdering;
-(void)pUpgradeHyperlinksInStorage:(id)arg1 ;
-(void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1 ;
-(void)pUpgradeHyperlinks;
-(BOOL)isDocumentEditedSinceLastSave;
-(void)p_removeStyles:(id)arg1 ;
-(void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2 ;
-(void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2 ;
-(id)referencedStylesOfClass:(Class)arg1 ;
-(id)documentCachePath;
-(id)defaultDraftName;
-(long long)addObserverForICloudTeardownWithBlock:(/*^block*/ id)arg1 ;
-(void)removeWarning:(id)arg1 ;
-(id)creationLanguage;
-(id)templateIdentifier;
-(void)setTemplateIdentifier:(id)arg1 ;
-(BOOL)needsMovieCompatibilityUpgrade;
-(void)setNeedsMovieCompatibilityUpgrade:(BOOL)arg1 ;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg1 ;
-(void)updateWritingDirection:(unsigned)arg1 ;
-(void)documentDidSave;
-(void)initializeForImport;
-(id)functionBrowserState;
-(id)customFormatList;
-(void)setCustomFormatList:(id)arg1 ;
-(void)captureViewStateIfNeeded;
-(void)invalidateViewState;
-(void)suspendBackgroundActivities;
-(void)resumeBackgroundActivities;
-(void)suspendThumbnailing;
-(void)resumeThumbnailing;
-(void)prepareToGeneratePreview;
-(id)missingFontWarningMessages;
-(void)importerDidFinish:(id)arg1 ;
-(id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3 ;
-(BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3 ;
-(void)prepareForSavingAsTemplate;
-(void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2 ;
-(id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3 ;
-(void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1 ;
-(BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2 ;
-(id)dataFromDocumentCachePath:(id)arg1 ;
-(void)didSaveWithEncryptionChange;
-(BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2 ;
-(CGImageSourceRef)newImageSourceForDocumentCachePath:(id)arg1 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg1 ;
-(void)changeDocumentCacheFileProtection:(id)arg1 ;
-(id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2 ;
-(id)namedTextStyles;
-(id)viewState;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)name;
-(id)initWithContext:(id)arg1 ;
-(unsigned)writingDirection;
-(void)willEnterForeground;
-(id)previewImage;
-(void)addWarning:(id)arg1 ;
-(id)warnings;
-(void)didEnterBackground;
@end

