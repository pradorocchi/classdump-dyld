/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <MobileMail/MFAddressBookClient.h>

@protocol MFMessageContentDisplayDelegate;
@class MFMessageViewingContext, MailAccount, NSArray, NSSet, NSMutableArray, NSMutableDictionary, WorkingPushButton, MessageHeaderHeader, MFModernLabelledAtomList, MFCaptionLabel, UIImageView, ;

@interface MessageHeaderLayer : UIView <MFAddressBookClient> {

	MFMessageViewingContext* _context;
	MailAccount* _account;
	CGSize _oldSize;
	NSArray* _cachedToRecipients;
	NSArray* _cachedCcRecipients;
	NSArray* _cachedBccRecipients;
	NSArray* _cachedSenders;
	NSSet* _cachedReceivingEmailAddresses;
	NSMutableArray* _layersToRemoveWhenSmall;
	NSMutableDictionary* _atomListDictionary;
	WorkingPushButton* _infoButton;
	WorkingPushButton* _oldInfoButton;
	MessageHeaderHeader* _header;
	MFModernLabelledAtomList* _primaryField;
	float _horizontalInset;
	int _displayStyle;
	MFCaptionLabel* _captionLabel;
	void* _displayedPerson;
	UIImageView* _personIconImageView;
	unsigned _showDetails : 1;
	unsigned _enabled : 1;
	unsigned _selected : 1;
	unsigned _isOutgoing : 1;
	BOOL _preventLayout;
	<MFMessageContentDisplayDelegate>* _displayDelegate;

}

@property (nonatomic,retain) MFMessageViewingContext * viewingContext;                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) <MFMessageContentDisplayDelegate> * displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (assign,nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge; 
@property (nonatomic,retain) MailAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) float horizontalInset;                                            //@synthesize horizontalInset=_horizontalInset - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL preventLayout;                                               //@synthesize preventLayout=_preventLayout - In the implementation block
+(void)initialize;
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(void)updateForRedisplay;
-(void)viewingContextFinishedLoading:(id)arg1 ;
-(id)displayDelegate;
-(void)setDisplayDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displayStyle:(int)arg2 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
-(CGRect)subjectFrame;
-(id)bottomSeparator;
-(void)infoButtonClicked:(id)arg1 ;
-(void)_trustDidChange:(id)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)_updatePrimaryFieldCaption;
-(void)_cacheContactPhoto;
-(void)_invalidateAtomsAndContactPhoto;
-(void)_removeDetailLayers;
-(float)horizontalInset;
-(void)setHorizontalInset:(float)arg1 ;
-(void)createInfoButtonWithTitle:(id)arg1 ;
-(void)updateInfoButton;
-(void)recipientAtomPressed:(id)arg1 ;
-(void)senderAtomPressed:(id)arg1 ;
-(void)_updatePrimaryFieldUI;
-(void)_setShowDetails:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)_updateAtomStyles;
-(id)viewingContext;
-(void)_updateVIPStatus;
-(BOOL)preventLayout;
-(float)atomListLineSpacing;
-(void)_updateContactPhotoViewAlpha;
-(BOOL)_captionLabelIsVisible;
-(BOOL)canShowMarkButton;
-(void)updateDateAndTime;
-(void)_addDetailLayers;
-(void)_sendAction:(SEL)arg1 forAddressAtom:(id)arg2 ;
-(BOOL)bottomSeparatorDrawsFlushWithLeadingEdge;
-(void)setPreventLayout:(BOOL)arg1 ;
-(void)_headerAnimationDidStop;
-(void)_headerHeightDidChangeAfterAnimation:(BOOL)arg1 ;
-(id)_addAddressListWithAddresses:(id)arg1 label:(id)arg2 title:(id)arg3 maxWidth:(float)arg4 action:(SEL)arg5 ;
-(BOOL)_atomContainsVIPSender:(id)arg1 ;
-(id)htmlRepresentationLeavingSpaceForPhoto:(BOOL)arg1 ;
-(id)personIconImageView;
-(void)_buttonAnimationDidFinish;
-(BOOL)usePadDisplayStyle;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setViewingContext:(id)arg1 ;
-(void)clearMessage;
-(id)account;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void*)displayedPerson;
@end

