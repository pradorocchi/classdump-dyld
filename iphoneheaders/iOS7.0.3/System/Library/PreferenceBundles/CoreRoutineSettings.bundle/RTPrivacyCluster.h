/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <MapKit/MKPolygon.h>

@class NSSet, UIColor;

@interface RTPrivacyCluster : MKPolygon {

	NSSet* _privacyLOIs;
	int _nameStyle;
	NSSet* _countrySet;
	NSSet* _administrativeAreaSet;
	NSSet* _localitySet;
	NSSet* _nameSet;
	NSSet* _subNameSet;

}

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSSet * privacyLOIs;              //@synthesize privacyLOIs=_privacyLOIs - In the implementation block
+(id)privacyClusterWithMapRect:(SCD_Struct_RT1)arg1 privacyLOIs:(id)arg2 ;
-(id)privacyLOIs;
-(id)longName;
-(SCD_Struct_RT1)bestFitMapRect;
-(void)_nameUsingPrivacyLOIs:(id)arg1 ;
-(id)privacyLOIsSortedByRecent;
-(id)privacyLOIsSortedByFrequency;
-(id)localizedInformation;
-(id)combineWithCluster:(id)arg1 ;
-(BOOL)containsCluster:(id)arg1 ;
-(id)description;
-(id)name;
-(id)color;
-(int)recentCompare:(id)arg1 ;
-(int)frequencyCompare:(id)arg1 ;
-(void).cxx_destruct;
@end

