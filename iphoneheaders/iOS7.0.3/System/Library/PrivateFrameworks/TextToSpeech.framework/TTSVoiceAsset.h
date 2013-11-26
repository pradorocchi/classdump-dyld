/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {

	BOOL _isInstalled;
	NSString* _name;
	NSArray* _languages;
	int _gender;
	int _footprint;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) int gender;                       //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) int footprint;                    //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)name;
-(id)dictionaryRepresentation;
-(int)footprint;
-(int)gender;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(int)arg3 footprint:(int)arg4 isInstalled:(BOOL)arg5 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)languages;
-(BOOL)isInstalled;
-(void).cxx_destruct;
@end

