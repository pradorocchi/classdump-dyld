/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SALocation.h>

@class NSNumber, NSString, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (nonatomic,retain) NSNumber * distance; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,retain) NSNumber * locationDate; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(void)setDistance:(id)arg1 ;
-(id)distance;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)friend;
-(void)setFriend:(id)arg1 ;
-(id)locationDate;
-(void)setLocationDate:(id)arg1 ;
@end

