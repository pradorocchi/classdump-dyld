/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TSCHCallbackAnimationDelegate : NSObject {

	id target;
	SEL selector;

}

@property (nonatomic,retain) id target; 
@property (assign,nonatomic) SEL selector; 
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)target;
-(SEL)selector;
@end

