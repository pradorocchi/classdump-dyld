/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (nonatomic,copy) NSString * operation; 
@property (nonatomic,copy) NSString * value; 
+(id)setQueueQueueFilter;
+(id)setQueueQueueFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)operation;
-(void)setOperation:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)encodedClassName;
-(id)mediaItemProperty;
-(void)setMediaItemProperty:(id)arg1 ;
@end

