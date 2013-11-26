/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <StoreKitUI/SKUIComposeReviewViewDelegate.h>

@protocol SKUIComposeReviewFormDelegate;
@class SKUIComposeReviewView, , SKUIReviewMetadata;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {

	SKUIComposeReviewView* _composeView;
	<SKUIComposeReviewFormDelegate>* _delegate;
	SKUIReviewMetadata* _review;

}

@property (assign,nonatomic,__weak) <SKUIComposeReviewFormDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SKUIReviewMetadata * editedReviewMetadata; 
-(void)setRating:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)_cancel;
-(id)editedReviewMetadata;
-(id)initWithReviewMetadata:(id)arg1 ;
-(void)_submit;
-(void)composeReviewViewValidityChanged:(id)arg1 ;
-(void).cxx_destruct;
@end

