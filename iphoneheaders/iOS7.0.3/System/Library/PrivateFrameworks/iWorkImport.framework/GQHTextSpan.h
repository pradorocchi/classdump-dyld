/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHTextSpan : NSObject
+(int)handlePageStart:(id)arg1 state:(id)arg2 ;
+(int)handleContainerHint:(id)arg1 state:(id)arg2 ;
+(int)nonWhitespaceCount:(CFArrayRef)arg1 ;
+(int)handleSpan:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3 ;
+(int)handleTextListChild:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextList:(id)arg1 checkForTrailingBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleTextMarker:(id)arg1 outputBlanks:(BOOL)arg2 state:(id)arg3 ;
+(int)handleAutoNumber:(id)arg1 state:(id)arg2 ;
+(int)handleAttachment:(id)arg1 state:(id)arg2 ;
@end

