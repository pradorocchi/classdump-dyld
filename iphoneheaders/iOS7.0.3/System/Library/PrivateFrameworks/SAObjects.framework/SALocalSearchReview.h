/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACalendar, SAUIAppPunchOut, SALocalSearchRating;

@interface SALocalSearchReview : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,retain) SACalendar * lastUpdated; 
@property (nonatomic,copy) NSString * publication; 
@property (nonatomic,retain) SAUIAppPunchOut * reviewPunchOut; 
@property (nonatomic,retain) SALocalSearchRating * reviewRating; 
+(id)reviewWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)review;
-(void)setComment:(id)arg1 ;
-(id)groupIdentifier;
-(void)setLastUpdated:(id)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(id)author;
-(id)comment;
-(id)encodedClassName;
-(id)publication;
-(void)setPublication:(id)arg1 ;
-(id)reviewPunchOut;
-(void)setReviewPunchOut:(id)arg1 ;
-(id)reviewRating;
-(void)setReviewRating:(id)arg1 ;
-(id)lastUpdated;
@end

