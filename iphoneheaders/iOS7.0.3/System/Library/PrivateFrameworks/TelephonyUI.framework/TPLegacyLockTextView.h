/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSTimer, UIFont, UIImage;

@interface TPLegacyLockTextView : UIView {

	NSString* _label;
	CGImageRef _textCache;
	char* _textData;
	NSTimer* _maskTimer;
	double _maskStartTime;
	UIFont* _labelFont;
	float _deltaFromDefaultTrackWidth;
	UIImage* _maskImage;
	float _fps;

}

@property (readonly) float deltaFromDefaultTrackWidth;              //@synthesize deltaFromDefaultTrackWidth=_deltaFromDefaultTrackWidth - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)movedFromWindow:(id)arg1 ;
-(void)stopAnimation;
-(BOOL)isAnimating;
-(void)startAnimation;
-(id)label;
-(void)_cacheLabel:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithLabel:(id)arg1 fontSize:(float)arg2 trackWidthDelta:(float)arg3 ;
-(void)setFPS:(float)arg1 ;
-(float)fps;
-(float)deltaFromDefaultTrackWidth;
@end

