/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBIconListLayoutDelegate;
@class SBIconListModel, SBIconViewMap, SBIcon, NSMutableArray, NSArray, UIView, NSMutableSet, ;

@interface SBIconListView : UIView {

	SBIconListModel* _model;
	SBIconViewMap* _viewMap;
	int _orientation;
	float _statusBarHeight;
	SBIcon* _bouncedIcon;
	NSMutableArray* _removedIcons;
	NSArray* _rotationContainers;
	unsigned _needsLayout : 1;
	unsigned _rotating : 1;
	UIView* _fadeView;
	BOOL _purged;
	NSMutableSet* _notShownIconViews;
	BOOL _isEditing;
	<SBIconListLayoutDelegate>* _layoutDelegate;
	CGRect _wallpaperRelativeFrame;

}

@property (assign,nonatomic) int orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float statusBarHeight;                                    //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                            //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL purged;                                              //@synthesize purged=_purged - In the implementation block
@property (assign,nonatomic) CGRect wallpaperRelativeFrame;                            //@synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame - In the implementation block
@property (assign,nonatomic) <SBIconListLayoutDelegate> * layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(unsigned)maxVisibleIconRowsInterfaceOrientation:(int)arg1 ;
+(unsigned)maxIcons;
+(int)rotationAnchor;
+(unsigned)maxVisibleIcons;
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
+(unsigned)iconRowsForInterfaceOrientation:(int)arg1 ;
-(id)layoutDelegate;
-(void)setLayoutDelegate:(id)arg1 ;
-(void)removeAllIconAnimations;
-(id)initWithModel:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(id)visibleIcons;
-(unsigned)iconColumnsForCurrentOrientation;
-(float)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned)iconsInRowForSpacingCalculation;
-(float)horizontalIconPadding;
-(CGSize)defaultIconSize;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(unsigned)columnAtPoint:(CGPoint)arg1 ;
-(float)topIconInset;
-(unsigned)rowAtPoint:(CGPoint)arg1 ;
-(void)layoutIconsNow;
-(CGPoint)_wallpaperRelativeIconCenterForIconView:(id)arg1 ;
-(void)enumerateIconViewsUsingBlock:(/*^block*/ id)arg1 ;
-(CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)arg1 ;
-(SBIconCoordinate)coordinateForIcon:(id)arg1 ;
-(void)_sendLayoutDelegateWouldHaveMovedIcon:(id)arg1 ;
-(void)_layoutIcon:(id)arg1 atIndex:(unsigned)arg2 createViewNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(unsigned)firstFreeSlotIndexForType:(int)arg1 ;
-(unsigned)firstFreeSlotOrLastSlotIndexForType:(int)arg1 ;
-(CGPoint)originForIconAtIndex:(unsigned)arg1 ;
-(void)_popIconView:(id)arg1 ;
-(void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2 ;
-(id)removedIcons;
-(void)setIconsNeedLayout;
-(void)layoutIconsIfNeeded:(double)arg1 domino:(BOOL)arg2 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(void)removeIconAtIndex:(unsigned)arg1 ;
-(Class)baseIconViewClass;
-(SBIconCoordinate)iconCoordinateForIndex:(unsigned)arg1 forOrientation:(int)arg2 ;
-(CGPoint)centerForIconCoordinate:(SBIconCoordinate)arg1 ;
-(void)_sendLayoutDelegateLayoutInvalidated;
-(unsigned)indexForCoordinate:(SBIconCoordinate)arg1 forOrientation:(int)arg2 ;
-(void)showIconImagesFromColumn:(int)arg1 toColumn:(int)arg2 totalColumns:(int)arg3 allowAnimations:(BOOL)arg4 ;
-(void)enumerateIconsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned)iconRowsForSpacingCalculation;
-(float)bottomIconInset;
-(float)horizontalBumpForColumn:(unsigned)arg1 ;
-(float)verticalIconPadding;
-(unsigned)iconRowsForCurrentOrientation;
-(Class)modelClass;
-(id)viewMap;
-(void)setWallpaperRelativeFrame:(CGRect)arg1 ;
-(unsigned)rowForIcon:(id)arg1 ;
-(BOOL)compactIcons:(BOOL)arg1 ;
-(unsigned)firstFreeSlotIndex;
-(unsigned)firstFreeSlotOrLastSlotIndex;
-(id)placeIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4 ;
-(id)insertIcon:(id)arg1 atIndex:(unsigned)arg2 moveNow:(BOOL)arg3 ;
-(void)removeIcon:(id)arg1 ;
-(void)setAlphaForAllIcons:(float)arg1 ;
-(CGPoint)originForIcon:(id)arg1 ;
-(CGPoint)centerForIcon:(id)arg1 ;
-(id)viewForIcon:(id)arg1 ;
-(SBIconCoordinate)coordinateForIconAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfIcon:(id)arg1 ;
-(void)showAllIcons;
-(void)updateEditingStateAnimated:(BOOL)arg1 ;
-(BOOL)isDock;
-(void)setBouncedIcon:(id)arg1 ;
-(id)bouncedIcon;
-(void)performRotationWithDuration:(double)arg1 ;
-(void)cleanupAfterRotation;
-(BOOL)purged;
-(void)setPurged:(BOOL)arg1 ;
-(CGRect)wallpaperRelativeFrame;
-(BOOL)containsIcon:(id)arg1 ;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 ;
-(BOOL)isFull;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)orientation;
-(float)statusBarHeight;
-(BOOL)isEmpty;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(id)model;
-(void)setOrientation:(int)arg1 ;
-(id)icons;
-(void)setStatusBarHeight:(float)arg1 ;
-(void)setModel:(id)arg1 ;
-(int)iconLocation;
-(void)prepareToRotateToInterfaceOrientation:(int)arg1 ;
@end

