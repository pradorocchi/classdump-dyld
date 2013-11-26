/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UITableViewCell, NSIndexPath, NSTimer, UIShadowView;

@interface _UITableViewReorderingSupport : NSObject {

	UITableViewCell* _reorderedCell;
	NSIndexPath* _initialIndexPath;
	NSIndexPath* _targetIndexPath;
	unsigned _oldShowHorizontalScrollIndicator : 1;
	unsigned _oldShowVerticalScrollIndicator : 1;
	unsigned _reloadDataCalled : 1;
	unsigned _reorderingCancelled : 1;
	unsigned _reserved : 28;
	NSTimer* _autoscrollTimer;
	UIShadowView* _topShadowView;
	UIShadowView* _bottomShadowView;
	BOOL _wasScrollingEnabled;

}
@end

