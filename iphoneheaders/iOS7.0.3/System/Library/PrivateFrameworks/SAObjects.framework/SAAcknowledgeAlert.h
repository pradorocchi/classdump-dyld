/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (nonatomic,retain) SADomainObject * object; 
+(id)acknowledgeAlert;
+(id)acknowledgeAlertWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

