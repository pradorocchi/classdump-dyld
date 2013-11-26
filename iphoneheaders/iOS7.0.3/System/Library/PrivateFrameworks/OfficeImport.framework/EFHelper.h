/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol EFHelper <NSObject>
@required
-(int)resolveFunctionName:(id)arg1;
-(unsigned)resolveName:(id)arg1;
-(unsigned)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
-(unsigned)resolveTableColumn:(id)arg1 columnName:(id)arg2;
-(int)rowNumber;
-(unsigned)resolveSheet:(id)arg1;
-(BOOL)isCurrentSheet:(id)arg1;
-(id)resolveTable:(id)arg1;
-(unsigned)resolveTableToSheetId:(id)arg1;
-(unsigned)resolveFile:(id)arg1;
-(int)columnNumber;
@end

