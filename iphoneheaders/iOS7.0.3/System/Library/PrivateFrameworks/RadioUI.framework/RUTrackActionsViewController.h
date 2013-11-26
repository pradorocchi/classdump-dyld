/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/RUTrackActionsDelegate.h>
#import <RadioUI/RUTrackActioning.h>

@protocol RUTrackActionsDelegate;
@class NSString, UIImage, RUTrackActionsView, ;

@interface RUTrackActionsViewController : UIViewController <RUTrackActionsDelegate, RUTrackActioning> {

	RUTrackActionsView* _trackActionsView;
	<RUTrackActionsDelegate>* _trackActionsDelegate;

}

@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) int cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) <RUTrackActionsDelegate> * trackActionsDelegate;              //@synthesize trackActionsDelegate=_trackActionsDelegate - In the implementation block
@property (assign,nonatomic) int enabledActions; 
@property (assign,nonatomic) int onActions; 
@property (nonatomic,copy) NSString * songText; 
+(CGSize)artworkSize;
-(id)artworkImage;
-(void)dealloc;
-(CGSize)contentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)setArtworkImage:(id)arg1 ;
-(void)setTrackActionsDelegate:(id)arg1 ;
-(void)setSongText:(id)arg1 ;
-(void)setArtistText:(id)arg1 ;
-(void)setEnabledActions:(int)arg1 ;
-(void)setOnActions:(int)arg1 ;
-(int)actionForButtonIndex:(int)arg1 ;
-(void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3 ;
-(void)trackActioningObjectDidChangeContentSize:(id)arg1 ;
-(id)artistText;
-(void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1 ;
-(id)_trackActionsView;
-(int)cancelIndex;
-(int)enabledActions;
-(int)onActions;
-(id)songText;
-(id)trackActionsDelegate;
-(void).cxx_destruct;
@end

