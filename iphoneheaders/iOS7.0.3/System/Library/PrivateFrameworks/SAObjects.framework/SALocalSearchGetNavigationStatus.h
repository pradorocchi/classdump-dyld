/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (nonatomic,copy) NSNumber * getRoute; 
+(id)getNavigationStatus;
+(id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)getRoute;
-(void)setGetRoute:(id)arg1 ;
@end

