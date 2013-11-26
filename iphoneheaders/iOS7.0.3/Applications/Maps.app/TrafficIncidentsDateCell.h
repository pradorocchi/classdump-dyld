/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIColor;

@interface TrafficIncidentsDateCell : UITableViewCell {

	BOOL _showBottomSeparator;
	NSString* _startDateString;
	NSString* _endDateString;
	UILabel* _startDateLabel;
	UILabel* _endDateLabel;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * startDateString;              //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,retain) NSString * endDateString;                //@synthesize endDateString=_endDateString - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                     //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL showBottomSeparator;                //@synthesize showBottomSeparator=_showBottomSeparator - In the implementation block
@property (nonatomic,retain) UILabel * startDateLabel;                //@synthesize startDateLabel=_startDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * endDateLabel;                  //@synthesize endDateLabel=_endDateLabel - In the implementation block
+(float)preferredHeightWithStart:(BOOL)arg1 end:(BOOL)arg2 ;
-(void)_contentSizeDidChange:(id)arg1 ;
-(void)setShowBottomSeparator:(BOOL)arg1 ;
-(void)setStartDateString:(id)arg1 ;
-(void)setEndDateString:(id)arg1 ;
-(id)startDateLabel;
-(id)endDateLabel;
-(void)setStartDateLabel:(id)arg1 ;
-(void)setEndDateLabel:(id)arg1 ;
-(id)startDateString;
-(id)endDateString;
-(BOOL)showBottomSeparator;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextColor:(id)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)textColor;
@end

