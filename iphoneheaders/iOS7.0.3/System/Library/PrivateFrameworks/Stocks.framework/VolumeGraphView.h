/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class TintedView, UIView, UIImage, StockGraphImageSet;

@interface VolumeGraphView : UIView {

	BOOL _showingTintedRegion;
	TintedView* _tintedVolumeView;
	UIView* _tintedRegionClipView;
	UIImage* _volumeImage;
	StockGraphImageSet* _graphImageSet;

}

@property (nonatomic,retain) StockGraphImageSet * graphImageSet;              //@synthesize graphImageSet=_graphImageSet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowingSelectedRegion:(BOOL)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(id)graphImageSet;
-(void)resizeSelectedVolumeClipViewWithLeftX:(float)arg1 rightX:(float)arg2 ;
-(void).cxx_destruct;
@end

