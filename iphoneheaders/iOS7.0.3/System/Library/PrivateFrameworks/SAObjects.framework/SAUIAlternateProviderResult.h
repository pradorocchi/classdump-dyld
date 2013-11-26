/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, SAUIImageResource, NSString;

@interface SAUIAlternateProviderResult : SADomainObject

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,retain) SAUIImageResource * providerImage; 
@property (nonatomic,copy) NSString * providerName; 
+(id)alternateProviderResult;
+(id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)commands;
-(void)setCommands:(id)arg1 ;
-(id)providerName;
-(id)numberOfResults;
-(void)setNumberOfResults:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setProviderName:(id)arg1 ;
-(id)providerImage;
-(void)setProviderImage:(id)arg1 ;
@end

