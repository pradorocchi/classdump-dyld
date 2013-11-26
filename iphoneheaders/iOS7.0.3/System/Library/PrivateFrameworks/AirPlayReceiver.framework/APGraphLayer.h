/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APGraphLayer : CALayer {

	float* _Values;
	float* _Mins;
	float* _Maxes;
	int* _StartIndex;
	int* _NumValues;
	int _NumGraphs;
	CGPoint* _Lines;
	int _MaxLength;
	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;

}
+(CGColorRef)copyGraphColorWithIndex:(int)arg1 ;
-(void)setUpGraphs:(int)arg1 ;
-(void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4 ;
-(void)updateValue:(int)arg1 value:(float)arg2 ;
-(void)dealloc;
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

