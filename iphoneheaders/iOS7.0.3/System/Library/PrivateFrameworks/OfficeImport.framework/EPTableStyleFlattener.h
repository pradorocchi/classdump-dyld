/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/EPStyleFlattener.h>

@class EDTable;

@interface EPTableStyleFlattener : EPStyleFlattener {

	EDTable* mTable;
	unsigned mHeaderRowCount;
	unsigned mTotalsRowCount;

}
-(bool)isObjectSupported:(id)arg1 ;
-(int)stripeOffset:(int)arg1 row:(bool)arg2 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(void)clearCache;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)extractGlobalStyleElements:(id)arg1 ;
@end

