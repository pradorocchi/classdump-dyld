/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateIncrementalReveal;
	BOOL _invalidateBoundsChange;
	BOOL _invalidatePlaceholderVisibility;

}

@property (assign,nonatomic) BOOL invalidateIncrementalReveal;                  //@synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal - In the implementation block
@property (assign,nonatomic) BOOL invalidateBoundsChange;                       //@synthesize invalidateBoundsChange=_invalidateBoundsChange - In the implementation block
@property (assign,nonatomic) BOOL invalidatePlaceholderVisibility;              //@synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility - In the implementation block
-(BOOL)invalidateIncrementalReveal;
-(void)setInvalidateIncrementalReveal:(BOOL)arg1 ;
-(BOOL)invalidateBoundsChange;
-(void)setInvalidateBoundsChange:(BOOL)arg1 ;
-(BOOL)invalidatePlaceholderVisibility;
-(void)setInvalidatePlaceholderVisibility:(BOOL)arg1 ;
@end

