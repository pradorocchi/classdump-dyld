/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(void)dealloc;
-(id)init;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
@end
