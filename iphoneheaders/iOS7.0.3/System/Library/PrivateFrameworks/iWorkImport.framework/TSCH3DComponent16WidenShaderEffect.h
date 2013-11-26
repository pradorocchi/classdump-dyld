/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DLowColorBitsShaderEffect.h>

@class NSString;

@interface TSCH3DComponent16WidenShaderEffect : TSCH3DLowColorBitsShaderEffect {

	float mFactor;
	NSString* mWidenFunction;

}

@property (assign,nonatomic) float factor; 
+(id)variableWidenSelect;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(void)setFactor:(float)arg1 ;
-(id)variableWidenSelect;
-(id)widenFunction;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(float)factor;
@end

