/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * height; 
@property (nonatomic,copy) NSNumber * width; 
+(id)acePicture;
+(id)acePictureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)width;
-(void)setWidth:(id)arg1 ;
-(id)height;
-(void)setHeight:(id)arg1 ;
-(id)format;
-(void)setFormat:(id)arg1 ;
-(id)encodedClassName;
@end

