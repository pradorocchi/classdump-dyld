/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long _slotCount;
	unsigned long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)dealloc;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long)arg2 slotLength:(unsigned long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(void)returnSlot:(void*)arg1 ;
@end

