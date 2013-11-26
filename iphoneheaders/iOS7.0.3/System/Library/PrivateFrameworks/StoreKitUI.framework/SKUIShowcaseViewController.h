/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SKUIShowcaseDelegate;
@class SKUIResourceLoader, NSMapTable, NSMutableArray, , NSArray, UIPageViewController, UIImage, NSTimer;

@interface SKUIShowcaseViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSMapTable* _artworkRequestIDs;
	NSMutableArray* _childViewControllers;
	<SKUIShowcaseDelegate>* _delegate;
	NSArray* _showcaseItems;
	UIPageViewController* _pageViewController;
	UIImage* _placeholderImage;
	BOOL _showsReflections;
	NSTimer* _timer;

}

@property (assign,nonatomic,__weak) <SKUIShowcaseDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int indexOfVisibleItem; 
@property (nonatomic,copy) NSArray * showcaseItems;                                 //@synthesize showcaseItems=_showcaseItems - In the implementation block
@property (assign,nonatomic) BOOL showsReflections;                                 //@synthesize showsReflections=_showsReflections - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)_reloadChildViewControllers;
-(id)_placeholderImage;
-(void)_timerStart;
-(void)_timerStop;
-(void)_timerAction:(id)arg1 ;
-(id)_artworkRequestWithItem:(id)arg1 ;
-(void)_cancelOutstandingArtworkRequests;
-(int)indexOfVisibleItem;
-(void)_reloadForTransition;
-(BOOL)showsReflections;
-(void).cxx_destruct;
-(void)_buttonAction:(id)arg1 ;
-(id)showcaseItems;
-(id)initWithArtworkLoader:(id)arg1 ;
-(void)setShowsReflections:(BOOL)arg1 ;
-(void)setShowcaseItems:(id)arg1 ;
@end

