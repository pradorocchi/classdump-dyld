/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned _isInline : 1;
	unsigned _retainCount : 31;
	unsigned _length;
	unsigned _capacity;
	void* _bytes;
	SCD_Union_NS14 _u;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/ id)arg4 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
-(void)finalize;
@end

