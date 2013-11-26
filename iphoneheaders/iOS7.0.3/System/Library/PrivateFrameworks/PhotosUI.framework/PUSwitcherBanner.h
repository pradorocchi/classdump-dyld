/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PUAbstractNavigationBanner.h>

@class UIView, NSArray, UISegmentedControl;

@interface PUSwitcherBanner : PUAbstractNavigationBanner {

	UIView* _view;
	NSArray* _itemTitles;
	int _selectedItemIndex;
	UISegmentedControl* __segmentedControl;

}

@property (nonatomic,copy) NSArray * itemTitles;                                                               //@synthesize itemTitles=_itemTitles - In the implementation block
@property (assign,nonatomic) int selectedItemIndex;                                                            //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (setter=_setSegmentedControl:,nonatomic,retain) UISegmentedControl * _segmentedControl;              //@synthesize _segmentedControl=__segmentedControl - In the implementation block
-(id)view;
-(float)height;
-(void)_setItemTitles:(id)arg1 ;
-(id)itemTitles;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)_setSegmentedControl:(id)arg1 ;
-(id)_segmentedControl;
-(int)selectedItemIndex;
-(void)setSelectedItemIndex:(int)arg1 ;
-(id)initWithItemTitles:(id)arg1 ;
-(BOOL)isEnabledForItemAtIndex:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 forItemAtIndex:(int)arg2 ;
-(void).cxx_destruct;
@end

