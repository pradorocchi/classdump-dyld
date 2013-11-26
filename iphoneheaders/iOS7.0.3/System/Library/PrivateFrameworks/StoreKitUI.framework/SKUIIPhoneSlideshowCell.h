/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImageView* _playIcon;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isVideo,nonatomic) BOOL video; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setVideo:(BOOL)arg1 ;
-(BOOL)isVideo;
-(CGRect)imageFrame;
-(void).cxx_destruct;
@end

