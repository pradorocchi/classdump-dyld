/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIBannerTarget <NSObject>
@property (nonatomic,readonly) int bannerTargetIdiom; 
@required
-(int)bannerTargetIdiom;
-(id)currentBannerContextForSource:(id)arg1;
-(void)registerSource:(id)arg1;
-(void)unregisterSource:(id)arg1;
-(void)signalSource:(id)arg1;
-(void)dismissCurrentBannerContextForSource:(id)arg1;
@end
