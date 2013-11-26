/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSString * subject; 
+(id)emailPayload;
+(id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)encodedClassName;
-(id)recipientsTo;
-(void)setRecipientsTo:(id)arg1 ;
@end

