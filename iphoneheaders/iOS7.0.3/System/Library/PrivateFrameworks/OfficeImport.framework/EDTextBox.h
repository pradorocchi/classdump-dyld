/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {

	EDString* mText;
	EDAlignmentInfo* mAlignmentInfo;
	EDProtection* mProtection;

}
+(id)textBox;
-(void)dealloc;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)arg1 ;
-(void)setProtection:(id)arg1 ;
-(id)protection;
@end

