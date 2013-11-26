/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSCH3DShadowsRenderer
@required
-(float)blurSlackForQuality:(float)arg1;
-(void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(/*^block*/ id)arg3;
-(id)shadowsFBOForContext:(id)arg1;
-(void)unprotectShadowInSession:(id)arg1;
-(void)invalidate;
@end

