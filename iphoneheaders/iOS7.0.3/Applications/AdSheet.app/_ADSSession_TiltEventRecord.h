/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface _ADSSession_TiltEventRecord : NSObject {

	NSArray* _bannerIdentifiers;
	/*^block*/ id _stationEntryReplyBlock;
	/*^block*/ id _songBeganReplyBlock;

}

@property (nonatomic,retain) NSArray * bannerIdentifiers;              //@synthesize bannerIdentifiers=_bannerIdentifiers - In the implementation block
@property (nonatomic,copy) id stationEntryReplyBlock;                  //@synthesize stationEntryReplyBlock=_stationEntryReplyBlock - In the implementation block
@property (nonatomic,copy) id songBeganReplyBlock;                     //@synthesize songBeganReplyBlock=_songBeganReplyBlock - In the implementation block
-(void)setBannerIdentifiers:(id)arg1 ;
-(void)setSongBeganReplyBlock:(/*^block*/ id)arg1 ;
-(void)setStationEntryReplyBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)stationEntryReplyBlock;
-(id)bannerIdentifiers;
-(/*^block*/ id)songBeganReplyBlock;
-(void)dealloc;
@end

