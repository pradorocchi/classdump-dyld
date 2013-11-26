/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSData, NSString;

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _precomposed;
	int _format;
	NSData* _imageData;
	NSString* _imagePath;
	NSString* _imageName;
	NSString* _bundlePath;

}

@property (assign,nonatomic) int format;                                         //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imagePath;                                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                 //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_variantWithFormat:(int)arg1 ;
+(id)variantWithFormat:(int)arg1 imageData:(id)arg2 ;
+(id)variantWithFormat:(int)arg1 imagePath:(id)arg2 ;
+(id)variantWithFormat:(int)arg1 imageName:(id)arg2 inBundle:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bundlePath;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isPrecomposed;
-(void)setPrecomposed:(BOOL)arg1 ;
-(void)setImagePath:(id)arg1 ;
-(void)setImageName:(id)arg1 ;
-(void)setBundlePath:(id)arg1 ;
-(id)imagePath;
-(id)imageData;
-(void)setImageData:(id)arg1 ;
-(id)imageName;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end

