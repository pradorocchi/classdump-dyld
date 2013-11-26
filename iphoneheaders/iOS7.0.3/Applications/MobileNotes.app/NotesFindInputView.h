/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIInputView.h>

@class UILabel, UISegmentedControl, UISearchBar, UIBarButtonItem;

@interface NotesFindInputView : UIInputView {

	UILabel* _resultsLabel;
	UISegmentedControl* _nextPreviousControl;
	UISearchBar* _searchBar;
	UIBarButtonItem* _controlBarButtonItem;
	UIBarButtonItem* _labelBarButtonItem;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _searchBarButtonItem;
	UIBarButtonItem* _leftFixedSpaceBarButtonItem;

}

@property (retain) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
+(id)toolbarWithItems:(id)arg1 ;
-(void)setSegmentedControlTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDoneButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSegmentedControlEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)searchBar;
-(void)setSearchBar:(id)arg1 ;
-(void)didEndSplitTransition;
-(void)setLabelText:(id)arg1 ;
-(void).cxx_destruct;
@end

