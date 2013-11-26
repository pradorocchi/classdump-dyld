/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/MPUCZCollectionViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MPUCoverZoomViewControllerDelegate, MPUCoverZoomDetailViewControllerProtocol;
@class MPUDataSource, , UIViewController, CADisplayLink, MPUCZCollectionViewController, MPImageCache, MPUCoverMaskView, NSIndexPath, UIPinchGestureRecognizer, CAMediaTimingFunction, UIView;

@interface MPUCoverZoomViewController : UIViewController <MPUCZCollectionViewControllerDelegate, UIGestureRecognizerDelegate> {

	MPUDataSource* _dataSource;
	<MPUCoverZoomViewControllerDelegate>* _delegate;
	UIViewController<MPUCoverZoomDetailViewControllerProtocol>* _detailViewController;
	double _animationStartTimeInterval;
	double _animationDuration;
	float _animationEndProgress;
	float _animationStartProgress;
	CADisplayLink* _animationTimer;
	MPUCZCollectionViewController* _collectionViewController;
	int _coverCountPerColumn;
	MPImageCache* _imageCache;
	MPUCoverMaskView* _maskView;
	float _pinchContentOffsetDelta;
	NSIndexPath* _pinchContentOffsetIndexPath;
	int _pinchDirection;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	BOOL _pinching;
	CAMediaTimingFunction* _timingFunction;
	UIView* _transformView;
	MPUCZCollectionViewController* _transitionCollectionViewController;
	int _transitionCoverCountPerColumn;
	CGSize _transitionEndItemSize;
	CGSize _transitionStartItemSize;
	float _transitionStartScale;
	CGAffineTransform _unzoomedAlbumViewTransform;
	BOOL _zoomed;

}

@property (assign,nonatomic,__weak) <MPUCoverZoomViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)collectionViewController:(id)arg1 didSelectCell:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned)_minimumNumberOfRows;
-(unsigned)_maximumNumberOfRows;
-(unsigned)_defaultNumberOfRows;
-(void)_removeTransitionCollectionViewForEndProgress:(float)arg1 ;
-(void)_setTransitionProgress:(float)arg1 ;
-(void)_beginTransitionForScale:(float)arg1 ;
-(void)_endTransitionAtProgress:(float)arg1 velocity:(float)arg2 ;
-(float)_collectionViewHeightForItemSize:(CGSize)arg1 coverCountPerColumn:(unsigned)arg2 ;
-(void)_updateContentOffset;
-(void)_updateContentOffsetForCollectionView:(id)arg1 ;
-(void)_pinchAction:(id)arg1 ;
-(void)detailViewControllerRequestsExit:(id)arg1 ;
-(id)imageRequestForEntity:(id)arg1 ;
-(float)imageAspectRatio;
-(id)initWithDataSource:(id)arg1 ;
-(void)_displayLinkAction:(id)arg1 ;
-(void).cxx_destruct;
@end

