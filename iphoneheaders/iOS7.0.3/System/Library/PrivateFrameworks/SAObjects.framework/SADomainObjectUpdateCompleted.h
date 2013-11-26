/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSURL, NSString;

@interface SADomainObjectUpdateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)domainObjectUpdateCompleted;
+(id)domainObjectUpdateCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)encodedClassName;
@end

