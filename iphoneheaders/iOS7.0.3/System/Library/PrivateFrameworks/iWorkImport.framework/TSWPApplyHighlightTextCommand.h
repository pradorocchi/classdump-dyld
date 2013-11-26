/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPStorage, TSWPSelection, TSKAnnotationAuthor;

@interface TSWPApplyHighlightTextCommand : TSWPTextBaseCommand {

	TSWPStorage* _storage;
	TSWPSelection* _selection;
	TSKAnnotationAuthor* _author;
	TSWPStorageTransaction* _undoRedoTransaction;
	BOOL _remove;
	BOOL _showComment;

}
+(id)highlightByHighlightingRange:(NSRange)arg1 storage:(id)arg2 context:(id)arg3 author:(id)arg4 outRange:(NSRange*)arg5 outMergedHighlights:(id)arg6 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ApplyHighlightTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ApplyHighlightTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)shouldRunSynchronously;
-(void)p_invalidateSelection:(id)arg1 ;
-(void)undoRedo:(BOOL)arg1 ;
-(id)p_commonInit:(id)arg1 selection:(id)arg2 author:(id)arg3 remove:(BOOL)arg4 showComment:(BOOL)arg5 ;
-(id)initWithStorage:(id)arg1 addTextCommentSelection:(id)arg2 showComment:(BOOL)arg3 author:(id)arg4 ;
-(id)initWithStorage:(id)arg1 removeHighlightSelection:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
-(id)actionString;
@end

