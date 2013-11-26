/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPStorage;

@interface TSWPRemoveRubyTextCommand : TSWPTextBaseCommand {

	NSRange _range;
	TSWPStorageTransaction* _undoRedoTransaction;
	TSWPStorage* _storage;

}

@property (nonatomic,readonly) TSWPStorage * storage;              //@synthesize storage=_storage - In the implementation block
-(id)storage;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RemoveRubyTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RemoveRubyTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)shouldRunSynchronously;
-(void)p_undoRedo;
-(id)initWithRubyField:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id).cxx_construct;
-(BOOL)process;
@end

