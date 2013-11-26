/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, NSString, SSItemArtworkImage;

@interface SUItemContentRating : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	int _rank;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	int _ratingSystem;
	SSItemArtworkImage* _ratingSystemLogo;
	BOOL _shouldHideWhenRestricted;

}

@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (assign,nonatomic) int rank;                                                     //@synthesize rank=_rank - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                   //@synthesize ratingDescription=_ratingDescription - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                         //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) int ratingSystem;                                             //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) SSItemArtworkImage * ratingSystemLogo;                          //@synthesize ratingSystemLogo=_ratingSystemLogo - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (assign,nonatomic) BOOL shouldHideWhenRestricted;                                //@synthesize shouldHideWhenRestricted=_shouldHideWhenRestricted - In the implementation block
+(int)ratingSystemFromString:(id)arg1 ;
-(BOOL)_isRatingSystemForApps:(int)arg1 ;
-(BOOL)_isRatingSystemForMovies:(int)arg1 ;
-(BOOL)_isRatingSystemForTV:(int)arg1 ;
-(BOOL)isExplicitContent;
-(BOOL)_isRatingSystemForMusic:(int)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(int)ratingSystem;
-(id)ratingLabel;
-(id)ratingDescription;
-(void)setRatingDescription:(id)arg1 ;
-(void)setRatingLabel:(id)arg1 ;
-(void)setRatingSystem:(int)arg1 ;
-(int)rank;
-(void)setRank:(int)arg1 ;
-(BOOL)isRestricted;
-(BOOL)shouldHideWhenRestricted;
-(id)ratingSystemLogo;
-(void)setRatingSystemLogo:(id)arg1 ;
-(void)setShouldHideWhenRestricted:(BOOL)arg1 ;
@end

