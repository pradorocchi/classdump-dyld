/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/ObservationTarget.h>

@class NSString;

@interface UserEventObservationTarget : ObservationTarget {

	NSString* _event;

}

@property (nonatomic,retain) NSString * event;              //@synthesize event=_event - In the implementation block
+(id)targetWithEvent:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setEvent:(id)arg1 ;
-(id)event;
@end

