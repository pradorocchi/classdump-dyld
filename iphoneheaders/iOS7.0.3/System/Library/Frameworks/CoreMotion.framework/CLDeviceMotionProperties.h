/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CLDeviceMotionProperties : NSObject {

	int fMode;
	bool fWantsPowerConservativeDeviceMotion;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) bool wantsPowerConservativeDeviceMotion; 
-(id)initWithMode:(int)arg1 andPowerConservation:(bool)arg2 ;
-(bool)wantsPowerConservativeDeviceMotion;
-(id)description;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

