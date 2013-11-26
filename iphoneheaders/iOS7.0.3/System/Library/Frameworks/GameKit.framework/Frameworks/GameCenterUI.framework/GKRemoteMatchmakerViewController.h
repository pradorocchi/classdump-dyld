/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKRemoteViewController.h>
#import <GameCenterUI/GKMatchmakerRemoteDelegate.h>
#import <GameCenterUI/GKMatchmakerServiceViewControllerDelegate.h>

@class GKMatchmakerViewController, GKGame;

@interface GKRemoteMatchmakerViewController : GKRemoteViewController <GKMatchmakerRemoteDelegate, GKMatchmakerServiceViewControllerDelegate> {

	GKMatchmakerViewController* _delegateWeak;

}

@property (assign,nonatomic) GKMatchmakerViewController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)finishWithError:(id)arg1 ;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(int)arg1 ;
-(void)setPlayer:(id)arg1 responded:(int)arg2 ;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(void)applicationWillEnterForeground;
-(void)setHosted:(BOOL)arg1 ;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setupRemoteView;
-(void)remoteViewControllerIsCanceling;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(void)setBrowsingForNearbyPlayers:(BOOL)arg1 ;
-(void)cancelInviteToPlayer:(id)arg1 ;
-(void)startMatchingWithRequest:(id)arg1 ;
-(void)setAcceptedInviteInternal:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)sendData:(id)arg1 ;
@end

