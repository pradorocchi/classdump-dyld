/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SlidableMasterSplitViewController : UISplitViewController <UIGestureRecognizerDelegate, UISplitViewControllerDelegate> {

	UIView* _tapView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	/*^block*/ id _slideOutCompletionBlock;
	float _panHysteresisHorizontalLocation;
	unsigned _masterViewState;
	unsigned _lastGestureRecognized;

}

@property (readonly) BOOL isMasterViewShownOnTop; 
@property (assign,nonatomic) BOOL allowUserInteractionWithDetailView; 
-(BOOL)isMasterViewShownOnTop;
-(void)slideOutMasterViewAnimated:(BOOL)arg1 ;
-(void)slideInMasterViewAnimated:(BOOL)arg1 ;
-(void)setAllowUserInteractionWithDetailView:(BOOL)arg1 ;
-(void)slideOutMasterViewAnimated:(BOOL)arg1 forcibly:(BOOL)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)masterViewWillSlideIn:(BOOL)arg1 ;
-(BOOL)masterViewCanSlideOut;
-(void)removeTapGestureRecognizer;
-(BOOL)masterViewCanSlideIn;
-(void)addTapGestureRecognizer;
-(void)masterViewDidSlideIn:(BOOL)arg1 ;
-(void)masterViewWillSlideOut:(BOOL)arg1 ;
-(void)masterViewDidSlideOut:(BOOL)arg1 ;
-(BOOL)allowUserInteractionWithDetailView;
-(void)_slideInOrNavigateBack:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)tap:(id)arg1 ;
-(void)_splitViewController:(id)arg1 didUnSlideViewController:(id)arg2 ;
-(void)pan:(id)arg1 ;
@end

