/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDTestIterator : WDIterator {

	WDIterator* mIterator;
	id mNext;

}
-(void)dealloc;
-(id)initWithIterator:(id)arg1 ;
-(BOOL)test:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
@end

