/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
-(Class)classForArchiver;
-(void)_replaceObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(const id*)_values;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)init;
-(id)copy;
-(unsigned)retainCount;
-(id)description;
-(id)mutableCopy;
-(Class)classForCoder;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
@end

