/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIWindowDelegate <NSObject>
@optional
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
-(void)window:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(id)rotatingContentViewForWindow:(id)arg1;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
-(void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg2;
-(void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3;
-(id)rotatingFooterViewForWindow:(id)arg1;
-(id)rotatingHeaderViewForWindow:(id)arg1;
-(void)getRotationContentSettings:(SCD_Struct_Ro7*)arg1 forWindow:(id)arg2;
-(id)rotatingSnapshotViewForWindow:(id)arg1;
@end

