/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class UILabel, GKButton;

@interface GKFriendRequestCell : GKBasePlayerCell {

	UILabel* _messageLabel;
	UILabel* _whenLabel;
	GKButton* _acceptButton;
	GKButton* _declineButton;

}

@property (nonatomic,retain) UILabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * whenLabel;                   //@synthesize whenLabel=_whenLabel - In the implementation block
@property (nonatomic,retain) GKButton * acceptButton;               //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) GKButton * declineButton;              //@synthesize declineButton=_declineButton - In the implementation block
+(Class)cellClassForPlayer:(id)arg1 ;
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(BOOL)arg3 ;
-(void)updateLineLayoutConstraints;
-(void)didUpdateModel;
-(id)whenLabel;
-(void)setWhenLabel:(id)arg1 ;
-(void)didTouchAccept:(id)arg1 ;
-(void)didTouchDecline:(id)arg1 ;
-(id)acceptButton;
-(id)declineButton;
-(void)setMessageLabel:(id)arg1 ;
-(void)setAcceptButton:(id)arg1 ;
-(void)setDeclineButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)messageLabel;
@end

