/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class SASportsEntity, NSArray, NSString, NSNumber, SAUIAppPunchOut, NSDate;

@interface SASportsMatchup : SADomainObject

@property (nonatomic,retain) SASportsEntity * awayEntity; 
@property (nonatomic,copy) NSArray * awayLineScores; 
@property (nonatomic,copy) NSString * awayScore; 
@property (nonatomic,copy) NSNumber * awayShootoutPoints; 
@property (nonatomic,copy) NSString * currentPeriod; 
@property (nonatomic,copy) NSNumber * expectedLineScoreCount; 
@property (nonatomic,copy) NSString * favoredEntity; 
@property (nonatomic,retain) SASportsEntity * homeEntity; 
@property (nonatomic,copy) NSArray * homeLineScores; 
@property (nonatomic,copy) NSString * homeScore; 
@property (nonatomic,copy) NSNumber * homeShootoutPoints; 
@property (nonatomic,copy) NSString * line; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) NSString * matchupOrder; 
@property (nonatomic,copy) NSString * overUnder; 
@property (nonatomic,copy) NSString * periodDescription; 
@property (nonatomic,copy) NSArray * playSummaries; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * timeRemaining; 
@property (nonatomic,copy) NSNumber * timeTBD; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tournamentSeriesDescription; 
@property (nonatomic,copy) NSArray * tvChannels; 
@property (nonatomic,copy) NSString * winningEntity; 
+(id)matchup;
+(id)matchupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(void)setStartTime:(id)arg1 ;
-(id)title;
-(id)location;
-(void)setLine:(id)arg1 ;
-(id)line;
-(id)startTime;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)punchout;
-(void)setPunchout:(id)arg1 ;
-(id)awayEntity;
-(void)setAwayEntity:(id)arg1 ;
-(id)awayLineScores;
-(void)setAwayLineScores:(id)arg1 ;
-(id)awayScore;
-(void)setAwayScore:(id)arg1 ;
-(id)awayShootoutPoints;
-(void)setAwayShootoutPoints:(id)arg1 ;
-(id)currentPeriod;
-(void)setCurrentPeriod:(id)arg1 ;
-(id)expectedLineScoreCount;
-(void)setExpectedLineScoreCount:(id)arg1 ;
-(id)favoredEntity;
-(void)setFavoredEntity:(id)arg1 ;
-(id)homeEntity;
-(void)setHomeEntity:(id)arg1 ;
-(id)homeLineScores;
-(void)setHomeLineScores:(id)arg1 ;
-(id)homeScore;
-(void)setHomeScore:(id)arg1 ;
-(id)homeShootoutPoints;
-(void)setHomeShootoutPoints:(id)arg1 ;
-(id)locationName;
-(void)setLocationName:(id)arg1 ;
-(id)matchupOrder;
-(void)setMatchupOrder:(id)arg1 ;
-(id)overUnder;
-(void)setOverUnder:(id)arg1 ;
-(id)periodDescription;
-(void)setPeriodDescription:(id)arg1 ;
-(id)playSummaries;
-(void)setPlaySummaries:(id)arg1 ;
-(id)timeRemaining;
-(void)setTimeRemaining:(id)arg1 ;
-(id)timeTBD;
-(void)setTimeTBD:(id)arg1 ;
-(id)tournamentSeriesDescription;
-(void)setTournamentSeriesDescription:(id)arg1 ;
-(id)tvChannels;
-(void)setTvChannels:(id)arg1 ;
-(id)winningEntity;
-(void)setWinningEntity:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

