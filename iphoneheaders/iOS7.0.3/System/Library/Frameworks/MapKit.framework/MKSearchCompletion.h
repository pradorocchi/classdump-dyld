/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MapKit/MapKit-Structs.h>
@class NSString, NSArray, MKMapItem;

@interface MKSearchCompletion : NSObject {

	NSString* _sourceID;
	NSString* _localizedSectionHeader;

}

@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,copy) NSString * sourceID;                            //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;              //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(id)queryLine;
-(BOOL)getCoordinate:(SCD_Struct_MK0*)arg1 ;
-(id)highlightsForLine:(unsigned)arg1 ;
-(id)iconWithScale:(float)arg1 ;
-(void)sendFeedback;
-(void)applyToLocalSearchRequest:(id)arg1 ;
-(void)applyToPlaceSearchRequest:(id)arg1 ;
-(void)setSourceID:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setLocalizedSectionHeader:(id)arg1 ;
-(id)localizedSectionHeader;
-(id)calloutTitle;
-(id)displayLines;
-(id)sourceID;
-(id)mapItem;
@end

