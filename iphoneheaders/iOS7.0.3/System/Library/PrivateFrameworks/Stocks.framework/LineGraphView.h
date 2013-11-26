/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, TintedView;

@interface LineGraphView : UIView {

	BOOL _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowingSelectedLine:(BOOL)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2 ;
-(void)setSelectedLineImage:(id)arg1 ;
-(void).cxx_destruct;
@end

