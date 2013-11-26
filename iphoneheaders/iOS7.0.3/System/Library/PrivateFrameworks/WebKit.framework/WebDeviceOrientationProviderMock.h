/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebDeviceOrientationProvider.h>

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {

	WebDeviceOrientationProviderMockInternal* m_internal;

}
+(id)shared;
-(void)dealloc;
-(id)init;
-(void)setOrientation:(id)arg1 ;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
-(void)stopUpdating;
-(void)startUpdating;
-(id)lastOrientation;
@end

