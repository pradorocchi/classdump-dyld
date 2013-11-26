/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIRemoveControlMinusButton, NSString;

@interface UIRemoveControl : UIView {

	UIView* _target;
	id _delegate;
	UIView* _removeConfirmationButton;
	UIRemoveControlMinusButton* _minusButton;
	NSString* _label;
	struct {
		unsigned removeButtonVisible : 1;
		unsigned removeConfirmationVisible : 1;
		unsigned removedFromTargetWhenHidden : 1;
		unsigned disableToggleRotate : 1;
		unsigned alwaysHideRemoveButton : 1;
		unsigned editingStyle : 3;
		unsigned reserved : 23;
	}  _removeControlFlags;

}
+(void)hideAllRemoveConfirmationsInView:(id)arg1 ;
+(float)removeButtonWidth;
+(BOOL)removeConfirmationsVisibleInView:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(id)delegate;
-(void)setTarget:(id)arg1 ;
-(id)_interceptEvent:(id)arg1 ;
-(id)_interceptMouseEvent:(GSEventRef)arg1 ;
-(void)_setInterceptMouseEvent:(BOOL)arg1 ;
-(id)_scriptingInfo;
-(id)initWithTarget:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)isHighlighted;
-(void)setSelected:(BOOL)arg1 ;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(BOOL)_isInsertControl;
-(void)_showDeleteConfirmation:(id)arg1 ;
-(float)_verticalOffsetFromTarget;
-(void)_doInsert:(id)arg1 ;
-(void)_doRemove:(id)arg1 ;
-(void)addConfirmationButtonSubview:(id)arg1 withWidth:(float)arg2 target:(id)arg3 ;
-(BOOL)isRemoveConfirmationVisible;
-(void)_hideRemoveConfirmation;
-(CGRect)_removeConfirmationEndingFrame;
-(BOOL)removedFromTargetWhenHidden;
-(void)minusButtonDidHide:(id)arg1 ;
-(CGRect)defaultRemoveButtonStartingFrame;
-(CGRect)defaultRemoveButtonEndingFrame;
-(id)removeConfirmationButton;
-(CGRect)removeButtonStartingFrame;
-(CGRect)removeButtonEndingFrame;
-(void)_minusButtonFadeAnimationStopped;
-(CGRect)targetContentBounds;
-(CGRect)_removeConfirmationStartingFrame;
-(float)removeButtonAnimationDuration;
-(void)_confirmationAnimationDidEnd;
-(void)setRemoveConfirmationVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setRemoveConfirmationShowing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_hideRemoveAnimationDone;
-(void)setRemoveConfirmationLabel:(id)arg1 ;
-(void)setRemoveConfirmationVisible:(BOOL)arg1 ;
-(void)hideControlsUsingRemoveAnimation;
-(void)_shouldRemoveTarget;
-(void)setRemovedFromTargetWhenHidden:(BOOL)arg1 ;
-(void)setAlwaysHideRemoveButton:(BOOL)arg1 ;
-(void)showRemoveButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRemoveButtonVisible;
-(id)removeConfirmationView;
-(void)setLabel:(id)arg1 ;
-(void)_setInsertControl:(BOOL)arg1 ;
-(void)_setTableViewCellEditingStyle:(int)arg1 ;
@end

