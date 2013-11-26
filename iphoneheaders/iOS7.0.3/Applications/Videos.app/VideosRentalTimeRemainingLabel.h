/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UILabel.h>

@class VideosRentalData, NSTimer;

@interface VideosRentalTimeRemainingLabel : UILabel {

	VideosRentalData* _rentalData;
	NSTimer* _refreshTimer;

}
-(void)setRentalData:(id)arg1 ;
-(void)_setRefreshTimer;
-(void)_rentalDataDidLoad:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

