/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
+(id)sharedManager;
-(id)allCities;
-(id)citiesMatchingName:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(id)citySearchMatcher;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
@end

