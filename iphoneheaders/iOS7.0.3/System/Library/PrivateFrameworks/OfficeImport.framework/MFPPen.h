/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPBrush, MFPCustomLineCap;

@interface MFPPen : NSObject {

	MFPBrush* mBrush;
	float mWidth;
	CGAffineTransform mTransform;
	int mStartCap;
	int mEndCap;
	int mLineJoin;
	float mMiterLimit;
	int mDashStyle;
	int mDashCap;
	float mDashOffset;
	int mDashPatternCount;
	float* mDashPattern;
	int mAlignment;
	int mCompoundArrayCount;
	float* mCompoundArray;
	MFPCustomLineCap* mCustomStartCap;
	MFPCustomLineCap* mCustomEndCap;

}
-(void)dealloc;
-(id)init;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(int)alignment;
-(id).cxx_construct;
-(void)setBrush:(id)arg1 ;
-(void)setStartCap:(int)arg1 ;
-(void)setEndCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setDashStyle:(int)arg1 ;
-(void)setDashCap:(int)arg1 ;
-(void)setDashOffset:(float)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 ;
-(void)setCompoundArray:(const float*)arg1 count:(int)arg2 ;
-(void)strokePath:(id)arg1 ;
-(void)setDashPattern:(const float*)arg1 count:(int)arg2 toPath:(id)arg3 ;
-(void)applyLineCapToPath:(id)arg1 ;
-(void)applyDashCapToPath:(id)arg1 ;
-(void)applyLineJoinToPath:(id)arg1 ;
-(void)applyDashPatternToPath:(id)arg1 ;
-(id)brush;
-(int)startCap;
-(int)endCap;
-(int)lineJoin;
-(int)dashStyle;
-(int)dashCap;
-(float)dashOffset;
-(int)dashPatternCount;
-(const float*)dashPattern;
-(int)compoundArrayCount;
-(const float*)compoundArray;
-(id)customStartCap;
-(void)setCustomStartCap:(id)arg1 ;
-(id)customEndCap;
-(void)setCustomEndCap:(id)arg1 ;
@end

