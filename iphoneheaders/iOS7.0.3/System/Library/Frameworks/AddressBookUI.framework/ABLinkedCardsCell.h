/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABContactCell.h>

@protocol ABPropertyCellDelegate;
@class UILabel, , NSDictionary, UIImageView;

@interface ABLinkedCardsCell : ABContactCell {

	BOOL _displayConstraintsActive;
	BOOL _editingConstraintsActive;
	UILabel* _sourceLabel;
	UILabel* _nameLabel;
	<ABPropertyCellDelegate>* _delegate;
	NSDictionary* _sourceTextAttributes;
	NSDictionary* _nameTextAttributes;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) UILabel * sourceLabel;                          //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) <ABPropertyCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * sourceTextAttributes;                //@synthesize sourceTextAttributes=_sourceTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                  //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic) BOOL displayConstraintsActive;                    //@synthesize displayConstraintsActive=_displayConstraintsActive - In the implementation block
@property (assign,nonatomic) BOOL editingConstraintsActive;                    //@synthesize editingConstraintsActive=_editingConstraintsActive - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                            //@synthesize chevron=_chevron - In the implementation block
+(float)cellHeightForEditing:(BOOL)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(void)setDisplayConstraintsActive:(BOOL)arg1 ;
-(BOOL)displayConstraintsActive;
-(void)setNameTextAttributes:(id)arg1 ;
-(id)contentViewEditingConstraints;
-(id)contentViewConstraints;
-(id)nameTextAttributes;
-(void)setNeedsUpdateDisplayConstraints;
-(void)setSourceTextAttributes:(id)arg1 ;
-(id)sourceLabel;
-(BOOL)editingConstraintsActive;
-(void)setEditingConstraintsActive:(BOOL)arg1 ;
-(id)chevron;
-(id)sourceTextAttributes;
-(void)setChevron:(id)arg1 ;
-(id)nameLabel;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)updateConstraints;
-(BOOL)shouldPerformDefaultAction;
@end

