/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PTSRowTableViewCell.h>

@class UISlider;

@interface PTSSliderRowTableViewCell : PTSRowTableViewCell {

	UISlider* _slider;

}
+(float)cellHeightForRow:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateCellCharacteristics;
-(void)updateDisplayedValue;
-(void).cxx_destruct;
-(void)_valueChanged:(id)arg1 ;
@end

