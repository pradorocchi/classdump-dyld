/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@protocol ChartIntervalButtonRowDelegate;
@class NSArray, ;

@interface ChartIntervalButtonRow : UIView {

	NSArray* _intervalButtons;
	<ChartIntervalButtonRowDelegate>* _delegate;
	int _maxChartInterval;

}

@property (assign,nonatomic) int maxChartInterval;                                            //@synthesize maxChartInterval=_maxChartInterval - In the implementation block
@property (assign,nonatomic,__weak) <ChartIntervalButtonRowDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setMaxChartInterval:(int)arg1 ;
-(int)maxChartInterval;
-(void)setSelected:(BOOL)arg1 forInterval:(int)arg2 ;
-(void)intervalButtonsTappedOrSwiped:(id)arg1 ;
-(int)intervalForTouchLocation:(CGPoint)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)delegate;
-(void).cxx_destruct;
@end

