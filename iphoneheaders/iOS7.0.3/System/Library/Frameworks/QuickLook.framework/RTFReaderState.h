/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSMutableData, NSArray, RTFTextTable;

@interface RTFReaderState : NSObject {

	id _delegate;
	unsigned long _defaultToUniCharEncoding;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _paperSize;
	float _lMargin;
	float _rMargin;
	float _bMargin;
	float _tMargin;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	int _tableNestingLevel;
	BOOL _isRTLDocument;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	RTFTextTable* _currentTable;
	RTFTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;

}
-(id)attributeForKey:(id)arg1 ;
-(id)currentAttributes;
-(id)currentTable;
-(BOOL)isLastTableRow;
-(void)setDefaultToUniCharEncoding:(unsigned long)arg1 ;
-(void)setToUniCharEncoding:(unsigned long)arg1 ;
-(void)setCodePageEncoding:(unsigned long)arg1 ;
-(void)setFontIsValid:(BOOL)arg1 ;
-(void)setUnicodeAlternativeLength:(unsigned)arg1 ;
-(unsigned)unicodeAlternativeLength;
-(void)setHasWritingDirectionAttribute:(BOOL)arg1 ;
-(BOOL)currentBorderIsTable;
-(unsigned)currentBorderEdge;
-(id)currentTableCell;
-(unsigned long)defaultToUniCharEncoding;
-(void)setMultiByteEncoding:(BOOL)arg1 ;
-(void)startParagraph;
-(void)paragraphInTable;
-(id)mutableParagraphStyle;
-(void)setCurrentListNumber:(int)arg1 ;
-(void)setCurrentListLevel:(int)arg1 ;
-(void)setTableNestingLevel:(int)arg1 ;
-(void)startTableRowDefinition;
-(void)endTableCellDefinition;
-(void)mergeTableCellsHorizontally;
-(void)setCurrentBorderEdge:(unsigned)arg1 isTable:(BOOL)arg2 ;
-(void)lastTableRow;
-(void)setTableFlags:(unsigned)arg1 ;
-(void)mergeTableCellsVertically;
-(BOOL)currentTableCellIsPlaceholder;
-(void)endTableRow;
-(BOOL)hasWritingDirectionAttribute;
-(void)endTableCell;
-(void)addOverride:(int)arg1 forKey:(int)arg2 ;
-(void)addListDefinition:(id)arg1 forKey:(int)arg2 ;
-(void)popState;
-(unsigned long)codePageEncoding;
-(unsigned long)toUniCharEncoding;
-(BOOL)multiByteEncoding;
-(void)_notifyEndParagraph;
-(void)_notifyProcessString:(id)arg1 ;
-(void)_notifyStartTable;
-(void)_notifyStartTableRow;
-(void)_notifyEndTableCellWithCell:(id)arg1 ;
-(void)_notifyEndTableRow;
-(id)documentInfoDictionary;
-(int)currentListNumber;
-(int)currentListLevel;
-(id)listDefinitions;
-(void)_notifyStartParagraph;
-(void)_notifyEndTable;
-(void)_notifyStartTableCell;
-(void)dealloc;
-(unsigned)level;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setRightMargin:(float)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(void)setBaseWritingDirection:(int)arg1 ;
-(int)baseWritingDirection;
-(CGSize)paperSize;
-(CGSize)viewSize;
-(id)defaultParagraphStyle;
-(float)fontSize;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeAttributeForKey:(id)arg1 ;
-(void)pushState;
-(float)leftMargin;
-(float)rightMargin;
-(float)topMargin;
-(float)bottomMargin;
-(void)setTopMargin:(float)arg1 ;
-(void)setLeftMargin:(float)arg1 ;
-(BOOL)bold;
-(BOOL)italic;
-(void)setBold:(BOOL)arg1 ;
-(void)setItalic:(BOOL)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)endParagraph;
-(id)currentParagraphStyle;
-(void)_ensureTableCells;
-(void)_pushTableState;
-(void)_popTableState;
-(void)_beginTableRow;
-(void)_setTableCells;
-(void)_clearTableCells;
-(void)_updateAttributes;
-(id)mutableAttributes;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setViewKind:(int)arg1 ;
-(void)setViewScale:(int)arg1 ;
-(BOOL)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned)arg1 isTable:(BOOL)arg2 ;
-(void)_paragraphInTable;
-(void)processString:(id)arg1 ;
@end

