/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKCommandHistoryDelegate.h>

@class TSPLazyReference, TSPObject, NSString, TSKCommandHistory, TSKCommandSelectionBehaviorHistory;

@interface TSKDocumentSupport : TSPObject <TSKCommandHistoryDelegate> {

	TSPLazyReference* _commandHistoryReference;
	TSPLazyReference* _commandSelectionBehaviorHistoryReference;
	TSPObject* _webState;
	unsigned _cachedUndoCount;
	unsigned _cachedRedoCount;
	NSString* _cachedUndoActionString;
	NSString* _cachedRedoActionString;

}

@property (nonatomic,retain) TSPObject * webState;                                                                //@synthesize webState=_webState - In the implementation block
@property (nonatomic,readonly) BOOL hasCommands; 
@property (nonatomic,readonly) unsigned cachedUndoCount;                                                          //@synthesize cachedUndoCount=_cachedUndoCount - In the implementation block
@property (nonatomic,readonly) unsigned cachedRedoCount;                                                          //@synthesize cachedRedoCount=_cachedRedoCount - In the implementation block
@property (nonatomic,readonly) NSString * cachedUndoActionString;                                                 //@synthesize cachedUndoActionString=_cachedUndoActionString - In the implementation block
@property (nonatomic,readonly) NSString * cachedRedoActionString;                                                 //@synthesize cachedRedoActionString=_cachedRedoActionString - In the implementation block
@property (nonatomic,readonly) BOOL isDocumentEditedSinceLastSave; 
@property (nonatomic,readonly) TSKCommandHistory * commandHistory; 
@property (nonatomic,readonly) TSKCommandSelectionBehaviorHistory * commandSelectionBehaviorHistory; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)documentWasSaved;
-(void)clearCommandHistory;
-(BOOL)isDocumentEditedSinceLastSave;
-(id)commandHistory;
-(id)commandSelectionBehaviorHistory;
-(id)cachedUndoActionString;
-(id)cachedRedoActionString;
-(unsigned)cachedUndoCount;
-(unsigned)cachedRedoCount;
-(void)commandHistoryChanged:(id)arg1 ;
-(BOOL)hasCommands;
-(id)webState;
-(void)setWebState:(id)arg1 ;
-(id)newCommandHistoryReference;
-(id)newCommandSelectionBehaviorHistoryReference;
-(void)didLoadCommandHistory:(id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

