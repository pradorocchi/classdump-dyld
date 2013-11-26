/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument, TSUNoCopyDictionary, OCPPackagePart, NSMutableArray, WXOAVState, OAXDrawingState, WDCharacterRun, ;

@interface WXState : NSObject {

	WDDocument* mDocument;
	TSUNoCopyDictionary* mTextNodesToBeAdded;
	TSUNoCopyDictionary* mMapBookmarkIdToName;
	TSUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	WXOAVState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	WDCharacterRun* mReadSymbolTo;
	BOOL mNewSectionRequested;
	unsigned long mCurrentRowCNFStyle;
	unsigned long mCurrentCellCNFStyle;
	BOOL mCurrentTableWraps;
	<OCCancelDelegate>* mCancelDelegate;
	BOOL mIsThumbnail;

}

@property (assign,nonatomic) int currentOfficeArtTextType; 
@property (nonatomic,retain) <OCCancelDelegate> * cancelDelegate; 
-(void)dealloc;
-(id)init;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)drawingState;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(id)cancelDelegate;
-(void)setCancelDelegate:(id)arg1 ;
-(bool)hasAnnotations;
-(id)annotationWithID:(long)arg1 ;
-(xmlNode*)xmlAnnotationWithID:(long)arg1 ;
-(void)addAnnotationID:(long)arg1 annotation:(id)arg2 ;
-(id)annotationPart;
-(id)initNoStacksWith:(id)arg1 ;
-(void)addBookmarkId:(long)arg1 name:(id)arg2 ;
-(id)bookmarkName:(long)arg1 ;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)setDocumentPart:(id)arg1 ;
-(id)wxoavState;
-(xmlNode*)xmlFootnoteWithID:(long)arg1 ;
-(xmlNode*)xmlEndnoteWithID:(long)arg1 ;
-(BOOL)isNewSectionRequested;
-(void)setNewSectionRequested:(BOOL)arg1 ;
-(void)setReadSymbolTo:(id)arg1 ;
-(void)setCurrentOfficeArtTextType:(int)arg1 ;
-(int)currentOfficeArtTextType;
-(unsigned long)currentRowCNFStyle;
-(unsigned long)currentCellCNFStyle;
-(id)readSymbolTo;
-(void)pushEditAuthor:(id)arg1 date:(id)arg2 ;
-(void)popEditAuthorDate;
-(void)pushDeleteAuthor:(id)arg1 date:(id)arg2 ;
-(void)popDeleteAuthorDate;
-(id)nodesToBeAdded:(id)arg1 ;
-(void)clearOutNodesToBeAdded:(id)arg1 ;
-(void)addText:(id)arg1 node:(xmlNode*)arg2 ;
-(void)setAnnotationPart:(id)arg1 ;
-(void)pushFormatAuthor:(id)arg1 date:(id)arg2 ;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(void)setCurrentRowCNFStyle:(unsigned long)arg1 ;
-(void)setCurrentCellCNFStyle:(unsigned long)arg1 ;
-(void)setCurrentTableWraps:(BOOL)arg1 ;
-(BOOL)currentTableWraps;
@end

