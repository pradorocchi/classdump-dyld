/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <backboardd/backboardd-Structs.h>
@interface BKHIDSystemInterface : NSObject
+(void)startServer;
+(id)sharedInstance;
-(void)setSystemProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copySystemClientPropertyForKey:(id)arg1 ;
-(void)setSystemClientProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerCallback:(/*function pointer*/ void*)arg1 forProperty:(id)arg2 ;
-(id)systemPropertyForKey:(id)arg1 ;
-(void)injectHIDEvent:(IOHIDEventRef)arg1 ;
-(void)injectGSEvent:(GSEventRef)arg1 ;
-(BOOL)isOpen;
-(BOOL)ping;
-(void)open;
@end

