/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/STSummaryController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIActionSheet;

@interface STPersonalBestController : STSummaryController <UIActionSheetDelegate> {

	UIActionSheet* _clearSheet;

}
+(id)displayedAchievements;
-(id)initWithSummaryItems:(id)arg1 ;
-(void)_clearPersonalBestsWithConfirmation;
-(void)_clearPersonalBests;
-(void)layoutSummaryItems;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

