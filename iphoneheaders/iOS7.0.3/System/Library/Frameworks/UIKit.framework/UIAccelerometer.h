/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIAccelerometerDelegate;
#import <UIKit/UIKit-Structs.h>
@class ;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	<UIAccelerometerDelegate>* _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;

}

@property (assign,nonatomic) double updateInterval;                             //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) <UIAccelerometerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
@end

