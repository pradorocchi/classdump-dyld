/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface _MPAnisotropicVolumeThumbView : UIView {

	UIImageView* _darkReflectionView;
	double _filteredX;
	double _filteredY;
	float _magSqr;
	id _motionManagerObserver;
	UIImageView* _leftLightReflectionView;
	UIImageView* _rightLightReflectionView;

}
-(void)_updateAccelerometerX:(double)arg1 Y:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

