/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADBannerViewDelegate <NSObject>
@optional
-(void)bannerViewWillLoadAd:(id)arg1;
-(void)bannerViewDidLoadAd:(id)arg1;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)bannerViewActionDidFinish:(id)arg1;
@end

