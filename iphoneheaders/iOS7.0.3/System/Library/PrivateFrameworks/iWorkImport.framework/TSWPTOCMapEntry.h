/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSWPTOCEntryStyle;

@interface TSWPTOCMapEntry : NSObject {

	BOOL _showInTOC;
	TSWPTOCEntryStyle* _tocEntryStyle;

}

@property (nonatomic,retain) TSWPTOCEntryStyle * tocEntryStyle;              //@synthesize tocEntryStyle=_tocEntryStyle - In the implementation block
@property (assign,nonatomic) BOOL showInTOC;                                 //@synthesize showInTOC=_showInTOC - In the implementation block
-(id)initWithTOCEntryStyle:(id)arg1 showInTOC:(BOOL)arg2 ;
-(id)tocEntryStyle;
-(void)setTocEntryStyle:(id)arg1 ;
-(BOOL)showInTOC;
-(void)setShowInTOC:(BOOL)arg1 ;
@end

