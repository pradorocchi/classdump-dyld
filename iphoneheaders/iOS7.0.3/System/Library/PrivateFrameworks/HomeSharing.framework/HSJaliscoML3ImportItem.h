/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HomeSharing/HSDAAPML3ImportItem.h>

@class NSDictionary, NSNumber;

@interface HSJaliscoML3ImportItem : HSDAAPML3ImportItem {

	NSDictionary* _chapterDataForAdamIDs;
	NSDictionary* _chapterDataForCurrentTrack;
	NSDictionary* _flavorDataForAdamIDs;
	NSDictionary* _flavorDataForCurrentTrack;
	NSNumber* _accountID;
	long long _preferredVideoQuality;

}

@property (assign,nonatomic) long long preferredVideoQuality;              //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(id)valueForProperty:(unsigned)arg1 ;
-(void)parseItemData:(id)arg1 ;
-(id)_preferredFlavorForAdamIDNumber:(id)arg1 ;
-(id)flavorDataForPropertyKey:(unsigned)arg1 ;
-(id)currentTrackPurchaseHistoryRedownloadParameters;
-(id)currentTrackChapterData;
-(id)initWithData:(id)arg1 chapterDataForAdamIDs:(id)arg2 accountID:(id)arg3 ;
-(BOOL)mediaKindIsSupported:(unsigned)arg1 ;
-(long long)preferredVideoQuality;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(BOOL)hasValueForProperty:(unsigned)arg1 ;
-(id)deduplicationPredicates;
@end

