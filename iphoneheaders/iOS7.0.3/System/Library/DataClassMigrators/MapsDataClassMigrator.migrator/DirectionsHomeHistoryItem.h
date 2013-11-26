/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/HistoryItem.h>

@class SearchResult, AddressBookAddress;

@interface DirectionsHomeHistoryItem : NSObject <HistoryItem> {

	SearchResult* _currentLocation;
	AddressBookAddress* _homeAddress;

}

@property (nonatomic,retain) SearchResult * currentLocation;                //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) AddressBookAddress * homeAddress;              //@synthesize homeAddress=_homeAddress - In the implementation block
-(void)setHomeAddress:(id)arg1 ;
-(id)homeAddress;
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)type;
@end

