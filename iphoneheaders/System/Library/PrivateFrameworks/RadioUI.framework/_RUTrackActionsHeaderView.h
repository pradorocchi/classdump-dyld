/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface _RUTrackActionsHeaderView : UIView {

	UILabel* _artistLabel;
	UIImageView* _artworkImageView;
	UILabel* _songLabel;

}

@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * songText; 
-(id)artworkImage;
-(void)layoutSubviews;
-(void)setArtworkImage:(id)arg1 ;
-(void)setSongText:(id)arg1 ;
-(void)setArtistText:(id)arg1 ;
-(id)artistText;
-(id)songText;
-(void).cxx_destruct;
@end
