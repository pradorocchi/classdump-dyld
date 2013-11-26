/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CALayer;

@interface WADynamicWeatherBackgroundInteractiveTransaction : NSObject {

	float _progress;
	CALayer* _layer;
	CALayer* _toLayer;
	int _swipeDirection;

}

@property (assign,nonatomic) float progress;                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CALayer * layer;                 //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;               //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) int swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(void)setSwipeDirection:(int)arg1 ;
-(id)toLayer;
-(void)setToLayer:(id)arg1 ;
-(int)swipeDirection;
-(void)dealloc;
-(id)layer;
-(void)setLayer:(id)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

