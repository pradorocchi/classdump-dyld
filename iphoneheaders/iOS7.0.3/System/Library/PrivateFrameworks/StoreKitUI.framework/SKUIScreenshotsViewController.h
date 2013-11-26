/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUISlideshowViewControllerDataSource.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol SKUIScreenshotsDelegate;
@class SKUIClientContext, UICollectionView, SKUIScreenshotDataConsumer, , NSOperationQueue, NSArray, NSMutableArray, SKUIVideoImageDataConsumer;

@interface SKUIScreenshotsViewController : UIViewController <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {

	SKUIClientContext* _clientContext;
	UICollectionView* _collectionView;
	SKUIScreenshotDataConsumer* _dataConsumer;
	<SKUIScreenshotsDelegate>* _delegate;
	NSOperationQueue* _operationQueue;
	NSArray* _screenshots;
	NSMutableArray* _screenshotImages;
	NSMutableArray* _screenshotRawImages;
	CGSize _screenshotMaxSize;
	SKUIVideoImageDataConsumer* _trailerConsumer;
	NSArray* _trailers;
	NSMutableArray* _trailerImages;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;                      //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUIScreenshotsDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)clientContext;
-(id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3 ;
-(void)_setImage:(id)arg1 forIndex:(int)arg2 ;
-(void)_setTrailerImage:(id)arg1 forIndex:(int)arg2 ;
-(int)numberOfItemsInSlideshowViewController:(id)arg1 ;
-(id)slideshowViewController:(id)arg1 imageAtIndex:(int)arg2 ;
-(id)slideshowViewController:(id)arg1 imageURLAtIndex:(int)arg2 size:(CGSize*)arg3 ;
-(void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(int)arg2 ;
-(id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(int)arg2 ;
-(void).cxx_destruct;
@end

