/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libcycript.0.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libcycript.0.dylib/libcycript.0.dylib-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface CYJSObject : NSMutableDictionary {

	OpaqueJSValueRef object_;
	OpaqueJSContextRef context_;

}
-(id)cy$toJSON:(id)arg1 ;
-(id)initWithJSObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(id)cy$toCYON;
-(void)dealloc;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)keyEnumerator;
@end

