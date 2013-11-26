/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBIconModelStore, SBIconModelApplicationDataSource, SBIconModelDelegate;
@class NSDictionary, NSSet, NSMutableDictionary, SBRootFolder, SBNewsstandIcon, ;

@interface SBIconModel : NSObject {

	NSDictionary* _desiredIconState;
	NSSet* _desiredIconStateFlattened;
	NSMutableDictionary* _leafIconsByIdentifier;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
	BOOL _tagsHaveBeenSet;
	SBRootFolder* _rootFolder;
	SBNewsstandIcon* _newsstandIcon;
	<SBIconModelStore>* _store;
	<SBIconModelApplicationDataSource>* _applicationDataSource;
	<SBIconModelDelegate>* _delegate;
	BOOL _allowsSaving;

}

@property (assign,nonatomic) BOOL allowsSaving;                                                         //@synthesize allowsSaving=_allowsSaving - In the implementation block
@property (assign,nonatomic) <SBIconModelDelegate> * delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) <SBIconModelStore> * store;                                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) <SBIconModelApplicationDataSource> * applicationDataSource;              //@synthesize applicationDataSource=_applicationDataSource - In the implementation block
@property (nonatomic,retain) NSDictionary * leafIconsByIdentifier;                                      //@synthesize leafIconsByIdentifier=_leafIconsByIdentifier - In the implementation block
+(id)modernIconStateForState:(id)arg1 ;
+(id)displayIdentifiersInIconState:(id)arg1 ;
+(id)_modernIconListsForLists:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_migrateLeafIdentifierIfNecessary:(id)arg1 ;
+(id)_modernIconCellForCell:(id)arg1 allowFolders:(BOOL)arg2 ;
+(id)_modernIconListForList:(id)arg1 allowFolders:(BOOL)arg2 ;
-(void)localeChanged;
-(id)newsstandIcon;
-(id)newsstandFolder;
-(id)rootFolder;
-(void)clearDesiredIconState;
-(id)addBookmarkIconForWebClip:(id)arg1 ;
-(id)leafIconForWebClipIdentifier:(id)arg1 ;
-(id)leafIconForIdentifier:(id)arg1 ;
-(id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2 ;
-(id)downloadingIconForIdentifier:(id)arg1 ;
-(id)exportState:(BOOL)arg1 ;
-(id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2 ;
-(void)removeIcon:(id)arg1 ;
-(id)visibleIconIdentifiers;
-(BOOL)hasDesiredIconState;
-(void)saveIconState;
-(id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(BOOL*)arg2 replaceExistingIconAtIndexPath:(id*)arg3 ;
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(void)loadAllIcons;
-(void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2 ;
-(BOOL)importState:(id)arg1 ;
-(id)leafIcons;
-(void)_postIconVisibilityChangedNotificationShowing:(id)arg1 hiding:(id)arg2 ;
-(BOOL)_canAddDownloadingIconForBundleID:(id)arg1 ;
-(void)removeIconForIdentifier:(id)arg1 ;
-(void)addIconForApplication:(id)arg1 ;
-(id)addDownloadingIconForDownload:(id)arg1 ;
-(void)removeApplicationIconForDownloadingIcon:(id)arg1 ;
-(void)_addNewsstandIcon;
-(id)_iconState;
-(id)iconState;
-(void)deleteIconState;
-(void)_addNewIconToDesignatedLocation:(id)arg1 ;
-(id)_indexPathForIdentifier:(id)arg1 inListsRepresentation:(id)arg2 ;
-(id)_indexPathForIdentifier:(id)arg1 inListRepresentation:(id)arg2 ;
-(id)_flattenIconState:(id)arg1 ;
-(id)indexPathForIconInPlatformState:(id)arg1 ;
-(id)_indexPathForFirstFreeNewsstandSlot;
-(void)_replaceAppIconsWithDownloadingIcons:(id)arg1 ;
-(void)_flattenIconListState:(id)arg1 intoArray:(id)arg2 ;
-(id)newsstandFolderFromIconState:(id)arg1 ;
-(void)_replaceAppIconsWithDownloadingIcons;
-(void)_createIconLists;
-(void)clearDesiredIconStateIfPossible;
-(void)_saveDesiredIconState;
-(void)setLeafIconsByIdentifier:(id)arg1 ;
-(id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3 ;
-(id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3 ;
-(id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2 ;
-(id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3 ;
-(id)_iTunesDictionaryForLeafIcon:(id)arg1 ;
-(id)_iTunesDictionaryForDownloadingIcon:(id)arg1 ;
-(id)_iTunesDictionaryForLeafIdentifier:(id)arg1 ;
-(id)createFolderIconForFolderType:(id)arg1 ;
-(id)leafIconForWebClip:(id)arg1 ;
-(id)_applicationIcons;
-(id)expectedIconForDisplayIdentifier:(id)arg1 ;
-(id)_newsstandIconIdentifiersFromIconState:(id)arg1 ;
-(id)leafIconsByIdentifier;
-(BOOL)allowsSaving;
-(void)setAllowsSaving:(BOOL)arg1 ;
-(id)applicationDataSource;
-(BOOL)isIconVisible:(id)arg1 ;
-(id)applicationIconForDisplayIdentifier:(id)arg1 ;
-(id)store;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)layout;
-(void)addIcon:(id)arg1 ;
@end

