/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OCDDocument.h>

@class EDResources, NSMutableArray, EDProcessors, ECMappingContext, EDWarnings, EDReference, NSDate, NSString, OADTheme, ESDContainer;

@interface EDWorkbook : OCDDocument {

	EDResources* mResources;
	NSMutableArray* mOtherResources;
	EDProcessors* mProcessors;
	ECMappingContext* mMappingContext;
	EDWarnings* mWarnings;
	NSMutableArray* mSheets;
	EDReference* mVisibleRange;
	unsigned mActiveSheetIndex;
	NSDate* mDateBaseDate;
	unsigned mDateBase;
	NSString* mFileName;
	NSString* mTemporaryDirectory;
	OADTheme* mTheme;
	ESDContainer* mEscherDrawingGroup;

}
-(void)dealloc;
-(id)init;
-(id)resources;
-(id)theme;
-(id)fileName;
-(void)setResources:(id)arg1 ;
-(unsigned)dateBase;
-(id)sheetAtIndex:(unsigned)arg1 ;
-(void)removeWorksheetAtIndex:(unsigned)arg1 ;
-(unsigned)sheetCount;
-(id)sheetAtIndex:(unsigned)arg1 loadIfNeeded:(bool)arg2 ;
-(id)workbookName;
-(id)processors;
-(id)initWithStringOptimization:(bool)arg1 ;
-(void)addSheet:(id)arg1 ;
-(id)temporaryDirectory;
-(void)setTemporaryDirectory:(id)arg1 ;
-(id)warnings;
-(void)applyProcessors;
-(id)initWithFileName:(id)arg1 andStringOptimization:(bool)arg2 ;
-(void)setDateBase:(unsigned)arg1 ;
-(void)setVisibleRange:(id)arg1 ;
-(void)setActiveSheetIndex:(unsigned)arg1 ;
-(id)mappingContext;
-(id)dateBaseDate;
-(unsigned)indexOfSheet:(id)arg1 ;
-(void)reduceMemoryIfPossible;
-(void)addOtherResources:(id)arg1 ;
-(id)visibleRange;
-(unsigned)indexOfSheetWithName:(id)arg1 ;
-(id)activeSheet;
-(void)setActiveSheet:(id)arg1 ;
-(void)setMappingContext:(id)arg1 ;
-(void)setTheme:(id)arg1 ;
-(id)escherDrawingGroup;
-(void)setEscherDrawingGroup:(id)arg1 ;
-(unsigned)activeSheetIndex;
@end

