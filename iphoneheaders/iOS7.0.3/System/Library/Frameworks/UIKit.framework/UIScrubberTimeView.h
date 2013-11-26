/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface UIScrubberTimeView : UIView {

	NSString* _time;
	UIColor* _timeColor;
	UIColor* _timeShadowColor;
	unsigned _align : 2;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTimeColor:(id)arg1 ;
-(void)setTimeShadowColor:(id)arg1 ;
-(void)setTime:(id)arg1 ;
-(id)time;
@end

