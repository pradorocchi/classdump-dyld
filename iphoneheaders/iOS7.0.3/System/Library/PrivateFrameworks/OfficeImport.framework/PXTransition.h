/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXTransition : NSObject
+(void)initialize;
+(void)readTransitionFromNode:(xmlNode*)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3 ;
+(int)readOrientation:(xmlNode*)arg1 attribute:(const char*)arg2 defaultValue:(int)arg3 ;
+(int)readDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readReverseDirection:(xmlNode*)arg1 defaultValue:(int)arg2 ;
+(int)readInOut:(xmlNode*)arg1 defaultValue:(int)arg2 ;
@end

