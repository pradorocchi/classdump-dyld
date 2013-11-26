/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAWebWebResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * url; 
+(id)webResult;
+(id)webResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setDescription:(id)arg1 ;
-(id)encodedClassName;
@end

