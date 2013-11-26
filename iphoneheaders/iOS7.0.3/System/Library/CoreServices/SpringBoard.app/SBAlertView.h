/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBAlert;

@interface SBAlertView : UIView {

	SBAlert* _alert;
	unsigned _shouldAnimateIn : 1;

}
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(BOOL)isAnimatingOut;
-(BOOL)shouldAddClippingViewDuringRotation;
-(void)alertWindowViewControllerResizedFromContentFrame:(CGRect)arg1 toContentFrame:(CGRect)arg2 ;
-(void)setAlert:(id)arg1 ;
-(id)alert;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)dismiss;
-(BOOL)isSupportedInterfaceOrientation:(int)arg1 ;
-(BOOL)shouldAnimateIn;
-(void)setShouldAnimateIn:(BOOL)arg1 ;
@end

