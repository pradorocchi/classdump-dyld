/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, NSDate;

@interface StarkSingleLikelyRouteSignView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _timeLabel;
	UILabel* _timeSubtitleLabel;
	BOOL _offsetsContentForTitleBar;
	NSString* _title;
	NSDate* _arrivalDate;
	int _interactionModel;

}

@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * arrivalDate;                          //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (assign,nonatomic) int interactionModel;                        //@synthesize interactionModel=_interactionModel - In the implementation block
@property (assign,nonatomic) BOOL offsetsContentForTitleBar;              //@synthesize offsetsContentForTitleBar=_offsetsContentForTitleBar - In the implementation block
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(void)setOffsetsContentForTitleBar:(BOOL)arg1 ;
-(BOOL)offsetsContentForTitleBar;
-(id)_attributedTimeText;
-(id)_attributedTimeTextLargeFont;
-(id)_attributedTimeTextSmallFont;
-(void)setArrivalDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)arrivalDate;
@end

