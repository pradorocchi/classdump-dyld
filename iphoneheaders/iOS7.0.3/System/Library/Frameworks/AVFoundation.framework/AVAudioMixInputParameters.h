/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInputParametersInternal* _inputParameters;

}

@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,readonly) opaqueMTAudioProcessingTapRef audioTapProcessor; 
-(id)_audioVolumeCurve;
-(opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(id)audioTimePitchAlgorithm;
-(void)setTrackID:(int)arg1 ;
-(id)_volumeCurveAsString;
-(void)_setRamps:(id)arg1 ;
-(void)setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(BOOL)getVolumeRampForTime:(SCD_Struct_CM4)arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(SCD_Struct_CM5*)arg4 ;
-(int)trackID;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_CM4)arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_CM5)arg3 ;
-(void)finalize;
@end

