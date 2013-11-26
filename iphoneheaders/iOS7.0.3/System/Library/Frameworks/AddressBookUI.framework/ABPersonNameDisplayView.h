/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPasteboardControl.h>

@class ABNamePropertyGroup, NSString, UILabel, UIFont, ABStyleProvider, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl {

	ABNamePropertyGroup* _namePropertyGroup;
	int _primaryProperty;
	NSString* _primaryPropertyFormattingCountryCode;
	float _minimumHeight;
	BOOL _alignOnBottom;
	UILabel* _headlineLabel;
	UILabel* _tagLineLabel;
	UILabel* _messageLabel;
	UILabel* _messageDetailLabel;
	UIFont* _messageFont;
	UIFont* _messageDetailFont;
	ABStyleProvider* _styleProvider;
	NSString* _customHeadline;
	NSString* _customTagLine;
	NSString* _customMessage;
	NSString* _customMessageDetail;
	UIView* _customMessageView;

}

@property (nonatomic,retain) ABNamePropertyGroup * namePropertyGroup;                    //@synthesize namePropertyGroup=_namePropertyGroup - In the implementation block
@property (assign,nonatomic) int primaryProperty;                                        //@synthesize primaryProperty=_primaryProperty - In the implementation block
@property (nonatomic,copy) NSString * primaryPropertyFormattingCountryCode;              //@synthesize primaryPropertyFormattingCountryCode=_primaryPropertyFormattingCountryCode - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                        //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL alignOnBottom;                                         //@synthesize alignOnBottom=_alignOnBottom - In the implementation block
@property (nonatomic,copy) NSString * headline;                                          //@synthesize customHeadline=_customHeadline - In the implementation block
@property (nonatomic,copy) NSString * tagLine;                                           //@synthesize customTagLine=_customTagLine - In the implementation block
@property (nonatomic,copy) NSString * message;                                           //@synthesize customMessage=_customMessage - In the implementation block
@property (nonatomic,retain) UIFont * messageFont;                                       //@synthesize messageFont=_messageFont - In the implementation block
@property (nonatomic,copy) NSString * messageDetail;                                     //@synthesize customMessageDetail=_customMessageDetail - In the implementation block
@property (nonatomic,retain) UIFont * messageDetailFont;                                 //@synthesize messageDetailFont=_messageDetailFont - In the implementation block
@property (nonatomic,retain) ABStyleProvider * styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIView * customMessageView;                                 //@synthesize customMessageView=_customMessageView - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(int)primaryProperty;
-(void)setPrimaryProperty:(int)arg1 ;
-(BOOL)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)arg1 ;
-(void)abMenuControllerWillHide;
-(void)_updateHeadlineText;
-(void)_updateTagLineText;
-(void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2 ;
-(void)_setFont:(id)arg1 isDetail:(BOOL)arg2 ;
-(id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned)arg2 ;
-(void)initializeHeadlineAndTaglineIfNeeded;
-(float)_heightForLabelsForWidth:(float)arg1 ;
-(CGSize)multilineLabel:(id)arg1 sizeThatFits:(CGSize)arg2 ;
-(void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1 ;
-(id)_copyPrimaryValue;
-(id)_copyTagLine;
-(void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3 ;
-(void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setNamePropertyGroup:(id)arg1 ;
-(void)setHeadline:(id)arg1 ;
-(void)setTagLine:(id)arg1 ;
-(void)setMessageFont:(id)arg1 ;
-(void)setMessageDetailFont:(id)arg1 ;
-(void)setMessageDetail:(id)arg1 ;
-(void)setCustomMessageView:(id)arg1 ;
-(void)reloadNameDataAnimated:(BOOL)arg1 ;
-(void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)namePropertyGroup;
-(id)primaryPropertyFormattingCountryCode;
-(void)setPrimaryPropertyFormattingCountryCode:(id)arg1 ;
-(float)minimumHeight;
-(void)setMinimumHeight:(float)arg1 ;
-(BOOL)alignOnBottom;
-(void)setAlignOnBottom:(BOOL)arg1 ;
-(id)headline;
-(id)tagLine;
-(id)messageDetail;
-(id)messageFont;
-(id)messageDetailFont;
-(id)customMessageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)message;
-(void)copy:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
@end

