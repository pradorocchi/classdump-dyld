/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <TelephonyUI/TPStarkPhoneCallViewDelegate.h>

@protocol TPStarkPhoneCallGalleryViewDelegate;
@class , NSMutableArray, UILabel, UIView, NSArray;

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallViewDelegate> {

	<TPStarkPhoneCallGalleryViewDelegate>* _delegate;
	NSMutableArray* _phoneCallViewsArray;
	UILabel* _mergedCallNameLabel;
	UILabel* _mergedCallNumberTypeOrDurationLabel;
	UIView* _mergedCallPostioningContainerView;
	NSArray* _constraintsForMergedCallContainerView;

}

@property (assign) <TPStarkPhoneCallGalleryViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * phoneCallViewsArray;                          //@synthesize phoneCallViewsArray=_phoneCallViewsArray - In the implementation block
@property (retain) UILabel * mergedCallNameLabel;                                 //@synthesize mergedCallNameLabel=_mergedCallNameLabel - In the implementation block
@property (retain) UILabel * mergedCallNumberTypeOrDurationLabel;                 //@synthesize mergedCallNumberTypeOrDurationLabel=_mergedCallNumberTypeOrDurationLabel - In the implementation block
@property (retain) UIView * mergedCallPostioningContainerView;                    //@synthesize mergedCallPostioningContainerView=_mergedCallPostioningContainerView - In the implementation block
@property (retain) NSArray * constraintsForMergedCallContainerView;               //@synthesize constraintsForMergedCallContainerView=_constraintsForMergedCallContainerView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setPhoneCallViewsArray:(id)arg1 ;
-(void)resetGalleryData;
-(void)addPrimaryPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)addPhoneCall:(id)arg1 asParticipantToPrimaryPhoneCall:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeMergedCallLabels;
-(id)phoneCallViewsArray;
-(id)phoneCallViewForPhoneCall:(id)arg1 ;
-(void)updateAndShowMergedCallLabelsIfNecessary;
-(void)_updateMergedCallHorizontalSizeConstraints;
-(id)mergedCallNameLabel;
-(id)mergedCallNumberTypeOrDurationLabel;
-(id)conferencePhoneCallViews;
-(id)anchorViewForLeftCall;
-(id)anchorViewForRightCall;
-(id)mergedCallPostioningContainerView;
-(void)setMergedCallPostioningContainerView:(id)arg1 ;
-(void)setMergedCallNameLabel:(id)arg1 ;
-(void)setMergedCallNumberTypeOrDurationLabel:(id)arg1 ;
-(void)updateClockTickNotification:(id)arg1 ;
-(id)constraintsForMergedCallContainerView;
-(void)setConstraintsForMergedCallContainerView:(id)arg1 ;
-(void)setIsShowingCallFailure:(BOOL)arg1 ;
-(void)phoneCallViewWasTapped:(id)arg1 ;
-(void)reloadPhoneCallData;
-(void)mergePrimaryPhoneCallsAnimated:(BOOL)arg1 ;
-(void)unmergePhoneCallFromConference:(id)arg1 animated:(BOOL)arg2 ;
-(void)endPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)swapHeldPhoneCallsAnimated:(BOOL)arg1 ;
@end

