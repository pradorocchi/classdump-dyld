/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPFlipTransitionController.h>

@class UINavigationBar, UINavigationItem, UITextLabel;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController {

	UINavigationBar* _navigationBar;
	UINavigationItem* _originalNavigationItem;
	UITextLabel* _chapterGuideTitleLabel;
	BOOL _shouldPlayAfterFlip;
	BOOL _tvOutEnabled;

}

@property (nonatomic,retain) UINavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) BOOL playAfterFlip;                           //@synthesize shouldPlayAfterFlip=_shouldPlayAfterFlip - In the implementation block
@property (assign,nonatomic) BOOL TVOutEnabled;                            //@synthesize tvOutEnabled=_tvOutEnabled - In the implementation block
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(void)performTransition:(unsigned)arg1 ;
-(int)_interfaceOrientation;
-(void)_showChapterGuideNavigationViews;
-(void)_restoreOriginalNavigationViews:(BOOL)arg1 ;
-(void)_hideNavigationAndStatusBars;
-(id)_copySwizzledNavigationViews;
-(void)_restoreOriginalNavigationViewsDidStop:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(id)_chapterGuideTitleLabel;
-(BOOL)playAfterFlip;
-(void)setPlayAfterFlip:(BOOL)arg1 ;
-(void)dealloc;
-(id)navigationBar;
-(void)setNavigationBar:(id)arg1 ;
-(void).cxx_destruct;
@end

