/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {

	NSMutableArray* m_tokens;
	int m_format;
	unsigned m_initNumber;

}
-(void)dealloc;
-(id)initWithText:(id)arg1 ;
-(unsigned)tokenCount;
-(id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3 ;
-(id)initWithText:(id)arg1 format:(int)arg2 ;
-(id)listLevelTextforOutline:(id)arg1 ;
-(id)token:(unsigned)arg1 ;
@end

