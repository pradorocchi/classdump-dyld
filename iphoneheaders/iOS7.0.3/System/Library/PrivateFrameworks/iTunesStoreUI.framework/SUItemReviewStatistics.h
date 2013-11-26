/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {

	float _averageUserRating;
	int _numberOfUserRatings;
	NSString* _numberOfUserRatingsString;
	int _numberOfUserReviews;
	NSString* _numberOfUserReviewsString;

}

@property (assign,nonatomic) float averageUserRating;                         //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) int numberOfUserRatings;                         //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserRatingsString;              //@synthesize numberOfUserRatingsString=_numberOfUserRatingsString - In the implementation block
@property (assign,nonatomic) int numberOfUserReviews;                         //@synthesize numberOfUserReviews=_numberOfUserReviews - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserReviewsString;              //@synthesize numberOfUserReviewsString=_numberOfUserReviewsString - In the implementation block
-(float)averageUserRating;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setAverageUserRating:(float)arg1 ;
-(int)numberOfUserRatings;
-(void)setNumberOfUserRatings:(int)arg1 ;
-(id)numberOfUserRatingsString;
-(void)setNumberOfUserRatingsString:(id)arg1 ;
-(int)numberOfUserReviews;
-(void)setNumberOfUserReviews:(int)arg1 ;
-(id)numberOfUserReviewsString;
-(void)setNumberOfUserReviewsString:(id)arg1 ;
@end

