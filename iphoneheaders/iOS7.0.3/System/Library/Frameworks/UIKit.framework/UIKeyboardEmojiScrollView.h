/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIKeyboardEmojiInput.h>
#import <UIKit/UIKeyboardEmojiPressIndicationDelegate.h>

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory, UIPageControl, UIScrollView, UILabel, NSMutableArray, UIView;

@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiPressIndicationDelegate> {

	UIKeyboardEmojiInputController* _inputController;
	UIKeyboardEmojiCategory* _category;
	UIPageControl* _pageControl;
	UIScrollView* _scrollView;
	UILabel* _categoryLabel;
	UILabel* _optionalDescription;
	NSMutableArray* _pages;
	int _currentPage;
	UIView* _pressIndicator;
	BOOL _whiteText;

}

@property (nonatomic,retain) UIView * pressIndicator;              //@synthesize pressIndicator=_pressIndicator - In the implementation block
@property (assign) BOOL whiteText;                                 //@synthesize whiteText=_whiteText - In the implementation block
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)whiteText;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)forceLayout;
-(int)currentPage;
-(void)installPressIndicatorAtPoint:(CGPoint)arg1 ;
-(void)removePressIndicator;
-(void)pageChanged;
-(void)doLayout;
-(id)pressIndicator;
-(void)layoutRecents;
-(void)layoutPages;
-(void)clearPages;
-(void)ensureSurrounded;
-(void)delayLayout;
-(void)interruptScrolling;
-(int)emojiCountPerPageForRotation;
-(void)saveFirstVisibleEmojiIndex;
-(void)reloadForCategory:(id)arg1 ;
-(BOOL)shouldCache;
-(void)setScrollDelay:(double)arg1 ;
-(void)goToFirstPage;
-(void)setPressIndicator:(id)arg1 ;
-(void)setWhiteText:(BOOL)arg1 ;
@end

