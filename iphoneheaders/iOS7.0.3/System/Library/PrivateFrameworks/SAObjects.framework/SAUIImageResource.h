/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * imageData; 
@property (assign,nonatomic) double pointHeight; 
@property (assign,nonatomic) double pointWidth; 
@property (nonatomic,copy) NSURL * resourceUrl; 
@property (assign,nonatomic) double scaleFactor; 
+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)imageData;
-(void)setImageData:(id)arg1 ;
-(void)setPointHeight:(double)arg1 ;
-(id)encodedClassName;
-(double)pointHeight;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(id)resourceUrl;
-(void)setResourceUrl:(id)arg1 ;
@end

