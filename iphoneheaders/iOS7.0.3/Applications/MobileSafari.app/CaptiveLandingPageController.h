/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL;

@interface CaptiveLandingPageController : NSObject {

	NSURL* _captiveLandingPageURL;
	unsigned long long _URLGeneration;

}

@property (nonatomic,readonly) NSURL * captiveLandingPageURL; 
+(id)sharedCaptiveLandingPageController;
-(id)popCaptiveLandingPageURL;
-(id)captiveLandingPageURL;
-(void)clearCaptiveLandingPageURL;
-(void)dealloc;
-(id)init;
@end

