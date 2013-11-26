/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSDCurveFitter : NSObject {

	double mErrorDistance;
	int mErrorIterations;

}

@property (assign,nonatomic) double errorDistance; 
@property (assign,nonatomic) int errorIterations; 
+(id)curveFitter;
-(void)setErrorDistance:(double)arg1 ;
-(void)setErrorIterations:(int)arg1 ;
-(id)bezierPathFittingPointArray:(SCD_Struct_TS447*)arg1 count:(int)arg2 ;
-(void)fitCurveToPointArray:(SCD_Struct_TS447*)arg1 count:(int)arg2 bezierCallback:(/*function pointer*/ void*)arg3 context:(void*)arg4 ;
-(void)fitCurveToPoints:(id)arg1 bezierCallback:(/*function pointer*/ void*)arg2 context:(void*)arg3 ;
-(id)bezierPathFittingPoints:(id)arg1 ;
-(double)errorDistance;
-(int)errorIterations;
-(id)init;
@end

