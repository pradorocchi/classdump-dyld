/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(void)dealloc;
-(void)setColors:(id)arg1 ;
-(id)colorAtIndex:(unsigned)arg1 count:(unsigned)arg2 state:(id)arg3 ;
-(id)cycleColorAtIndex:(unsigned)arg1 ;
-(id)repeatColorAtIndex:(unsigned)arg1 ;
-(id)spanColorAtIndex:(unsigned)arg1 count:(unsigned)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)getComponentsForIndex:(unsigned)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
-(void)setMethod:(int)arg1 ;
@end

