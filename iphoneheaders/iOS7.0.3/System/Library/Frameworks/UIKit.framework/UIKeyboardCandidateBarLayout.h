/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSArray;

@interface UIKeyboardCandidateBarLayout : UICollectionViewLayout {

	CGSize _contentSize;
	NSMutableArray* _allAttributes;
	NSArray* _edgeDummyCellAttributes;

}

@property (nonatomic,retain) NSMutableArray * allAttributes;                 //@synthesize allAttributes=_allAttributes - In the implementation block
@property (nonatomic,retain) NSArray * edgeDummyCellAttributes;              //@synthesize edgeDummyCellAttributes=_edgeDummyCellAttributes - In the implementation block
+(id)layout;
+(id)dummyCellCollectionViewKind;
+(Class)layoutAttributesClass;
-(void)dealloc;
-(id)init;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)allAttributes;
-(id)edgeDummyCellAttributes;
-(void)prepareLayout;
-(void)setEdgeDummyCellAttributes:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setAllAttributes:(id)arg1 ;
@end

