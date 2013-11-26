/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@class NSMutableDictionary, UIWindow;

@interface GameCenterTest : UIApplication <UIApplicationTestingDelegate> {

	NSMutableDictionary* _optionsPerTest;
	NSMutableDictionary* _actionsPerTest;

}

@property (nonatomic,retain) NSMutableDictionary * optionsPerTest;              //@synthesize optionsPerTest=_optionsPerTest - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionsPerTest;              //@synthesize actionsPerTest=_actionsPerTest - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
+(void)completeIfPPTesting:(id)arg1 ;
+(void)failIfPPTesting:(id)arg1 ;
+(void)setPPTest:(id)arg1 action:(/*^block*/ id)arg2 ;
-(void)completeIfPPTesting:(id)arg1 ;
-(void)failIfPPTesting:(id)arg1 ;
-(void)setPPTest:(id)arg1 action:(/*^block*/ id)arg2 ;
-(id)optionsForPPTest:(id)arg1 ;
-(BOOL)shouldStartTest:(id)arg1 ;
-(void)_test:(id)arg1 switchToTab:(id)arg2 collectionViewController:(id)arg3 ;
-(void)PPTest_logout:(id)arg1 ;
-(void)PPTest_games_loading:(id)arg1 ;
-(void)PPTest_friends_loading:(id)arg1 ;
-(void)PPTest_games_scrolling:(id)arg1 ;
-(void)PPTest_friends_scrolling:(id)arg1 ;
-(void)PPTest_login:(id)arg1 ;
-(void)PPTest_friends_detail:(id)arg1 ;
-(void)PPTest_games_detail:(id)arg1 ;
-(id)optionsPerTest;
-(void)setOptionsPerTest:(id)arg1 ;
-(id)actionsPerTest;
-(void)setActionsPerTest:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

