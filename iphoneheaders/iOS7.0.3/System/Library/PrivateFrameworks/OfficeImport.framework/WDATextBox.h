/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WDText, WDDocument, WDAContent;

@interface WDATextBox : NSObject {

	WDText* mText;
	unsigned long mNextTextBoxId;
	bool mOle;
	WDDocument* mDocument;
	WDAContent* mParent;

}
-(void)dealloc;
-(id)init;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(unsigned long)nextTextBoxId;
-(void)setOle:(BOOL)arg1 ;
-(void)setNextTextBoxId:(unsigned long)arg1 ;
-(BOOL)isOle;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

