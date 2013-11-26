/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBAwayViewPluginController, SBLockScreenViewController, SBLockOverlayContext;

@interface SBLockScreenPluginTransition : NSObject {

	SBAwayViewPluginController* _fromController;
	SBAwayViewPluginController* _toController;
	SBLockScreenViewController* _lockScreenViewController;
	SBLockOverlayContext* _fromOverlay;
	SBLockOverlayContext* _toOverlay;

}

@property (readonly) SBLockScreenViewController * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (readonly) SBAwayViewPluginController * fromController;                        //@synthesize fromController=_fromController - In the implementation block
@property (readonly) SBLockOverlayContext * fromOverlay;                                 //@synthesize fromOverlay=_fromOverlay - In the implementation block
@property (readonly) SBAwayViewPluginController * toController;                          //@synthesize toController=_toController - In the implementation block
@property (readonly) SBLockOverlayContext * toOverlay;                                   //@synthesize toOverlay=_toOverlay - In the implementation block
-(id)lockScreenViewController;
-(id)fromController;
-(id)toController;
-(id)fromOverlay;
-(id)toOverlay;
-(void)_removeFromView;
-(void)_addToView;
-(void)_removeViewFromHierarchy:(id)arg1 ;
-(void)beginTransition;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

