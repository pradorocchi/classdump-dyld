/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject;

@interface MFTransform : NSObject <NSCopying> {

	CGAffineTransform m_world;
	CGPoint m_windowOrg;
	CGPoint m_windowExt;
	CGPoint m_viewportOrg;
	CGPoint m_viewportExt;
	CGAffineTransform m_combinedTransform;
	int m_mapMode;
	NSObject<MFDeviceDriver>* m_deviceDriver;

}
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
-(id)initWithDriver:(id)arg1 ;
-(int)updateTransform;
-(CGAffineTransform)getWorldMatrix;
-(void)setWorldMatrix:(CGAffineTransform)arg1 ;
-(CGPoint)getWindowOrg;
-(void)setWindowOrg:(CGPoint)arg1 ;
-(CGPoint)getWindowExtent;
-(void)setWindowExt:(CGPoint)arg1 ;
-(CGPoint)getViewportOrg;
-(void)setViewportOrg:(CGPoint)arg1 ;
-(CGPoint)getViewportExtent;
-(void)setViewportExt:(CGPoint)arg1 ;
-(CGAffineTransform)getTransformMatrix;
-(void)setTransformMatrix:(CGAffineTransform)arg1 ;
-(int)getMapMode;
-(int)setMapMode:(int)arg1 ;
-(int)setWorldTransform:(const CGAffineTransform*)arg1 ;
-(int)modifyWorldTransform:(const CGAffineTransform*)arg1 :(int)arg2 ;
-(BOOL)isUpsideDown;
-(int)setWindowExt:(int)arg1 :(int)arg2 ;
-(int)setViewportExt:(int)arg1 :(int)arg2 ;
-(int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)setWindowOrg:(int)arg1 :(int)arg2 ;
-(int)setViewportOrg:(int)arg1 :(int)arg2 ;
-(int)offsetWindowOrg:(int)arg1 :(int)arg2 ;
-(int)offsetViewportOrg:(int)arg1 :(int)arg2 ;
-(CGPoint)DPtoLP:(CGPoint)arg1 ;
-(CGPoint)LPtoDP:(CGPoint)arg1 ;
@end

