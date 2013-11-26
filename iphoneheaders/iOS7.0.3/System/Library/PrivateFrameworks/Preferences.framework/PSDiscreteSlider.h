/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor;

@interface PSDiscreteSlider : UISlider {

	UIColor* _trackMarkersColor;

}

@property (nonatomic,retain) UIColor * trackMarkersColor;              //@synthesize trackMarkersColor=_trackMarkersColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)sliderTapped:(id)arg1 ;
-(void)setTrackMarkersColor:(id)arg1 ;
-(id)trackMarkersColor;
@end

