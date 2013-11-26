/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSlideGestureRecognizer.h>

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {

	float _arcCenter;
	float _arcSize;
	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;

}
-(float)computeIncrementalGestureMotion:(SBGestureContextRef)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(id)initForHorizontalPanning;
-(id)initForVerticalPanning;
-(id)init;
@end

