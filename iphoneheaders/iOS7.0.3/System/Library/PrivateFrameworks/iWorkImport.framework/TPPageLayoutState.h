/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TPPageIndexPath, TSWPStorage, TPSection;

@interface TPPageLayoutState : NSObject {

	TPPageIndexPath* _pageIndexPath;
	unsigned _documentPageIndex;
	TSWPStorage* _bodyStorage;
	void* _bodyLayoutState;
	unsigned _bodyCharIndex;
	unsigned _footnoteIndex;
	BOOL _doingLayout;
	BOOL _onLastSection;
	unsigned _lastLaidOutSectionIndex;

}

@property (nonatomic,readonly) TPPageIndexPath * pageIndexPath;                    //@synthesize pageIndexPath=_pageIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned sectionIndex; 
@property (nonatomic,readonly) unsigned pageIndex; 
@property (nonatomic,readonly) unsigned documentPageIndex;                         //@synthesize documentPageIndex=_documentPageIndex - In the implementation block
@property (nonatomic,readonly) unsigned lastLaidOutDocumentPageIndex; 
@property (nonatomic,readonly) unsigned lastLaidOutSectionIndex;                   //@synthesize lastLaidOutSectionIndex=_lastLaidOutSectionIndex - In the implementation block
@property (assign,nonatomic) void* bodyLayoutState;                                //@synthesize bodyLayoutState=_bodyLayoutState - In the implementation block
@property (assign,nonatomic) unsigned bodyCharIndex;                               //@synthesize bodyCharIndex=_bodyCharIndex - In the implementation block
@property (assign,nonatomic) unsigned footnoteIndex;                               //@synthesize footnoteIndex=_footnoteIndex - In the implementation block
@property (assign,nonatomic) BOOL doingLayout;                                     //@synthesize doingLayout=_doingLayout - In the implementation block
@property (nonatomic,readonly) TPSection * section; 
@property (nonatomic,readonly) NSRange sectionCharRange; 
@property (nonatomic,readonly) BOOL onLastSection;                                 //@synthesize onLastSection=_onLastSection - In the implementation block
@property (nonatomic,readonly) BOOL isLayoutComplete; 
-(BOOL)isLayoutComplete;
-(id)initWithBodyStorage:(id)arg1 ;
-(unsigned)documentPageIndex;
-(BOOL)isLayoutCompleteThroughDocumentPageIndex:(unsigned)arg1 ;
-(BOOL)isLayoutCompleteUpToDocumentPageIndex:(unsigned)arg1 ;
-(void)setBodyCharIndex:(unsigned)arg1 ;
-(void)setFootnoteIndex:(unsigned)arg1 ;
-(BOOL)doingLayout;
-(void)setDocumentPageIndex:(unsigned)arg1 ;
-(unsigned)lastLaidOutDocumentPageIndex;
-(void)restartLayoutFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned)arg2 ;
-(void*)bodyLayoutState;
-(void)setBodyLayoutState:(void*)arg1 ;
-(void)backUpPageIndex;
-(unsigned)bodyCharIndex;
-(void)setDoingLayout:(BOOL)arg1 ;
-(void)advancePageIndex;
-(id)pageIndexPath;
-(unsigned)footnoteIndex;
-(NSRange)sectionCharRange;
-(BOOL)onLastSection;
-(void)advanceSectionIndex;
-(unsigned)lastLaidOutSectionIndex;
-(void)restartLayoutFromFirstPage;
-(void)dealloc;
-(id)init;
-(id)section;
-(unsigned)pageIndex;
-(void)setPageIndex:(unsigned)arg1 ;
-(unsigned)sectionIndex;
-(void)setSectionIndex:(unsigned)arg1 ;
@end

