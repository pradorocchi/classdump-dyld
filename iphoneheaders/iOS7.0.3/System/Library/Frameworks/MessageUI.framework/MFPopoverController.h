/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIPopoverController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate> {

	id _mailDelegate;
	id _mailPopoverManager;
	BOOL _isRotating;

}

@property (assign,nonatomic) <MFMailPopoverManagerDelegate> * mailDelegate;              //@synthesize mailDelegate=_mailDelegate - In the implementation block
@property (assign,nonatomic) id mailPopoverManager;                                      //@synthesize mailPopoverManager=_mailPopoverManager - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                            //@synthesize isRotating=_isRotating - In the implementation block
-(void)setMailPopoverManager:(id)arg1 ;
-(void)setMailDelegate:(id)arg1 ;
-(id)mailDelegate;
-(void)setIsRotating:(BOOL)arg1 ;
-(id)mailPopoverManager;
-(void)dealloc;
-(BOOL)isRotating;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end

