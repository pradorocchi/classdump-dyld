/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBHeadersFooters : NSObject
+(PptHeadersFootersAtom*)headersFootersAtomWithHeadersFootersContainer:(id)arg1 ;
+(id)readStringWithInstance:(int)arg1 fromContainer:(id)arg2 ;
+(void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2 ;
+(id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2 ;
+(void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5 ;
+(void)readHeadersFootersToMasterSlide:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3 ;
+(void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4 ;
@end

