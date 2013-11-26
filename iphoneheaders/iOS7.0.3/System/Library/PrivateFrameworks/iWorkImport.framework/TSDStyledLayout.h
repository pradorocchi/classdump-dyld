/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableLayout.h>

@interface TSDStyledLayout : TSDDrawableLayout {

	BOOL mIsUpdatingOpacity;
	float mDynamicOpacity;

}

@property (nonatomic,readonly) float opacity; 
-(CGRect)alignmentFrameInRoot;
-(CGRect)frameForCulling;
-(CGRect)aliasedAlignmentFrameForScale:(float)arg1 ;
-(CGRect)i_baseFrame;
-(id)styledInfo;
-(CGRect)reflectionBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowedNaturalBoundsWithoutOffset;
-(CGRect)reflectionFrame;
-(CGRect)reflectionFrameInRoot;
-(CGRect)reflectionFrameForSubRect:(CGRect)arg1 ;
-(void)dynamicOpacityChangeDidBegin;
-(void)dynamicOpacityUpdateToValue:(float)arg1 ;
-(void)dynamicOpacityChangeDidEnd;
-(float)opacity;
-(BOOL)canFlip;
-(BOOL)isInvisible;
@end

