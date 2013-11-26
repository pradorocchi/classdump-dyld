/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, NSArray, UIView;

@interface SBStarkIconImageView : UIView {

	UIImageView* _imageView;
	UIImage* _image;
	float _brightness;
	unsigned _outerStripes;
	unsigned _innerStripes;
	BOOL _needsStripeUpdating;
	NSArray* _outerStripesViews;
	NSArray* _innerStripesViews;
	UIView* _brightnessView;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) float brightness; 
@property (assign,nonatomic) unsigned outerStripes; 
@property (assign,nonatomic) unsigned innerStripes; 
-(void)setOuterStripes:(unsigned)arg1 ;
-(void)_updateStripesIfNeeded;
-(id)_viewsForEdges:(unsigned)arg1 ofWidth:(float)arg2 inFrame:(CGRect)arg3 withBGColor:(id)arg4 outRect:(CGRect*)arg5 ;
-(unsigned)outerStripes;
-(void)setInnerStripes:(unsigned)arg1 ;
-(unsigned)innerStripes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
@end

