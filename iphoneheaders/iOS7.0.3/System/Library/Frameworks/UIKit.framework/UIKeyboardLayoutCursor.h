/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayoutStar.h>

@class UIView;

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar {

	UIView* _selectionView;
	int _selectedKeyIndex;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)physicalKeyDownWithEvent:(id)arg1 ;
-(BOOL)acceptsDirectionInput;
-(void)setSelectedKeyIndex:(int)arg1 ;
-(id)keyplaneKeyForCurrentKeyplane;
-(CGRect)selectionFrameForKeyIndex:(int)arg1 ;
-(void)setSelectionPoint:(CGPoint)arg1 ;
-(void)updateSelectionForCurrentKeyplane;
-(void)takeKeyAction:(id)arg1 ;
-(void)handleDirectionalInput:(int)arg1 ;
@end

