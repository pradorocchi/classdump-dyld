/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CRObserverRecord : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic) id observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(id)initWithObserver:(id)arg1 andSelector:(SEL)arg2 ;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end

