/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface SUUserRatingView : UIView {

	float _value;
	UIImageView* _foregroundImageView;
	UIImageView* _backgroundImageView;

}
+(id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(int)arg3 ;
+(float)reflectionHeight;
-(id)init;
-(void)layoutSubviews;
-(void)setValue:(float)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(CGRect)_foregroundImageClipBounds;
-(id)initWithForeground:(id)arg1 background:(id)arg2 ;
-(float)heightWithoutReflection;
@end

