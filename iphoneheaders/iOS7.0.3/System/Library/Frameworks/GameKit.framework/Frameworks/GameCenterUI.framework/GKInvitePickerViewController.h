/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKPlayerPickerViewController.h>

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController {

	GKInvitePickerDataSource* _invitePickerDataSource;
	NSSet* _hiddenPlayers;

}

@property (nonatomic,retain) GKInvitePickerDataSource * invitePickerDataSource;              //@synthesize invitePickerDataSource=_invitePickerDataSource - In the implementation block
@property (nonatomic,retain) NSSet * hiddenPlayers;                                          //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)setSupportsNearby:(BOOL)arg1 ;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned)arg2 didSelectDataSourceWithIndex:(int)arg3 ;
-(id)initWithGame:(id)arg1 selectedPlayerIDs:(id)arg2 hiddenPlayers:(id)arg3 ;
-(id)splitingDataSource;
-(void)setHiddenPlayers:(id)arg1 ;
-(id)hiddenPlayers;
-(void)setInvitePickerDataSource:(id)arg1 ;
-(void)configureNearbyDataSource;
-(id)invitePickerDataSource;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

