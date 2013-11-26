/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementStopwatchTime : UIAccessibilityElement {

	UILabel* _label;
	int _timeType;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int timeType;                 //@synthesize timeType=_timeType - In the implementation block
-(int)timeType;
-(void)setTimeType:(int)arg1 ;
-(void)dealloc;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
@end

