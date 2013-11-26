/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPolygon;

@interface SBTouchTemplate : NSObject {

	SBPolygon* m_template;
	SBPolygon* m_candidate;
	unsigned m_transformType;
	float m_acceptFactor;

}

@property (assign,nonatomic) unsigned transformType; 
@property (assign,nonatomic) float acceptFactor; 
@property (nonatomic,readonly) unsigned pointCount; 
-(BOOL)acceptPoints:(CGPoint*)arg1 count:(unsigned)arg2 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(unsigned)arg2 ;
-(BOOL)acceptPolygon:(id)arg1 ;
-(unsigned)transformType;
-(void)setTransformType:(unsigned)arg1 ;
-(float)acceptFactor;
-(void)setAcceptFactor:(float)arg1 ;
-(void)dealloc;
-(unsigned)pointCount;
@end

