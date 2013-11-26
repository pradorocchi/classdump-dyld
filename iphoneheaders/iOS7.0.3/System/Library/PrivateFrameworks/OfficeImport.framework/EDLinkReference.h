/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface EDLinkReference : NSObject {

	unsigned mLinkIndex;
	unsigned mFirstSheetIndex;
	unsigned mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned)arg1 firstSheetIndex:(unsigned)arg2 lastSheetIndex:(unsigned)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)firstSheetIndex;
-(unsigned)lastSheetIndex;
-(unsigned)linkIndex;
-(id)initWithLinkIndex:(unsigned)arg1 firstSheetIndex:(unsigned)arg2 lastSheetIndex:(unsigned)arg3 ;
-(BOOL)isEqualToLinkReference:(id)arg1 ;
-(void)setFirstSheetIndex:(unsigned)arg1 ;
-(void)setLastSheetIndex:(unsigned)arg1 ;
-(void)setLinkIndex:(unsigned)arg1 ;
-(bool)isWorkbookLevelReference;
@end

