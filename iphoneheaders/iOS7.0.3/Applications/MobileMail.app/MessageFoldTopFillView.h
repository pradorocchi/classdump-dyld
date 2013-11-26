/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIScrollView;

@interface MessageFoldTopFillView : UIView {

	UIView* _backgroundView;
	UIView* _topInnerShadowView;
	UIView* _bottomInnerShadowView;
	unsigned _fillMode;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)createBackgroundLayersIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFillMode:(unsigned)arg1 ;
-(void)setScrollView:(id)arg1 ;
-(id)scrollView;
@end

