/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIPageViewControllerDelegate <NSObject>
@optional
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
-(int)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(int)arg2;
-(unsigned)pageViewControllerSupportedInterfaceOrientations:(id)arg1;
-(int)pageViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
@end

