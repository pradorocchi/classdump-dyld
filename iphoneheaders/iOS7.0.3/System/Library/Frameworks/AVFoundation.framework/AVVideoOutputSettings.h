/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) NSDictionary * cleanApertureDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelAspectRatioDictionary; 
@property (nonatomic,readonly) NSDictionary * pixelTransferProperties; 
@property (nonatomic,readonly) BOOL dimensionsAreBoundingBox; 
@property (nonatomic,readonly) NSDictionary * videoSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultVideoOutputSettings;
+(id)_validValuesForScalingMode;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(id)pixelTransferProperties;
-(id)videoSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(BOOL)dimensionsAreBoundingBox;
-(int)width;
-(int)height;
@end

