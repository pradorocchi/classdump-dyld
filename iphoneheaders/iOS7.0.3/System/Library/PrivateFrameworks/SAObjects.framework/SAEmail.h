/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAEmail : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSNumber * favoriteFacetime; 
@property (nonatomic,copy) NSNumber * favoriteFacetimeAudio; 
@property (nonatomic,copy) NSString * label; 
+(id)email;
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setEmailAddress:(id)arg1 ;
-(id)emailAddress;
-(id)encodedClassName;
-(id)favoriteFacetime;
-(void)setFavoriteFacetime:(id)arg1 ;
-(id)favoriteFacetimeAudio;
-(void)setFavoriteFacetimeAudio:(id)arg1 ;
@end

