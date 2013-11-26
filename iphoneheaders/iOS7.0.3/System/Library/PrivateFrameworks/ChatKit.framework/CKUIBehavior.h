/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSString;

@interface CKUIBehavior : NSObject {

	float _bubbleIndentationDuringEditMode;

}

@property (nonatomic,readonly) NSString * conversationListDefaultPNG; 
@property (nonatomic,readonly) NSString * transcriptDefaultPNG; 
@property (nonatomic,@dynamic,readonly) BOOL splitViewEnabled; 
@property (nonatomic,readonly) BOOL lowClearanceInLandscape; 
@property (nonatomic,readonly) BOOL usesPopovers; 
@property (nonatomic,readonly) BOOL showTranscriptButtonsInNavigationBar; 
@property (nonatomic,readonly) BOOL presentsQuickLookController; 
@property (nonatomic,readonly) BOOL presentsReaderController; 
@property (nonatomic,readonly) float bubbleIndentationDuringEditMode;                                   //@synthesize bubbleIndentationDuringEditMode=_bubbleIndentationDuringEditMode - In the implementation block
@property (nonatomic,readonly) unsigned defaultConversationViewingMessageCount; 
@property (nonatomic,readonly) unsigned defaultConversationSummaryMessageCount; 
@property (nonatomic,readonly) BOOL shouldShowSendProgressIndicator; 
@property (nonatomic,readonly) BOOL shouldBackfillTranscript; 
@property (nonatomic,readonly) BOOL usesScrollGestureToHideKeyboard; 
@property (nonatomic,readonly) BOOL usesDistanceToDetermineWhetherToHideKeyboard; 
@property (nonatomic,readonly) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard; 
@property (nonatomic,readonly) float velocityThresholdForHidingKeyboard; 
@property (nonatomic,readonly) float escapeVelocityForHidingKeyboard; 
@property (nonatomic,readonly) float scrollToHideKeyboardGestureThreshold; 
@property (nonatomic,readonly) BOOL shouldSetConversationKeyboardOnSearchBeginEnd; 
@property (nonatomic,readonly) BOOL supportsTypingIndicatorAnimation; 
@property (nonatomic,readonly) BOOL isN9xScreen; 
@property (nonatomic,readonly) int madridRegistrationAppearanceStyle; 
@property (nonatomic,readonly) BOOL madridRegistrationShowsSplashScreen; 
@property (nonatomic,readonly) BOOL madridRegistrationShowsSplashScreenOnSignin; 
@property (nonatomic,readonly) BOOL canAccessContacts; 
@property (nonatomic,readonly) BOOL canAccessPhotos; 
@property (nonatomic,readonly) BOOL canAccessCoreRecents; 
@property (nonatomic,readonly) BOOL phoneIsWhitelisted; 
@property (nonatomic,readonly) BOOL faceTimeVideoIsWhitelisted; 
@property (nonatomic,readonly) BOOL faceTimeAudioIsWhitelisted; 
@property (nonatomic,readonly) BOOL mailIsWhitelisted; 
@property (nonatomic,readonly) BOOL cameraIsWhitelisted; 
@property (nonatomic,readonly) BOOL photosIsWhitelisted; 
@property (nonatomic,readonly) BOOL showPendingInConversationList; 
@property (nonatomic,readonly) BOOL selectNewConversationOnStateRestore; 
@property (nonatomic,readonly) BOOL selectNewConversationOnDeletion; 
@property (nonatomic,readonly) BOOL usesPersistentConversationSelection; 
@property (nonatomic,readonly) BOOL presentForwardingUIModally; 
@property (nonatomic,readonly) BOOL useContactPhotosInConversationList; 
@property (nonatomic,readonly) BOOL shouldShowContactPhotos; 
+(id)sharedBehaviors;
-(id)lightGrayColor;
-(BOOL)usesPopovers;
-(id)recipientTextColorForColorType:(BOOL)arg1 ;
-(BOOL)canAccessCoreRecents;
-(BOOL)shouldBackfillTranscript;
-(float)entryFieldElementPadding;
-(id)balloonTextFont;
-(float)transcriptPortraitWidth;
-(id)characterCountFont;
-(float)entryFieldLineFragmentPadding;
-(id)entryFieldBackgroundColor;
-(id)entryFieldDividerColor;
-(id)sendButtonColorForColorType:(BOOL)arg1 ;
-(id)photoButtonColor;
-(id)entryFieldGrayColor;
-(id)dimmingViewBackgroundColor;
-(id)transcriptBackgroundColor;
-(BOOL)lowClearanceInLandscape;
-(BOOL)splitViewEnabled;
-(CGSize)balloonMaskSize;
-(float)balloonMaxWidthForOrientation:(BOOL)arg1 ;
-(float)bottomTranscriptSpace;
-(unsigned)defaultConversationViewingMessageCount;
-(float)updateTranscriptInsetsAnimationDuration;
-(float)resizeMessageEntryViewAnimationDuration;
-(BOOL)shouldShowSendProgressIndicator;
-(id)transcriptSeparatorColor;
-(id)forwardImage;
-(BOOL)cameraIsWhitelisted;
-(BOOL)photosIsWhitelisted;
-(id)balloonColorsForColorType:(BOOL)arg1 ;
-(id)transcriptBoldTextFont;
-(float)transcriptDrawerOverlap;
-(float)transcriptDrawerWidth;
-(UIEdgeInsets)statusTranscriptInsets;
-(float)conversationListRowHeight;
-(id)conversationListDateFont;
-(id)conversationListSenderFont;
-(id)conversationListSummaryFont;
-(BOOL)showsChevronImage;
-(id)chevronImage;
-(float)topConversationListSpace;
-(float)senderSummaryConversationListSpace;
-(float)bottomConversationListSpace;
-(float)conversationListContactImageDiameter;
-(BOOL)showPendingInConversationList;
-(BOOL)usesPersistentConversationSelection;
-(BOOL)isSupportedInterfaceOrientation:(int)arg1 ;
-(BOOL)selectNewConversationOnDeletion;
-(BOOL)shouldDimTranscript;
-(float)transcriptContactImageDiameter;
-(id)transcriptTextFont;
-(id)transcriptTextColor;
-(UIEdgeInsets)documentIconAlignmentRectInsets;
-(UIEdgeInsets)skinnyBalloonMaskCapInsets;
-(UIEdgeInsets)balloonMaskCapInsets;
-(UIEdgeInsets)balloonMaskAlignmentRectInsets;
-(UIEdgeInsets)balloonMaskFrameInsets;
-(id)balloonSubjectFont;
-(id)balloonTextColorForColorType:(BOOL)arg1 ;
-(BOOL)supportsTypingIndicatorAnimation;
-(BOOL)canAccessPhotos;
-(BOOL)presentsQuickLookController;
-(BOOL)presentsReaderController;
-(CGSize)thumbnailFillSizeForImageSize:(CGSize)arg1 ;
-(UIEdgeInsets)minimumPlayButtonInsets;
-(float)balloonMaskTailWidth;
-(CGSize)attachmentBalloonSize;
-(id)errorDocumentIcon;
-(id)genericDocumentIcon;
-(id)timestampDateFormatter;
-(id)previewTitleFont;
-(id)chevronImageForColorType:(BOOL)arg1 ;
-(float)previewTitleBarHeight;
-(BOOL)useContactPhotosInConversationList;
-(BOOL)shouldShowDisclosureChevronInRecipientAtoms;
-(float)leftSplitPaneWidthForUIInterfaceOrientation:(int)arg1 ;
-(BOOL)madridRegistrationShowsSplashScreen;
-(BOOL)canAccessContacts;
-(float)_transcriptAnimationScaleFactor;
-(id)gray_recipientTextColor;
-(id)green_recipientTextColor;
-(id)blue_recipientTextColor;
-(id)siri_recipientTextColor;
-(id)red_recipientTextColor;
-(id)green_balloonColors;
-(id)blue_balloonColors;
-(id)siri_balloonColors;
-(CGSize)untailedPreviewFillSizeForImageSize:(CGSize)arg1 ;
-(UIEdgeInsets)balloonTranscriptInsets;
-(BOOL)shouldShowContactPhotos;
-(UIEdgeInsets)contactPhotoTranscriptInsets;
-(float)contactPhotoBalloonMargin;
-(float)timestampBodyLeading;
-(float)timestampBodyLeadingFraction:(float)arg1 ;
-(float)balloonBalloonTranscriptSpace:(BOOL)arg1 ;
-(id)gray_balloonColors;
-(id)red_balloonColors;
-(id)gray_unfilledBalloonColor;
-(id)green_unfilledBalloonColor;
-(id)blue_unfilledBalloonColor;
-(id)siri_unfilledBalloonColor;
-(id)red_unfilledBalloonColor;
-(id)gray_balloonTextColor;
-(id)green_balloonTextColor;
-(id)blue_balloonTextColor;
-(id)siri_balloonTextColor;
-(id)red_balloonTextColor;
-(id)gray_balloonTextLinkColor;
-(id)green_balloonTextLinkColor;
-(id)blue_balloonTextLinkColor;
-(id)siri_balloonTextLinkColor;
-(id)red_balloonTextLinkColor;
-(id)gray_backgroundBalloonColor;
-(id)green_backgroundBalloonColor;
-(id)blue_backgroundBalloonColor;
-(id)siri_backgroundBalloonColor;
-(id)red_backgroundBalloonColor;
-(id)gray_balloonOverlayColor;
-(id)green_balloonOverlayColor;
-(id)blue_balloonOverlayColor;
-(id)siri_balloonOverlayColor;
-(id)red_balloonOverlayColor;
-(CGSize)skinnyBalloonMaskSize;
-(float)skinnyBalloonWidthDifference;
-(float)rightBalloonMaxWidth;
-(float)leftBalloonMaxWidth;
-(id)gray_sendButtonColor;
-(id)green_sendButtonColor;
-(id)blue_sendButtonColor;
-(id)siri_sendButtonColor;
-(id)red_sendButtonColor;
-(id)gray_chevronImage;
-(id)green_chevronImage;
-(id)blue_chevronImage;
-(id)siri_chevronImage;
-(id)red_chevronImage;
-(id)systemGrayChevronImage;
-(id)whiteChevronImage;
-(id)appTintColor;
-(float)conversationListSenderBodyLeading;
-(float)conversationListSummaryBodyLeading;
-(BOOL)showTranscriptButtonsInNavigationBar;
-(unsigned)defaultConversationSummaryMessageCount;
-(int)madridRegistrationAppearanceStyle;
-(BOOL)madridRegistrationShowsSplashScreenOnSignin;
-(BOOL)phoneIsWhitelisted;
-(BOOL)faceTimeVideoIsWhitelisted;
-(BOOL)faceTimeAudioIsWhitelisted;
-(BOOL)mailIsWhitelisted;
-(BOOL)returnKeySendsMessage;
-(BOOL)usesScrollGestureToHideKeyboard;
-(BOOL)usesDistanceToDetermineWhetherToHideKeyboard;
-(BOOL)usesVelocityDirectionToDetermineWhetherToHideKeyboard;
-(float)velocityThresholdForHidingKeyboard;
-(float)escapeVelocityForHidingKeyboard;
-(float)scrollToHideKeyboardGestureThreshold;
-(BOOL)shouldSetConversationKeyboardOnSearchBeginEnd;
-(BOOL)isN9xScreen;
-(float)fadeInBubbleAnimationDuration;
-(float)scrollInNewMessageAnimationDuration;
-(float)throwMessageAnimationDuration;
-(float)editingTransitionAnimationDuration;
-(BOOL)selectNewConversationOnStateRestore;
-(BOOL)presentForwardingUIModally;
-(float)conversationListMultipleContactsImageDiameter;
-(BOOL)shouldHomogenizeAtomsForPreferredService;
-(float)collapsedRecipientListLeftPadding;
-(BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
-(BOOL)shouldRefreshAlternateAddressesSheet;
-(float)recipientOverlaySingleLineContentHeight;
-(id)transcriptHeaderTextFont;
-(CGSize)mapThumbnailFillSize;
-(BOOL)isAccessibilityPreferredContentSizeCategory;
-(float)spaceBetweenEditToolbarButtons;
-(id)readerFont;
-(id)transcriptStatusParagraphStyle;
-(UIEdgeInsets)transcriptBoldTextAlignmentInsets;
-(float)transcriptBoldTextHeight;
-(UIEdgeInsets)entityTranscriptInsets;
-(UIEdgeInsets)timestampTranscriptInsets;
-(UIEdgeInsets)serviceTranscriptInsets;
-(void)invalidateTranscriptDrawerWidth;
-(float)smallTranscriptSpace;
-(float)mediumTranscriptSpace;
-(float)largeTranscriptSpace;
-(float)topTranscriptSpace;
-(id)unfilledBalloonColorForColorType:(BOOL)arg1 ;
-(id)balloonTextLinkColorForColorType:(BOOL)arg1 ;
-(id)backgroundBalloonColorForColorType:(BOOL)arg1 ;
-(id)balloonOverlayColorForColorType:(BOOL)arg1 ;
-(id)attachmentBalloonActionColor;
-(id)attachmentBalloonTextColor;
-(float)balloonTextLineHeight;
-(UIEdgeInsets)balloonMaskFrameCapInsets;
-(BOOL)supportsPassbookAttachments;
-(CGSize)documentIconSize;
-(id)textDocumentIcon;
-(float)conversationListDateBodyLeading;
-(BOOL)dimsTranscriptWhileEditingConversations;
-(unsigned)conversationCacheSize;
-(id)conversationListDefaultPNG;
-(id)transcriptDefaultPNG;
-(float)bubbleIndentationDuringEditMode;
@end

