/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface PopoverRevealViewController : UIViewController {

	UIViewController* _rootViewController;
	UIViewController* _revealedViewController;
	BOOL _animating;

}

@property (nonatomic,retain) UIViewController * rootViewController;                  //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) UIViewController * revealedViewController;              //@synthesize revealedViewController=_revealedViewController - In the implementation block
-(id)revealedViewController;
-(void)dismissRevealedViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)revealViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setRevealedViewController:(id)arg1 ;
-(void)dealloc;
-(id)navigationItem;
-(void)setRootViewController:(id)arg1 ;
-(id)rootViewController;
-(void)viewDidLoad;
-(id)initWithRootViewController:(id)arg1 ;
@end

