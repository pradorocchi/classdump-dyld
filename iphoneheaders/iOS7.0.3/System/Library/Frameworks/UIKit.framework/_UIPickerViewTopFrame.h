/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface _UIPickerViewTopFrame : UIView {

	UIImage* _leftImage;
	UIImage* _middleImage;
	UIImage* _rightImage;
	float _inset;
	float _shift;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3 ;
-(void)setInset:(float)arg1 ;
-(void)setShift:(float)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

