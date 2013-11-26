/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class MPMediaLibrary, MPMediaQueryCriteria, NSArray, MPMediaPlaylist, MPMediaItemCollection, NSSet, MPMediaQuerySectionInfo;

@interface MPMediaQuery : NSObject <NSSecureCoding, NSCopying> {

	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	int _staticEntityType;

}

@property (nonatomic,readonly) MPMediaPlaylist * containingPlaylist; 
@property (nonatomic,readonly) MPMediaItemCollection * collectionByJoiningCollections; 
@property (nonatomic,retain) NSSet * filterPredicates; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSArray * collections; 
@property (assign,nonatomic) int groupingType; 
@property (nonatomic,readonly) NSArray * itemSections; 
@property (nonatomic,readonly) NSArray * collectionSections; 
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,copy) NSSet * itemPropertiesToFetch; 
@property (nonatomic,copy) NSSet * collectionPropertiesToFetch; 
@property (setter=_setOrderingProperties:,getter=_orderingProperties,nonatomic,copy) NSArray * orderingProperties; 
@property (assign,nonatomic) BOOL sortItems; 
@property (assign,nonatomic) BOOL useSections; 
@property (nonatomic,readonly) BOOL _hasItems; 
@property (nonatomic,readonly) BOOL _hasCollections; 
@property (nonatomic,readonly) unsigned _countOfItems; 
@property (nonatomic,readonly) unsigned _countOfCollections; 
@property (nonatomic,readonly) NSArray * itemPersistentIdentifiers; 
@property (nonatomic,readonly) NSArray * collectionPersistentIdentifiers; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * itemSectionInfo; 
@property (nonatomic,readonly) MPMediaQuerySectionInfo * collectionSectionInfo; 
@property (nonatomic,readonly) BOOL excludesEntitiesWithBlankNames; 
@property (nonatomic,readonly) BOOL specifiesPlaylistItems; 
@property (nonatomic,readonly) BOOL willGroupEntities; 
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
+(id)audiobooksQuery;
+(void)initFilteringDisabled;
+(id)moviesQuery;
+(BOOL)isFilteringDisabled;
+(id)albumsQuery;
+(id)artistsQuery;
+(id)songsQuery;
+(id)playlistsQuery;
+(id)podcastsQuery;
+(id)ITunesUQuery;
+(id)ITunesUAudioQuery;
+(id)videoITunesUQuery;
+(id)audibleAudiobooksQuery;
+(id)compilationsQuery;
+(id)composersQuery;
+(id)genresQuery;
+(void)setFilteringDisabled:(BOOL)arg1 ;
+(id)videosQuery;
+(id)musicVideosQuery;
+(id)tvShowsQuery;
+(id)homeVideosQuery;
+(id)movieRentalsQuery;
+(id)videoPodcastsQuery;
+(id)geniusMixesQuery;
+(id)activeGeniusPlaylist;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)currentDevicePurchasesPlaylist;
-(id)filterPredicates;
-(int)groupingType;
-(id)mediaLibrary;
-(id)initWithFilterPredicates:(id)arg1 ;
-(void)setFilterPredicates:(id)arg1 ;
-(id)initWithCriteria:(id)arg1 library:(id)arg2 ;
-(id)initWithFilterPredicatesInternal:(id)arg1 ;
-(BOOL)_isFilteringDisabled;
-(void)setStaticEntities:(id)arg1 entityType:(int)arg2 ;
-(void)setGroupingType:(int)arg1 ;
-(void)setSortItems:(BOOL)arg1 ;
-(void)addFilterPredicate:(id)arg1 ;
-(id)collections;
-(BOOL)specifiesPlaylistItems;
-(unsigned)groupingThreshold;
-(id)itemSectionInfo;
-(id)collectionSectionInfo;
-(id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(int)arg3 ;
-(void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)initWithEntities:(id)arg1 entityType:(int)arg2 ;
-(id)copyByRemovingStaticEntities;
-(void)removeFilterPredicate:(id)arg1 ;
-(void)setMediaLibrary:(id)arg1 ;
-(id)itemPropertiesToFetch;
-(void)setItemPropertiesToFetch:(id)arg1 ;
-(id)collectionPropertiesToFetch;
-(void)setCollectionPropertiesToFetch:(id)arg1 ;
-(BOOL)_hasItems;
-(BOOL)_hasCollections;
-(unsigned)_countOfItems;
-(unsigned)_countOfCollections;
-(id)itemPersistentIdentifiers;
-(id)collectionPersistentIdentifiers;
-(void)_setOrderingProperties:(id)arg1 ;
-(id)_orderingProperties;
-(BOOL)sortItems;
-(void)setUseSections:(BOOL)arg1 ;
-(BOOL)useSections;
-(BOOL)excludesEntitiesWithBlankNames;
-(BOOL)willGroupEntities;
-(id)itemSections;
-(id)collectionSections;
-(id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 ;
-(id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 ;
-(void)_enumerateItemsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_enumerateUnorderedItemsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_enumerateCollectionsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_enumerateUnorderedCollectionsUsingBlock:(/*^block*/ id)arg1 ;
-(id)criteria;
-(void)setCriteria:(id)arg1 ;
-(id)predicateForProperty:(id)arg1 ;
-(id)MPSD_mediaQueryForDownloadableEntities;
-(void)removePredicatesForProperty:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 forProperty:(id)arg2 ;
-(id)containingPlaylist;
-(void)setFilterPropertyPredicate:(id)arg1 ;
-(BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2 ;
-(id)collectionByJoiningCollections;
-(id)MPSD_mediaQueryForDownloadingEntities;
-(BOOL)MPSD_hasDownloadableEntities;
-(BOOL)MPSD_hasDownloadingEntities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)items;
-(BOOL)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

