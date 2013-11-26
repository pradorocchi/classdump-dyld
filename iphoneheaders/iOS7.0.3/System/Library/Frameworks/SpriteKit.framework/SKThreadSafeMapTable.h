/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray;

@interface SKThreadSafeMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {

	int _storageLock;
	NSMutableArray* _storage;

}
-(id)initWithNSMapTable:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void).cxx_destruct;
@end

