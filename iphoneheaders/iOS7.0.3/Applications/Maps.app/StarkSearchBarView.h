/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol StarkSearchBarViewDelegate;
@class UIView, StarkSearchField, UIButton, NSString, ;

@interface StarkSearchBarView : UIView <UITextFieldDelegate> {

	BOOL _editing;
	BOOL _isRequiringVisibility;
	UIView* _backgroundView;
	StarkSearchField* _searchField;
	UIButton* _cancelButton;
	NSString* _searchTextBeforeEditingStarted;
	<StarkSearchBarViewDelegate>* _delegate;
	BOOL _dictating;
	int _interactionModel;

}

@property (assign,nonatomic) int interactionModel;                                 //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic) <StarkSearchBarViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * searchText; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=isDictating,nonatomic,readonly) BOOL dictating;                  //@synthesize dictating=_dictating - In the implementation block
@property (nonatomic,copy) NSString * searchTextBeforeEditingStarted;              //@synthesize searchTextBeforeEditingStarted=_searchTextBeforeEditingStarted - In the implementation block
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(void)_dictationRecordingDidEnd;
-(void)_dictationRecordingDidBegin;
-(void)_dictationDidFail;
-(void)_cancelAndEndEditingProgrammatically;
-(void)_moveViewsToFinalPosition;
-(void)setSearchTextBeforeEditingStarted:(id)arg1 ;
-(void)_endEditingWithOutcome:(int)arg1 searchTextForCommitting:(id)arg2 ;
-(id)searchTextBeforeEditingStarted;
-(void)_willChangeSearchTextToString:(id)arg1 cause:(int)arg2 ;
-(void)commitAndEndEditingWithSearchText:(id)arg1 ;
-(void)cancelAndEndEditing;
-(BOOL)isDictating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isEditing;
-(void)beginEditing;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_startDictation;
-(id)searchText;
-(void)setSearchText:(id)arg1 ;
@end

