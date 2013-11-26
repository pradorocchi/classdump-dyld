/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEORating : PBCodable <NSCopying> {

	double _maxScore;
	double _score;
	int _numberOfRatings;
	int _numberOfReviews;
	NSString* _provider;
	NSMutableArray* _reviews;
	NSString* _uRL;
	SCD_Struct_GE47 _has;

}

@property (nonatomic,readonly) float numberOfStars; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                          //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore;                       //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfRatings; 
@property (assign,nonatomic) int numberOfRatings;                   //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) BOOL hasProvider; 
@property (nonatomic,retain) NSString * provider;                   //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                        //@synthesize uRL=_uRL - In the implementation block
@property (nonatomic,retain) NSMutableArray * reviews;              //@synthesize reviews=_reviews - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfReviews; 
@property (assign,nonatomic) int numberOfReviews;                   //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
-(float)numberOfStars;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(double)score;
-(void)setProvider:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasURL;
-(id)uRL;
-(void)setReviews:(id)arg1 ;
-(void)addReview:(id)arg1 ;
-(BOOL)hasMaxScore;
-(BOOL)hasNumberOfRatings;
-(int)numberOfRatings;
-(void)setNumberOfRatings:(int)arg1 ;
-(BOOL)hasProvider;
-(unsigned)reviewsCount;
-(void)clearReviews;
-(id)reviewAtIndex:(unsigned)arg1 ;
-(BOOL)hasNumberOfReviews;
-(int)numberOfReviews;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(void)setHasNumberOfRatings:(BOOL)arg1 ;
-(void)setHasNumberOfReviews:(BOOL)arg1 ;
-(id)reviews;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasScore;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(id)provider;
@end

