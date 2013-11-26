/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABStroke : NSObject
+(void)writeStroke:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(id)readStrokeFromShapeBaseManager:(id)arg1 colorPalette:(id)arg2 ;
+(int)readPresetDashStyle:(int)arg1 ;
+(int)readLineEndType:(int)arg1 ;
+(int)readLineEndWidth:(int)arg1 ;
+(int)readLineEndLength:(int)arg1 ;
+(int)readCapStyle:(int)arg1 ;
+(int)readCompoundType:(int)arg1 ;
+(int)writePresetDashStyle:(int)arg1 ;
+(void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(int)writeLineEndType:(int)arg1 ;
+(int)writeLineEndWidth:(int)arg1 ;
+(int)writeLineEndLength:(int)arg1 ;
+(int)writeCapStyle:(int)arg1 ;
+(int)writeCompoundType:(int)arg1 ;
+(id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
@end

