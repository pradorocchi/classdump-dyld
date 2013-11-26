/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI52 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
-(void)clearHistory;
-(void)addPoint:(CGPoint)arg1 ;
-(CGPoint)weightedPoint;
-(BOOL)historyCovers:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
@end

