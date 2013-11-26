/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class UILabel;

@interface GKFriendOfPlayerCell : GKBasePlayerCell {

	UILabel* _commonalitiesLabel;

}

@property (nonatomic,retain) UILabel * commonalitiesLabel;              //@synthesize commonalitiesLabel=_commonalitiesLabel - In the implementation block
-(void)updateLineLayoutConstraints;
-(void)didUpdateModel;
-(id)commonalitiesLabel;
-(void)setCommonalitiesLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
@end

