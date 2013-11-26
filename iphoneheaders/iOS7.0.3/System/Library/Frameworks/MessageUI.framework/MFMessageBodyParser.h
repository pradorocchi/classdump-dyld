/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMessageBodyParserObject.h>

@class NSMutableArray, NSError;

@interface MFMessageBodyParser : MFMessageBodyParserObject {

	NSMutableArray* _subparsers;
	NSMutableArray* _elementPool;
	NSMutableArray* _paragraphNodes;
	/*^block*/ id _foundMessageBodyElementBlock;
	NSError* _parserError;
	CFArrayRef _nodesStackCache;
	CFDictionaryRef _nodesLevelCache;
	CFDictionaryRef _nodesQuoteLevelCache;
	unsigned _options;

}

@property (assign,nonatomic) unsigned options;              //@synthesize options=_options - In the implementation block
+(BOOL)isLinebreakImpliedBeforeTagName:(id)arg1 ;
+(BOOL)isLinebreakImpliedAfterTagName:(id)arg1 ;
-(BOOL)parse;
-(id)parserError;
-(void)addSubparser:(id)arg1 ;
-(void)copyBlocks;
-(BOOL)shouldProceedParsing;
-(Class)messageBodyStringAccumulatorClass;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)flushParagraphNodes;
-(id)getAvailableMessageBodyElement;
-(void)didFindBodyElement:(id)arg1 ;
-(void)getLevel:(int*)arg1 quoteLevel:(int*)arg2 forBodyNode:(id)arg3 ;
-(id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned)arg2 ;
-(void)setFoundMessageBodyElementBlock:(/*^block*/ id)arg1 ;
-(void)removeSubparser:(id)arg1 ;
-(BOOL)isLandmarkTagName:(id)arg1 ;
-(BOOL)shouldIgnoreTagWithTagName:(id)arg1 ;
-(void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2 ;
-(void)willBeginParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(unsigned)quoteLevelForBodyNode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
@end

