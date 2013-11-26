/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AXCameraTorchManager.h>

@interface CMVideoCaptureCameraTorchManager : NSObject <AXCameraTorchManager> {

	tagHANDLE* _hCMCapture;

}
-(BOOL)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
-(id)initWithVideoCaptureHandle:(tagHANDLE*)arg1 ;
@end

