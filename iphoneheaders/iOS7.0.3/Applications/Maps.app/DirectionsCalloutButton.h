/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIView;

@interface DirectionsCalloutButton : UIButton {

	double _expectedTravelTime;
	UILabel* _expectedTravelTimeLabel;
	unsigned _transportType;
	UIView* _highlightView;

}

@property (assign,nonatomic) double expectedTravelTime;              //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (assign,nonatomic) unsigned transportType;                 //@synthesize transportType=_transportType - In the implementation block
+(id)button;
-(void)setExpectedTravelTime:(double)arg1 animated:(BOOL)arg2 ;
-(void)_preLayoutTravelTimeLabel;
-(void)setExpectedTravelTime:(double)arg1 ;
-(double)expectedTravelTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(unsigned)transportType;
@end

