/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKLocationRecorder <NSObject>
@required
-(void)recordInitialCourse:(double)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordError:(id)arg1;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
@end

