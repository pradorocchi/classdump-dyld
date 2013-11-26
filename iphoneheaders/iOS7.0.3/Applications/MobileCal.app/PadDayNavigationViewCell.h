/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/DayNavigationViewCell.h>

@class TappableDayNumber, UILabel, NSString, TodayCirclePulseView;

@interface PadDayNavigationViewCell : DayNavigationViewCell {

	TappableDayNumber* _dayNumber;
	UILabel* _leftLabel;
	UILabel* _rightLabel;
	NSString* _leftString;
	NSString* _centerString;
	NSString* _rightString;
	TodayCirclePulseView* _pulseView;

}
+(CGSize)_boldTextSize;
+(float)topOffset;
+(id)_normalFont;
+(id)_boldFont;
+(void)localeChanged;
+(CGSize)_normalTextSize;
+(id)leftStringForDate:(id)arg1 ;
+(id)centerStringForDate:(id)arg1 ;
+(id)rightStringForDate:(id)arg1 ;
+(BOOL)stringsIncludeSpacing;
+(float)widthOfSpace;
+(void)_generateFormatStringsIfNeeded;
+(id)_leftDateFormatter;
+(id)_centerDateFormatter;
+(id)_rightDateFormatter;
+(void)_updateFormatter;
+(void)_localeChanged;
-(CGRect)circleFrame;
-(void)setCircled:(BOOL)arg1 ;
-(void)setIsToday:(BOOL)arg1 ;
-(void)setIsWeekend:(BOOL)arg1 ;
-(void)touchDownOccurred:(id)arg1 ;
-(void)touchUpOccurred:(id)arg1 ;
-(void)setWeekendColor:(id)arg1 ;
-(id)weekendColor;
-(void)setCircled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_layoutCircle;
-(void)_layoutTextFrame;
-(float)_textYFromCircleDiameter:(float)arg1 textHeight:(float)arg2 ;
-(void)pulseToday;
-(void)stopPulsing;
-(void)_updateDisplayedStrings;
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDate:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void).cxx_destruct;
@end

