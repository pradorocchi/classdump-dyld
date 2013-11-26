/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface VCCallLinkCongestionDetector : NSObject {

	BOOL isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;

}

@property (assign,nonatomic) BOOL isLinkCongested; 
-(id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2 ;
-(void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3 ;
-(BOOL)isLinkCongested;
-(void)setIsLinkCongested:(BOOL)arg1 ;
@end

