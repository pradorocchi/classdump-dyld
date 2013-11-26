/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSKInnerCommandsProvider.h>

@class TSKCommand;

@interface TSCEFormulaRewriteCommand : TSKCommand <TSKInnerCommandsProvider> {

	TSKCommand* mTableRewriteCommand;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 rewriteCommand:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end

