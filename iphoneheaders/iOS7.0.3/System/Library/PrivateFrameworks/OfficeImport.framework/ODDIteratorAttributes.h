/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(int)start;
-(void)setStart:(int)arg1 ;
-(int)pointType;
-(void)setPointType:(int)arg1 ;
-(BOOL)hideLastTransition;
-(void)setHideLastTransition:(BOOL)arg1 ;
-(int)step;
-(void)setStep:(int)arg1 ;
-(int)axis;
-(void)setAxis:(int)arg1 ;
@end

