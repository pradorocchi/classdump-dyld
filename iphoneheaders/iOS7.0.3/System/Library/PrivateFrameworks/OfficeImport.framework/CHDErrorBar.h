/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {

	CHDChart* mChart;
	double mValue;
	int mType;
	int mValueType;
	int mDirection;
	bool mNoEndCap;
	CHDData* mMinusValues;
	CHDData* mPlusValues;
	OADGraphicProperties* mGraphicProperties;

}
+(id)errorBarWithChart:(id)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setNoEndCap:(bool)arg1 ;
-(void)setPlusValues:(id)arg1 ;
-(void)setMinusValues:(id)arg1 ;
-(bool)isNoEndCap;
-(id)minusValues;
-(id)plusValues;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
@end

