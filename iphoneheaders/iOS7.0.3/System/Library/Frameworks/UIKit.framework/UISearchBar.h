/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIStatusBarTinting.h>
#import <UIKit/_UIBarPositioningInternal.h>
#import <UIKit/UIBarPositioning.h>

@protocol UISearchBarDelegate;
@class UISearchBarTextField, UILabel, UIButton, , UIColor, UIImageView, NSString, NSArray, UIView, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground, UIBarButtonItem, _UIBackdropView, UITapGestureRecognizer, UIImage;

@interface UISearchBar : UIView <UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning> {

	UISearchBarTextField* _searchField;
	UILabel* _promptLabel;
	UIButton* _cancelButton;
	<UISearchBarDelegate>* _delegate;
	id _controller;
	UIColor* _barTintColor;
	UIImageView* _separator;
	NSString* _cancelButtonText;
	NSArray* _scopes;
	int _selectedScope;
	UIView* _background;
	UIView* _scopeBar;
	UIView* _scopeBarContainerView;
	UIEdgeInsets _contentInset;
	UIImageView* _shadowView;
	id _appearanceStorage;
	_UISearchBarNavigationItem* _navigationItem;
	_UISearchBarScopeBarBackground* _scopeBarBackgroundView;
	UIBarButtonItem* _animatedAppearanceBarButtonItem;
	_UIBackdropView* _backdrop;
	unsigned _backdropStyle;
	UIView* _maskView;
	UITapGestureRecognizer* _tapToActivateGestureRecognizer;
	UIBarButtonItem* _cancelBarButtonItem;
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned barTranslucence : 3;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
		unsigned backgroundLayoutNeedsUpdate : 1;
		unsigned containedInNavigationPalette : 1;
		unsigned drawsBackgroundInPalette : 1;
		unsigned centerPlaceholder : 1;
	}  _searchBarFlags;
	BOOL __forceCenteredPlaceholderLayout;
	UIColor* _statusBarTintColor;
	UIView* _inputAccessoryView;
	int _barPosition;
	unsigned _searchBarStyle;

}

@property (assign,nonatomic) int barStyle; 
@property (assign,nonatomic) <UISearchBarDelegate> * delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) BOOL showsBookmarkButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) BOOL searchResultsButtonSelected; 
@property (nonatomic,@dynamic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor;                                                             //@synthesize barTintColor=_barTintColor - In the implementation block
@property (assign,nonatomic) unsigned searchBarStyle;                                                            //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (nonatomic,copy) NSArray * scopeButtonTitles; 
@property (assign,nonatomic) int selectedScopeButtonIndex; 
@property (assign,nonatomic) BOOL showsScopeBar; 
@property (nonatomic,retain) UIView * inputAccessoryView;                                                        //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (assign,nonatomic) UIOffset searchTextPositionAdjustment; 
@property (setter=_setStatusBarTintColor:,nonatomic,retain) UIColor * _statusBarTintColor;                       //@synthesize statusBarTintColor=_statusBarTintColor - In the implementation block
@property (assign,nonatomic) BOOL _forceCenteredPlaceholderLayout;                                               //@synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout - In the implementation block
@property (nonatomic,readonly) int barPosition;                                                                  //@synthesize barPosition=_barPosition - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)layoutSubviews;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_textColor;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)_backgroundView;
-(id)_statusBarTintColor;
-(BOOL)isTranslucent;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)_commonInit;
-(void)setTintColor:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3 ;
-(BOOL)isFirstResponder;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)movedToSuperview:(id)arg1 ;
-(id)text;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(id)backgroundImage;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2 ;
-(id)_effectiveBarTintColor;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(void)_updateOpacity;
-(void)_setBarPosition:(int)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(int)_barPosition;
-(int)barPosition;
-(id)backgroundImageForBarMetrics:(int)arg1 ;
-(id)barTintColor;
-(void)setText:(id)arg1 ;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(BOOL)_isEnabled;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(id)_navigationItem;
-(void)reloadInputViews;
-(BOOL)canResignFirstResponder;
-(id)inputAccessoryView;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)setInputAccessoryView:(id)arg1 ;
-(int)shortcutConversionType;
-(void)setShortcutConversionType:(int)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned)arg1 ;
-(id)scopeBarBackgroundImage;
-(void)setScopeBarBackgroundImage:(id)arg1 ;
-(void)_setMaskActive:(BOOL)arg1 ;
-(void)tappedSearchBar:(id)arg1 ;
-(void)_setupSearchField;
-(void)setScopeButtonTitles:(id)arg1 ;
-(void)_scopeChanged:(id)arg1 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned)arg1 ;
-(void)_setupPromptLabel;
-(void)_setupCancelButton;
-(void)_setShowsSeparator:(BOOL)arg1 ;
-(void)setSearchTextPositionAdjustment:(UIOffset)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(id)_scopeBarContainer;
-(id)scopeButtonTitles;
-(id)placeholder;
-(UIOffset)searchTextPositionAdjustment;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(BOOL)centerPlaceholder;
-(void)_setShadowVisibleIfNecessary:(BOOL)arg1 ;
-(BOOL)_shouldDisplayShadow;
-(BOOL)_consideredInBarWithSuperview:(id)arg1 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg1 ;
-(void)_setMaskBounds:(CGRect)arg1 ;
-(void)_updateSearchFieldArt;
-(id)_currentSeparatorImage;
-(void)_updateScopeBarBackground;
-(void)_updatePlaceholderColor;
-(void)_updateRightView;
-(void)_updateMagnifyingGlassView;
-(id)_imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 ;
-(void)_resultsListButtonPressed;
-(void)_bookmarkButtonPressed;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_allowCursorToAppear:(BOOL)arg1 ;
-(void)_destroyCancelButton;
-(BOOL)_isInBar;
-(void)_displayNavBarCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_cancelBarButtonItem;
-(void)_cancelButtonPressed;
-(BOOL)_containedInNavigationPalette;
-(BOOL)drawsBackgroundInPalette;
-(float)_landscapeScopeBarWidth;
-(void)_setBarTintColor:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(BOOL)_shouldCombineLandscapeBars;
-(float)_defaultHeight;
-(BOOL)_searchFieldWidthShouldBeFlexible;
-(float)_availableBoundsWidth;
-(UIEdgeInsets)_scopeBarInsets;
-(float)_landscapeSearchFieldWidth;
-(BOOL)_scopeBarIsVisible;
-(BOOL)drawsBackground;
-(void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(BOOL)arg1 ;
-(float)_searchFieldHeight;
-(id)_viewForChildViews;
-(id)_navigationBarForShadow;
-(id)_makeShadowView;
-(id)controller;
-(void)_setUpScopeBar;
-(void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2 ;
-(void)_effectiveBarTintColorDidChange:(BOOL)arg1 ;
-(void)_updateNeedForBackdrop;
-(id)_glyphAndTextColor:(BOOL)arg1 ;
-(id)_imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 customImage:(BOOL*)arg3 ;
-(BOOL)_isAtTop;
-(void)setController:(id)arg1 ;
-(id)searchField;
-(id)_scopeBar;
-(void)didMoveToWindow:(id)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg1 ;
-(BOOL)showsSearchResultsButton;
-(void)setSearchResultsButtonSelected:(BOOL)arg1 ;
-(BOOL)isSearchResultsButtonSelected;
-(void)setShowsBookmarkButton:(BOOL)arg1 ;
-(BOOL)showsBookmarkButton;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)setCombinesLandscapeBars:(BOOL)arg1 ;
-(BOOL)combinesLandscapeBars;
-(BOOL)usesEmbeddedAppearance;
-(void)setSelectedScopeButtonIndex:(int)arg1 ;
-(int)selectedScopeButtonIndex;
-(void)_setScopeBarHidden:(BOOL)arg1 ;
-(void)setShowsScopeBar:(BOOL)arg1 ;
-(BOOL)showsScopeBar;
-(void)_setStatusBarTintColor:(id)arg1 ;
-(id)_separatorImage;
-(void)_setSeparatorImage:(id)arg1 ;
-(void)setImage:(id)arg1 forSearchBarIcon:(int)arg2 state:(unsigned)arg3 ;
-(id)imageForSearchBarIcon:(int)arg1 state:(unsigned)arg2 ;
-(void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)scopeBarButtonBackgroundImageForState:(unsigned)arg1 ;
-(void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 ;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 ;
-(void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)scopeBarButtonTitleTextAttributesForState:(unsigned)arg1 ;
-(void)setPositionAdjustment:(UIOffset)arg1 forSearchBarIcon:(int)arg2 ;
-(UIOffset)positionAdjustmentForSearchBarIcon:(int)arg1 ;
-(id)_animatedAppearanceBarButtonItem;
-(void)_setBackgroundLayoutNeedsUpdate:(BOOL)arg1 ;
-(void)_setBackdropStyle:(unsigned)arg1 ;
-(unsigned)_backdropStyle;
-(void)setCenterPlaceholder:(BOOL)arg1 ;
-(unsigned)searchBarStyle;
-(BOOL)_forceCenteredPlaceholderLayout;
-(void)set_forceCenteredPlaceholderLayout:(BOOL)arg1 ;
-(id)_scopeBarBackgroundView;
-(BOOL)pretendsIsInBar;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_setupCancelButtonWithAppearance:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setScopeBarSegmentsEnabled:(BOOL)arg1 ;
-(void)setPretendsIsInBar:(BOOL)arg1 ;
-(BOOL)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1 ;
-(void)_setCancelButtonText:(id)arg1 ;
-(void)_setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_updateBackgroundToBackdropStyle:(int)arg1 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2 ;
-(float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacing;
@end

