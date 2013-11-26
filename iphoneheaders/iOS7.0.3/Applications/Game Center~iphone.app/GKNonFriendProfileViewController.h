/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/GKPlayerProfileCollectionViewController.h>
#import <UIKit/UIActionSheetDelegate.h>

@interface GKNonFriendProfileViewController : GKPlayerProfileCollectionViewController <UIActionSheetDelegate> {

	BOOL _profileWasShownFromRecommendations;

}

@property (assign,nonatomic) BOOL profileWasShownFromRecommendations;              //@synthesize profileWasShownFromRecommendations=_profileWasShownFromRecommendations - In the implementation block
+(Class)headerViewClass;
-(float)preferredHeaderHeight;
-(void)updateSegmentMessages;
-(void)sendRequestTapped:(id)arg1 ;
-(void)setProfileWasShownFromRecommendations:(BOOL)arg1 ;
-(void)didTouchAction;
-(BOOL)shouldShowRemoveAction;
-(void)handleActionButton:(int)arg1 ;
-(BOOL)profileWasShownFromRecommendations;
-(void)animateOutBubbleWithFocus:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)willAnimateAppearingWithBubbleFlow;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setHeaderView:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
@end

