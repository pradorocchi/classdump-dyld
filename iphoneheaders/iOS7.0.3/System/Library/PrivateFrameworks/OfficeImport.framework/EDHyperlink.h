/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDString, EDReference;

@interface EDHyperlink : NSObject {

	EDString* mPath;
	EDString* mDosPath;
	EDString* mDescriptionText;
	EDString* mTextMark;
	EDString* mToolTip;
	EDReference* mReference;
	int mType;

}
+(id)hyperlink;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)reference;
-(void)setDescriptionText:(id)arg1 ;
-(void)setDosPath:(id)arg1 ;
-(void)setTextMark:(id)arg1 ;
-(void)setReference:(id)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(id)dosPath;
-(id)descriptionText;
-(id)textMark;
-(id)toolTip;
@end

