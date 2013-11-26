/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCropModel : NSObject {

	CGRect _cropRect;
	float _cropConstrain;
	float _angle;
	CGSize _photoSize;
	CGSize _nsqPhotoSize;

}

@property (readonly) CGSize size;                    //@synthesize photoSize=_photoSize - In the implementation block
@property (assign) float angle;                      //@synthesize angle=_angle - In the implementation block
@property (assign) CGRect cropRect; 
@property (assign) float cropConstrain;              //@synthesize cropConstrain=_cropConstrain - In the implementation block
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(void)reset;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(int)touchedImageSidesForCurrentCrop;
-(double)maxAllowedTranslateWithDirection:(double)arg1 ;
-(void)translate:(float)arg1 atAngle:(float)arg2 ;
-(double)maxAllowedScaleFromPoint:(CGPoint)arg1 scaleUp:(BOOL)arg2 ;
-(void)scale:(float)arg1 fromPoint:(CGPoint)arg2 ;
-(float)maxAllowedRotationFromPoint:(CGPoint)arg1 counterClockwise:(BOOL)arg2 ;
-(void)rotate:(float)arg1 fromPoint:(CGPoint)arg2 ;
-(CGPoint)maxAllowableEdgeAdjustmentForDragAction:(int)arg1 withDirection:(CGPoint)arg2 ;
-(void)adjustEdgeForDragAction:(int)arg1 withAmount:(CGPoint)arg2 ;
-(CGPoint)scalePointForCropAction:(int)arg1 ;
-(void)changeCropAspectRatioTo:(float)arg1 ;
-(float)cropConstrain;
-(void)calculateCornerPoints:(CGPoint*)arg1 ;
-(CGRect)recomputeCropRect:(CGRect)arg1 forStraightenAngle:(float)arg2 ;
-(CGImageRef)newRenderedCroppedImageFromImage:(CGImageRef)arg1 forSize:(CGSize)arg2 ;
-(CGImageRef)newAspectedPreviewFromImage:(CGImageRef)arg1 forSize:(CGSize)arg2 andRatio:(float)arg3 ;
-(void)drawAspectedPreviewFromImage:(CGImageRef)arg1 inContext:(CGContextRef)arg2 inRect:(CGRect)arg3 withRatio:(float)arg4 ;
-(void)setCropConstrain:(float)arg1 ;
@end

