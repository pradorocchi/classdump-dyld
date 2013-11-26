/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMapAnnotationAnimatable.h>

@class NSMutableSet, NSArray, NSObject, NSString, NSDate;

@interface PUMapAggregateAnnotation : NSObject <PUMapAnnotationAnimatable> {

	SCD_Struct_PU9 _originalCoordinate;
	unsigned _hash;
	NSMutableSet* _subAnnotations;
	NSArray* _mapItems;
	NSObject* _itemId;
	unsigned _relativeOrder;
	SCD_Struct_PU9 _coordinate;

}

@property (nonatomic,readonly) SCD_Struct_PU9 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_PU9 originalCoordinate; 
@property (nonatomic,readonly) NSObject * itemId; 
@property (nonatomic,readonly) NSDate * dateCreated; 
@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) NSArray * mapItems; 
@property (nonatomic,readonly) NSMutableSet * subAnnotations; 
@property (assign,nonatomic) unsigned relativeOrder;                           //@synthesize relativeOrder=_relativeOrder - In the implementation block
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(int)compare:(id)arg1 ;
-(id)subtitle;
-(id)dateCreated;
-(SCD_Struct_PU9)coordinate;
-(id)newestMaxMapItems:(unsigned)arg1 ;
-(id)compactDescription;
-(id)itemId;
-(id)mapItems;
-(SCD_Struct_PU9)originalCoordinate;
-(void)setCoordinate:(SCD_Struct_PU9)arg1 ;
-(void)resetCoordinateToOriginal;
-(BOOL)containsAnnotation:(id)arg1 ;
-(int)annotationSortingCompareWithAnnotation:(id)arg1 ;
-(id)subAnnotations;
-(unsigned)relativeOrder;
-(void)setRelativeOrder:(unsigned)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_PU9)arg1 mapItems:(id)arg2 ;
-(void)addSubAnnotation:(id)arg1 ;
-(void)_updateComputedValuesForSubAnnotationUpdate;
-(void)removeSubAnnotation:(id)arg1 ;
-(void)removeAllSubAnnotations;
-(void).cxx_destruct;
@end

