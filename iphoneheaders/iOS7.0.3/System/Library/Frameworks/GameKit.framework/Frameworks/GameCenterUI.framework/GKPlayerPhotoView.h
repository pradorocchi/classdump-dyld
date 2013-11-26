/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIImageView.h>
#import <GameCenterUI/GKPlayerPhotoContainer.h>

@class GKPlayer;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {

	GKPlayer* _player;
	int _onAdaptiveBackground;

}

@property (assign,getter=isOnAdaptiveBackground,nonatomic) int onAdaptiveBackground;              //@synthesize onAdaptiveBackground=_onAdaptiveBackground - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                   //@synthesize player=_player - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setOnAdaptiveBackground:(int)arg1 ;
-(void)setOnAdaptiveBackground:(int)arg1 ;
-(void)refreshPhoto;
-(void)refreshPhotoWithCompletionHandler:(/*^block*/ id)arg1 ;
-(int)isOnAdaptiveBackground;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

