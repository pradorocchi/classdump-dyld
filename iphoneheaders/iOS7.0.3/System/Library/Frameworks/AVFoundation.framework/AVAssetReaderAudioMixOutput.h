/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, NSArray, NSDictionary, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {

	AVAssetReaderAudioMixOutputInternal* _audioMixOutputInternal;

}

@property (nonatomic,readonly) NSArray * audioTracks; 
@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(id)_asset;
-(id)audioTimePitchAlgorithm;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)audioTracks;
-(id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(id)audioSettings;
-(void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrack:(id)arg2 ;
-(id)_audioVolumeCurveForTrack:(id)arg1 ;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg1 ;
-(opaqueMTAudioProcessingTapRef)_audioTapProcessorForTrack:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAudioMix:(id)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)mediaType;
-(id)audioMix;
-(void)finalize;
@end

