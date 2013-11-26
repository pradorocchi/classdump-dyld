/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUFeedCellDelegate;
@class , NSIndexPath, NSString, UITapGestureRecognizer;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _tappable;
	<PUFeedCellDelegate>* _delegate;
	NSIndexPath* _indexPath;
	NSString* _representedElementKind;
	UITapGestureRecognizer* __tapGestureRecognizer;

}

@property (assign,nonatomic,__weak) <PUFeedCellDelegate> * delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTappable,nonatomic) BOOL tappable;                                                              //@synthesize tappable=_tappable - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString * representedElementKind;                                                            //@synthesize representedElementKind=_representedElementKind - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;              //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)indexPath;
-(void)_handleTap:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setIndexPath:(id)arg1 ;
-(id)representedElementKind;
-(id)_tapGestureRecognizer;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(void)setTappable:(BOOL)arg1 ;
-(void)_updateTapGestureRecognizer;
-(void)setRepresentedElementKind:(id)arg1 ;
-(BOOL)isTappable;
-(BOOL)shouldRecognizerTap:(id)arg1 ;
-(void).cxx_destruct;
@end

