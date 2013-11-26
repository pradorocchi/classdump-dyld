/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>
#import <iWorkImport/TSCHMultiDataAnimatingPathLayerProtocol.h>

@interface TSCHMultiDataBarElementShapeLayer : CAShapeLayer <TSCHMultiDataElementShapeLayer, TSCHMultiDataAnimatingPathLayerProtocol> {

	BOOL mAboveIntercept;
	CGPathRef mPresentationPath;

}

@property (assign,nonatomic) CGPathRef presentationPath; 
-(id)chartRep;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(BOOL)aboveIntercept;
-(id)currentValueLayer;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(float)arg3 ;
-(CGPathRef)presentationPath;
-(void)p_addAnimationsForUpdatingPath:(CGPathRef)arg1 toAnimationInfo:(id)arg2 ;
-(void)setPresentationPath:(CGPathRef)arg1 ;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

