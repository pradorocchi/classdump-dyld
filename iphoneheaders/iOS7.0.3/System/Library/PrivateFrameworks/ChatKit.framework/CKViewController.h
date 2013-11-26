/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@interface CKViewController : UIViewController {

	BOOL _appeared;
	BOOL _appearing;

}

@property (assign,nonatomic) BOOL appeared;               //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) BOOL appearing;              //@synthesize appearing=_appearing - In the implementation block
-(void)setAppearing:(BOOL)arg1 ;
-(void)significantTimeChange;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)viewDidAppearDeferredSetup;
-(void)performResumeDeferredSetup;
-(void)parentControllerDidBecomeActive;
-(void)prepareForResume;
-(void)setAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(BOOL)appeared;
-(BOOL)appearing;
-(void)systemApplicationWillEnterForeground;
-(void)prepareForSuspend;
@end

