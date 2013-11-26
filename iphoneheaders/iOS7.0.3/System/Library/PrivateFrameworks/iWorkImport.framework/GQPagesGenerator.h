/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GQPagesGenerator <NSObject>
@required
+(int)handlePageSetup:(id)arg1 state:(id)arg2;
+(int)handleStylesheet:(id)arg1 state:(id)arg2;
+(int)beginPublication:(id)arg1 state:(id)arg2;
+(int)endPublication:(id)arg1 state:(id)arg2;
+(Class)enterMainDrawablesForPage:(unsigned)arg1 state:(id)arg2;
+(Class)enterBodyStorage:(id)arg1;
+(int)handleHeaders:(CFArrayRef)arg1 state:(id)arg2;
+(int)handleFooters:(CFArrayRef)arg1 state:(id)arg2;
+(int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;
+(int)setCurrentPageIndex:(int)arg1 state:(id)arg2;
@end

