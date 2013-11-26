/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartAbstractAreaLayoutItem.h>

@class TSCHChartAxisLayoutItem;

@interface TSCHChartAreaLayoutItem : TSCH2DChartAbstractAreaLayoutItem {

	TSCHChartAxisLayoutItem* mTopHorizontalAxis;
	TSCHChartAxisLayoutItem* mBottomHorizontalAxis;
	TSCHChartAxisLayoutItem* mLeftVerticalAxis;
	TSCHChartAxisLayoutItem* mRightVerticalAxis;
	unsigned mRelayoutDepth;
	BOOL mInOutwardLayout;

}
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(id)renderersWithRep:(id)arg1 ;
-(void)buildSubTree;
-(CGRect)i_currentBufferAreaUnitRect;
-(float)p_dataSetNameLabelPadding;
-(Class)p_axisLayoutItemClassForAxisID:(id)arg1 ;
-(void)p_arrangeSizedChildren;
-(void)dealloc;
@end

