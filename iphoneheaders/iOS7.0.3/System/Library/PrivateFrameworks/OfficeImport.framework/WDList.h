/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, WDDocument, WDListDefinition;

@interface WDList : NSObject {

	NSMutableArray* mLevelOverrides;
	WDDocument* mDocument;
	unsigned mIndex;
	WDListDefinition* mListDefinition;

}
-(void)dealloc;
-(unsigned)index;
-(id)document;
-(void)setIndex:(unsigned)arg1 ;
-(id)listDefinition;
-(long)listId;
-(id)addLevelOverride;
-(unsigned)levelOverrideCount;
-(id)levelOverrideAt:(unsigned)arg1 ;
-(id)levelOverrides;
-(id)initWithDocument:(id)arg1 listDefinition:(id)arg2 ;
@end

