/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface ReadingListProgressView : UIButton {

	double _progress;
	BOOL _usesSmallVersion;
	UIImageView* _glasses;
	UIImageView* _track;
	UIImageView* _fill;

}

@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL usesSmallVersion;              //@synthesize usesSmallVersion=_usesSmallVersion - In the implementation block
-(id)initWithFrame:(CGRect)arg1 usesSmallVersion:(BOOL)arg2 ;
-(void)setUsesSmallVersion:(BOOL)arg1 ;
-(BOOL)usesSmallVersion;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setToolbarTintColor:(id)arg1 ;
-(CGPoint)pressFeedbackPosition;
-(double)progress;
@end

