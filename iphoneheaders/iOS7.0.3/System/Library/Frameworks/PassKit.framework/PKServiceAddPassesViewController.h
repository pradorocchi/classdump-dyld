/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <PassKit/PKPassGroupStackViewDelegate.h>
#import <PassKit/PKPassGroupStackViewDatasource.h>
#import <PassKit/PKGroupsControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PassKit/PKServiceAddPassesViewControllerProtocol.h>

@class NSURLConnection, NSMutableData, NSMutableArray, NSArray, UINavigationBar, PKPassGroupStackView, PKGroupsController, UIProgressView;

@interface PKServiceAddPassesViewController : UIViewController <PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKGroupsControllerDelegate, UIScrollViewDelegate, PKServiceAddPassesViewControllerProtocol> {

	NSURLConnection* _downloadPassURLConnection;
	long long _downloadPassExpectedBytes;
	NSMutableData* _downloadPassData;
	BOOL _allowsPassIngestion;
	BOOL _alreadyAdding;
	BOOL _haveStartedCardAnimation;
	BOOL _viewAppeared;
	NSMutableArray* _localPasses;
	NSArray* _localPassDatas;
	UINavigationBar* _navigationBar;
	PKPassGroupStackView* _cardStackView;
	PKGroupsController* _groupsController;
	NSMutableArray* _minimumCardHeightFromHereToTop;
	int _presentationState;
	UIProgressView* _progressView;

}

@property (retain) UINavigationBar * navigationBar;                                        //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) PKPassGroupStackView * cardStackView;                         //@synthesize cardStackView=_cardStackView - In the implementation block
@property (nonatomic,retain) PKGroupsController * groupsController;                        //@synthesize groupsController=_groupsController - In the implementation block
@property (nonatomic,retain) NSMutableArray * minimumCardHeightFromHereToTop;              //@synthesize minimumCardHeightFromHereToTop=_minimumCardHeightFromHereToTop - In the implementation block
@property (nonatomic,retain) NSMutableArray * localPasses;                                 //@synthesize localPasses=_localPasses - In the implementation block
@property (nonatomic,retain) NSArray * localPassDatas;                                     //@synthesize localPassDatas=_localPassDatas - In the implementation block
@property (assign,nonatomic) BOOL viewAppeared;                                            //@synthesize viewAppeared=_viewAppeared - In the implementation block
@property (assign,nonatomic) BOOL haveStartedCardAnimation;                                //@synthesize haveStartedCardAnimation=_haveStartedCardAnimation - In the implementation block
@property (assign,nonatomic) int presentationState;                                        //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                //@synthesize progressView=_progressView - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(unsigned)indexOfGroup:(id)arg1 ;
-(void)tearDown;
-(int)suppressedContent;
-(float)groupHeightAtIndex:(unsigned)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(BOOL)passesGrowWhenFlipped;
-(void)groupStackView:(id)arg1 didAnimateToState:(int)arg2 ;
-(void)setAllowsPassIngestion:(BOOL)arg1 ;
-(void)ingestPasses:(id)arg1 ;
-(void)ingestCardAtURL:(id)arg1 ;
-(void)tearDownDownloadConnection;
-(void)updateAddButton;
-(id)styleTitleUsingPass:(id)arg1 count:(unsigned)arg2 ;
-(id)genericTitleWithCount:(unsigned)arg1 ;
-(void)cancelCard:(id)arg1 ;
-(void)acceptCard:(id)arg1 ;
-(void)showDownloadingPassUI;
-(void)setLocalPassDatas:(id)arg1 ;
-(void)updateNavTitle;
-(void)updateAddButtonAndSettings;
-(void)animateInCardIfNeeded;
-(void)loadGroups;
-(id)localPasses;
-(void)setLocalPasses:(id)arg1 ;
-(id)localPassDatas;
-(BOOL)haveStartedCardAnimation;
-(void)setHaveStartedCardAnimation:(BOOL)arg1 ;
-(id)cardStackView;
-(void)setCardStackView:(id)arg1 ;
-(id)groupsController;
-(void)setGroupsController:(id)arg1 ;
-(id)minimumCardHeightFromHereToTop;
-(void)setMinimumCardHeightFromHereToTop:(id)arg1 ;
-(BOOL)viewAppeared;
-(void)setViewAppeared:(BOOL)arg1 ;
-(void)dealloc;
-(id)navigationBar;
-(unsigned)supportedInterfaceOrientations;
-(void)setNavigationBar:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)groupAtIndex:(unsigned)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)updateCancelButton;
-(void)setPresentationState:(int)arg1 ;
-(int)presentationState;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned)arg3 toIndex:(unsigned)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned)arg3 ;
-(id)progressView;
-(void)setProgressView:(id)arg1 ;
-(unsigned)numberOfGroups;
@end

