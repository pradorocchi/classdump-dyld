/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {

	WDDocument* mDocument;
	NSMutableDictionary* mCitations;

}
-(void)dealloc;
-(unsigned)count;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
@end

