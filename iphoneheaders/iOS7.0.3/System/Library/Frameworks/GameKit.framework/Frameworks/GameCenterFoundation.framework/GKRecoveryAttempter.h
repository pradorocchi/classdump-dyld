/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GKRecoveryAttempter : NSObject {

	/*^block*/ id _attemptRecovery;

}
+(id)recoveryAttempterUsingHandler:(/*^block*/ id)arg1 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 ;
@end

