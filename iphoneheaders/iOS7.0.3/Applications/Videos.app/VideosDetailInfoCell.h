/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface VideosDetailInfoCell : UITableViewCell {

	UILabel* _leftHeadingLabel;
	UILabel* _rightHeadingLabel;
	UILabel* _leftDetailLabel;
	UILabel* _rightDetailLabel;

}

@property (nonatomic,copy) NSString * leftHeading; 
@property (nonatomic,copy) NSString * rightHeading; 
@property (nonatomic,copy) NSString * leftDetail; 
@property (nonatomic,copy) NSString * rightDetail; 
+(id)reuseIdentifier;
-(void)setLeftHeading:(id)arg1 ;
-(void)setRightHeading:(id)arg1 ;
-(void)setLeftDetail:(id)arg1 ;
-(void)setRightDetail:(id)arg1 ;
-(id)leftHeading;
-(id)rightHeading;
-(id)leftDetail;
-(id)rightDetail;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void).cxx_destruct;
@end

