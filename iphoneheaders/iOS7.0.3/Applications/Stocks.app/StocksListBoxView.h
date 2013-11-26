/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIColor;

@interface StocksListBoxView : UIView {

	UIImage* _backgroundImage;
	UIColor* _imageMaskColor;

}

@property (nonatomic,retain) UIColor * imageMaskColor;              //@synthesize imageMaskColor=_imageMaskColor - In the implementation block
-(id)initWithBackgroundImage:(id)arg1 ;
-(void)setImageMaskColor:(id)arg1 ;
-(id)imageMaskColor;
-(void)drawRect:(CGRect)arg1 ;
-(void).cxx_destruct;
@end

