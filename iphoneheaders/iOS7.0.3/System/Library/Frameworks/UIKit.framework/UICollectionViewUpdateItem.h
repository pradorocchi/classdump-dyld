/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	int _updateAction;
	id _gap;

}

@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;              //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;               //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) int updateAction;                                 //@synthesize updateAction=_updateAction - In the implementation block
-(void)dealloc;
-(id)description;
-(int)inverseCompareIndexPaths:(id)arg1 ;
-(int)compareIndexPaths:(id)arg1 ;
-(id)_indexPath;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(int)_action;
-(id)_gap;
-(id)_newIndexPath;
-(BOOL)_isSectionOperation;
-(void)_setGap:(id)arg1 ;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 ;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(int)arg3 ;
-(void)_setNewIndexPath:(id)arg1 ;
-(int)updateAction;
-(id)indexPathBeforeUpdate;
-(id)indexPathAfterUpdate;
@end

