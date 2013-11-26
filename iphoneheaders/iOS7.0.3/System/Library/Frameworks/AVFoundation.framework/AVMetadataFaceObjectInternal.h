/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface AVMetadataFaceObjectInternal : NSObject {

	BOOL hasRollAngle;
	BOOL hasYawAngle;
	int faceID;
	float rollAngle;
	float yawAngle;

}

@property (assign) int faceID; 
@property (assign) BOOL hasRollAngle; 
@property (assign) float rollAngle; 
@property (assign) BOOL hasYawAngle; 
@property (assign) float yawAngle; 
-(int)faceID;
-(void)setFaceID:(int)arg1 ;
-(void)setHasRollAngle:(BOOL)arg1 ;
-(void)setRollAngle:(float)arg1 ;
-(void)setHasYawAngle:(BOOL)arg1 ;
-(void)setYawAngle:(float)arg1 ;
-(BOOL)hasRollAngle;
-(BOOL)hasYawAngle;
-(float)rollAngle;
-(float)yawAngle;
@end

