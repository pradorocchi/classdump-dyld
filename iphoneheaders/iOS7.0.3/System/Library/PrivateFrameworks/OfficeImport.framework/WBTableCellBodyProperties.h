/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableCellBodyProperties : NSObject
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
+(void)readFrom:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 properties:(id)arg3 index:(unsigned)arg4 ;
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 index:(unsigned)arg3 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 index:(unsigned)arg3 ;
+(void)write:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 index:(unsigned)arg4 ;
@end

