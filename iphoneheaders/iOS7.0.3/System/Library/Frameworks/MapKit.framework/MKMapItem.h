/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKURLSerializable.h>

@class NSString, GEOPlace, MKPlacemark, NSURL, NSNumber;

@interface MKMapItem : NSObject <MKURLSerializable> {

	BOOL _isCurrentLocation;
	NSString* _extSessionGuid;
	GEOPlace* _place;
	BOOL _isPlaceHolder;

}

@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (assign,nonatomic) BOOL isCurrentLocation;                  //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) GEOPlace * place;                      //@synthesize place=_place - In the implementation block
@property (nonatomic,copy) NSString * extSessionGuid;                 //@synthesize extSessionGuid=_extSessionGuid - In the implementation block
@property (nonatomic,retain) NSString * businessID; 
@property (nonatomic,retain) NSString * yelpID; 
@property (nonatomic,retain) NSNumber * numberOfReviews; 
@property (nonatomic,retain) NSNumber * rating; 
@property (nonatomic,retain) NSNumber * numberOfRatings; 
@property (nonatomic,readonly) BOOL isPlaceHolder;                    //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)mapItemForCurrentLocation;
+(id)mapItemWithDictionary:(id)arg1 ;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
+(void)_geocode:(id)arg1 isForward:(BOOL)arg2 mapItem:(/*^block*/ id)arg3 ;
+(void)_mapItemGeocodedForCoordinate:(SCD_Struct_MK1)arg1 mapItem:(/*^block*/ id)arg2 ;
+(void)_mapItemGeocodedForAddressDictionary:(id)arg1 mapItem:(/*^block*/ id)arg2 ;
+(void)_mapItemGeocodedForStructuredLocation:(id)arg1 mapItem:(/*^block*/ id)arg2 ;
-(void)setPhoneNumber:(id)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(id)initWithPlaceResult:(id)arg1 ;
-(id)placemark;
-(id)initWithPlaceSearchResponse:(id)arg1 name:(id)arg2 ;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(BOOL)isCurrentLocation;
-(id)_getBusiness;
-(id)yelpID;
-(id)_getRating;
-(id)initWithPlace:(id)arg1 sessionGuid:(id)arg2 ;
-(id)_urlRepresentationForStructuredAddress:(id)arg1 ;
-(id)_structuredAddressForUrlRespresentation:(id)arg1 ;
-(id)urlRepresentation;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(void)setYelpID:(id)arg1 ;
-(BOOL)openInMapsWithLaunchOptions:(id)arg1 ;
-(id)extSessionGuid;
-(void)setExtSessionGuid:(id)arg1 ;
-(BOOL)isPlaceHolder;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)phoneNumber;
-(id)dictionaryRepresentation;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)initWithAddressDictionary:(id)arg1 ;
-(id)numberOfRatings;
-(void)setNumberOfRatings:(id)arg1 ;
-(id)numberOfReviews;
-(void)setNumberOfReviews:(id)arg1 ;
-(void)setBusinessID:(id)arg1 ;
-(id)place;
-(id)initWithPlace:(id)arg1 ;
-(id)businessID;
@end

