/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface MPUSeparatorView : UIView {

	float _leftMarginWidth;
	UIColor* _marginColor;
	float _rightMarginWidth;
	UIColor* _separatorColor;

}

@property (assign,nonatomic) float leftMarginWidth;                 //@synthesize leftMarginWidth=_leftMarginWidth - In the implementation block
@property (nonatomic,retain) UIColor * marginColor;                 //@synthesize marginColor=_marginColor - In the implementation block
@property (assign,nonatomic) float rightMarginWidth;                //@synthesize rightMarginWidth=_rightMarginWidth - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;              //@synthesize separatorColor=_separatorColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)separatorColor;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setLeftMarginWidth:(float)arg1 ;
-(void)setMarginColor:(id)arg1 ;
-(void)setRightMarginWidth:(float)arg1 ;
-(float)leftMarginWidth;
-(id)marginColor;
-(float)rightMarginWidth;
-(void).cxx_destruct;
@end

