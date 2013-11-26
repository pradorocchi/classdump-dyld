/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSObject;

@interface ODDPointPropertySet : NSObject {

	NSString* mLayoutTypeId;
	NSString* mPresentationName;
	NSString* mPresentationStyleLabel;
	int mPresentationStyleIndex;
	int mPresentationStyleCount;
	NSObject* mPresentationAssociatedId;
	BOOL mCustomVerticalFlip;
	double mCustomScaleX;
	double mCustomScaleY;
	double mCustomOffsetX;
	double mCustomOffsetY;

}
-(void)dealloc;
-(id)layoutTypeId;
-(void)setPresentationName:(id)arg1 ;
-(id)presentationName;
-(id)presentationStyleLabel;
-(int)presentationStyleIndex;
-(double)customScaleX;
-(double)customScaleY;
-(double)customOffsetX;
-(double)customOffsetY;
-(void)setLayoutTypeId:(id)arg1 ;
-(void)setPresentationStyleLabel:(id)arg1 ;
-(void)setPresentationStyleIndex:(int)arg1 ;
-(int)presentationStyleCount;
-(void)setPresentationStyleCount:(int)arg1 ;
-(id)presentationAssociatedId;
-(void)setPresentationAssociatedId:(id)arg1 ;
-(BOOL)customVerticalFlip;
-(void)setCustomVerticalFlip:(BOOL)arg1 ;
-(void)setCustomScaleX:(double)arg1 ;
-(void)setCustomScaleY:(double)arg1 ;
-(void)setCustomOffsetX:(double)arg1 ;
-(void)setCustomOffsetY:(double)arg1 ;
@end

