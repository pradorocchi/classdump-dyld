/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(void)initialize;
+(id)defaultOrderingProperties;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)allProperties;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)artworkCacheIDProperty;
+(id)effectiveAlbumArtistNameForAlbumArtistName:(id)arg1 artistName:(id)arg2 seriesName:(id)arg3 compilation:(BOOL)arg4 ;
+(id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)arg1 albumArtistName:(id)arg2 artistSortName:(id)arg3 artistName:(id)arg4 compilation:(BOOL)arg5 ;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3 ;
@end

