/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>
#import <MobileTimer/WorldClockCellViewDelegate.h>

@class WorldClockCity, WorldClockCellView;

@interface WorldClockTableViewCell : UITableViewCell <WorldClockCellViewDelegate> {

	WorldClockCity* _city;
	WorldClockCellView* _clockCellView;
	int _style;

}

@property (nonatomic,retain) WorldClockCity * city; 
+(float)defaultHeight;
-(id)city;
-(void)setCity:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)start;
-(void)stop;
-(void)timeDidChangeForClockCell:(id)arg1 ;
@end

