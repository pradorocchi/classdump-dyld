/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIGestureRecognizer.h>

@class UIView;

@interface UIGobblerGestureRecognizer : UIGestureRecognizer {

	UIView* _excludedView;

}
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 excludedView:(id)arg3 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
@end

