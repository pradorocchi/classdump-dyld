/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EDCollection;

@interface EDPivotField : NSObject {

	int mAxis;
	bool mCompact;
	bool mDataField;
	bool mShowDefaultSubTotal;
	bool mInsertBlankRow;
	bool mOutlineItems;
	bool mShowAllItems;
	bool mSubtotalTop;
	unsigned long mNumFmtId;
	EDCollection* mPivotFieldItems;

}
+(id)pivotField;
-(void)dealloc;
-(id)init;
-(bool)dataField;
-(void)setDataField:(bool)arg1 ;
-(bool)showDefaultSubTotal;
-(void)setShowDefaultSubTotal:(bool)arg1 ;
-(bool)insertBlankRow;
-(void)setInsertBlankRow:(bool)arg1 ;
-(bool)outlineItems;
-(void)setOutlineItems:(bool)arg1 ;
-(bool)showAllItems;
-(void)setShowAllItems:(bool)arg1 ;
-(bool)subtotalTop;
-(void)setSubtotalTop:(bool)arg1 ;
-(unsigned long)numFmtId;
-(void)setNumFmtId:(unsigned long)arg1 ;
-(id)pivotFieldItems;
-(bool)compact;
-(void)setCompact:(bool)arg1 ;
-(int)axis;
-(void)setAxis:(int)arg1 ;
@end

