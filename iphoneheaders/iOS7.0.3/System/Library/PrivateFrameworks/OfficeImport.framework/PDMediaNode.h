/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

@interface PDMediaNode : PDTimeNode {

	PDAnimationTarget* mTarget;
	BOOL mIsMuted;
	BOOL mIsShowWhenStopped;
	long mNumberOfSlides;
	long mVolume;

}
-(void)dealloc;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setIsShowWhenStopped:(BOOL)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(BOOL)isShowWhenStopped;
-(long)numberOfSlides;
-(void)setNumberOfSlides:(long)arg1 ;
-(long)volume;
-(void)setVolume:(long)arg1 ;
@end

