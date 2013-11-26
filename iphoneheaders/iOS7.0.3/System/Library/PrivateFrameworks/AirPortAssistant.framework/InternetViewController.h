/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, ViewScroller, UIPageControl, UILabel, UIActivityIndicatorView, UIImageView, NSMutableSet, NSMutableArray;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {

	UIView* containerView;
	UIView* diagramContainerView;
	ViewScroller* diagramView;
	UIPageControl* pageControl;
	UIView* descriptionContainerView;
	UILabel* descriptionLabel;
	UIView* spinnerWithStatusAdjacentView;
	UIActivityIndicatorView* spinnerWithStatusAdjacentSpinner;
	UILabel* spinnerWithStatusAdjacentLabel;
	UIView* audioCableView;
	UIImageView* audioCablingImageFirstFrame;
	UIImageView* audioCablingImageLastFrame;
	UILabel* audioPortLabel;
	UILabel* speakerLabel;
	UILabel* airplayDeviceLabel;
	UIImageView* speakerImageView;
	UIImageView* airplayDeviceImageView;
	UIImageView* audioInsetImageView;
	UIView* wanCableView;
	UIImageView* cablingImageFirstFrame;
	UIImageView* cablingImageLastFrame;
	UILabel* wanPortLabel;
	UILabel* internetLabel;
	UILabel* routerLabel;
	UILabel* deviceLabel;
	UIImageView* routerImageView;
	UIImageView* deviceImageView;
	UIImageView* insetImageView;
	UIView* resetBroadband1View;
	UIImageView* resetBroadband1Image;
	UILabel* cyclePowerLabel;
	UILabel* removeBatteryLabel;
	UIView* resetBroadband2View;
	UIImageView* resetBroadband2Image;
	UIView* swapCableView;
	UIImageView* swapCableViewCablingImageFirstFrame;
	UIImageView* swapCableViewCablingImageLastFrame;
	UIImageView* swapCableViewRouterImage;
	UIImageView* swapCableViewTargetImage;
	UIImageView* swapCableViewSourceImage;
	UIImageView* swapCableViewInsetImage;
	UILabel* swapCableViewInternetLabel;
	UILabel* swapCableViewRouterLabel;
	UILabel* swapCableViewSourceLabel;
	UILabel* swapCableViewTargetLabel;
	unsigned internetFlow;
	BOOL pageControlIsChangingPage;
	NSMutableSet* recycledPages;
	NSMutableSet* visiblePages;
	NSMutableArray* images;
	SCD_Struct_In2 targetDevice;
	SCD_Struct_In2 sourceDevice;

}

@property (nonatomic,retain) UIView * containerView; 
@property (nonatomic,retain) UIView * diagramContainerView; 
@property (nonatomic,retain) ViewScroller * diagramView; 
@property (nonatomic,retain) UIPageControl * pageControl; 
@property (nonatomic,retain) UIView * descriptionContainerView; 
@property (nonatomic,retain) UILabel * descriptionLabel; 
@property (nonatomic,retain) UIView * audioCableView; 
@property (nonatomic,retain) UIImageView * audioCablingImageFirstFrame; 
@property (nonatomic,retain) UIImageView * audioCablingImageLastFrame; 
@property (nonatomic,retain) UILabel * audioPortLabel; 
@property (nonatomic,retain) UILabel * speakerLabel; 
@property (nonatomic,retain) UILabel * airplayDeviceLabel; 
@property (nonatomic,retain) UIImageView * speakerImageView; 
@property (nonatomic,retain) UIImageView * airplayDeviceImageView; 
@property (nonatomic,retain) UIImageView * audioInsetImageView; 
@property (nonatomic,retain) UIView * wanCableView; 
@property (nonatomic,retain) UIImageView * cablingImageFirstFrame; 
@property (nonatomic,retain) UIImageView * cablingImageLastFrame; 
@property (nonatomic,retain) UILabel * wanPortLabel; 
@property (nonatomic,retain) UILabel * internetLabel; 
@property (nonatomic,retain) UILabel * routerLabel; 
@property (nonatomic,retain) UILabel * deviceLabel; 
@property (nonatomic,retain) UIImageView * routerImageView; 
@property (nonatomic,retain) UIImageView * deviceImageView; 
@property (nonatomic,retain) UIImageView * insetImageView; 
@property (nonatomic,retain) UIView * resetBroadband1View; 
@property (nonatomic,retain) UIImageView * resetBroadband1Image; 
@property (nonatomic,retain) UIView * resetBroadband2View; 
@property (nonatomic,retain) UIImageView * resetBroadband2Image; 
@property (nonatomic,retain) UIView * swapCableView; 
@property (nonatomic,retain) UIImageView * swapCableViewCablingImageFirstFrame; 
@property (nonatomic,retain) UIImageView * swapCableViewCablingImageLastFrame; 
@property (nonatomic,retain) UIImageView * swapCableViewRouterImage; 
@property (nonatomic,retain) UIImageView * swapCableViewTargetImage; 
@property (nonatomic,retain) UIImageView * swapCableViewSourceImage; 
@property (nonatomic,retain) UIImageView * swapCableViewInsetImage; 
@property (nonatomic,retain) UILabel * swapCableViewInternetLabel; 
@property (nonatomic,retain) UILabel * swapCableViewRouterLabel; 
@property (nonatomic,retain) UILabel * swapCableViewSourceLabel; 
@property (nonatomic,retain) UILabel * swapCableViewTargetLabel; 
@property (assign) unsigned internetFlow; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)containerView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)pageControl;
-(void)setContainerView:(id)arg1 ;
-(void)presentInternetDisconnectedUI;
-(void)presentInternetWANPluginUI;
-(void)presentSwapCablingCompleteUI;
-(void)presentSwapCablingUI;
-(void)presentAudioPluginCompleteUI;
-(void)presentAudioPluginUI;
-(unsigned)internetFlow;
-(void)addInternetWANPluginUI;
-(void)addInternetNotWorkingUI;
-(void)addSwapCablingUI;
-(void)addAudioPluginUI;
-(void)setInternetFlow:(unsigned)arg1 ;
-(void)changeDiagram:(id)arg1 ;
-(void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(SCD_Struct_In2*)arg2 ;
-(id)deviceImageForDeviceDiagramInfo:(SCD_Struct_In2*)arg1 audioImage:(BOOL)arg2 ;
-(id)insetImageForDeviceDiagramInfo:(SCD_Struct_In2*)arg1 audioImage:(BOOL)arg2 ;
-(id)builtInImageNamed:(id)arg1 ;
-(void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4 ;
-(id)descriptionContainerView;
-(void)setDescriptionContainerView:(id)arg1 ;
-(id)descriptionLabel;
-(void)setDescriptionLabel:(id)arg1 ;
-(id)diagramContainerView;
-(void)setDiagramContainerView:(id)arg1 ;
-(void)setPageControl:(id)arg1 ;
-(id)diagramView;
-(void)setDiagramView:(id)arg1 ;
-(id)audioCableView;
-(void)setAudioCableView:(id)arg1 ;
-(id)audioCablingImageFirstFrame;
-(void)setAudioCablingImageFirstFrame:(id)arg1 ;
-(id)audioCablingImageLastFrame;
-(void)setAudioCablingImageLastFrame:(id)arg1 ;
-(id)audioPortLabel;
-(void)setAudioPortLabel:(id)arg1 ;
-(id)speakerLabel;
-(void)setSpeakerLabel:(id)arg1 ;
-(id)airplayDeviceLabel;
-(void)setAirplayDeviceLabel:(id)arg1 ;
-(id)speakerImageView;
-(void)setSpeakerImageView:(id)arg1 ;
-(id)airplayDeviceImageView;
-(void)setAirplayDeviceImageView:(id)arg1 ;
-(id)audioInsetImageView;
-(void)setAudioInsetImageView:(id)arg1 ;
-(id)wanCableView;
-(void)setWanCableView:(id)arg1 ;
-(id)cablingImageFirstFrame;
-(void)setCablingImageFirstFrame:(id)arg1 ;
-(id)cablingImageLastFrame;
-(void)setCablingImageLastFrame:(id)arg1 ;
-(id)wanPortLabel;
-(void)setWanPortLabel:(id)arg1 ;
-(id)internetLabel;
-(void)setInternetLabel:(id)arg1 ;
-(id)routerLabel;
-(void)setRouterLabel:(id)arg1 ;
-(id)routerImageView;
-(void)setRouterImageView:(id)arg1 ;
-(id)deviceLabel;
-(void)setDeviceLabel:(id)arg1 ;
-(id)deviceImageView;
-(void)setDeviceImageView:(id)arg1 ;
-(id)insetImageView;
-(void)setInsetImageView:(id)arg1 ;
-(id)resetBroadband1View;
-(void)setResetBroadband1View:(id)arg1 ;
-(id)resetBroadband1Image;
-(void)setResetBroadband1Image:(id)arg1 ;
-(id)resetBroadband2View;
-(void)setResetBroadband2View:(id)arg1 ;
-(id)resetBroadband2Image;
-(void)setResetBroadband2Image:(id)arg1 ;
-(id)swapCableView;
-(void)setSwapCableView:(id)arg1 ;
-(id)swapCableViewCablingImageFirstFrame;
-(void)setSwapCableViewCablingImageFirstFrame:(id)arg1 ;
-(id)swapCableViewCablingImageLastFrame;
-(void)setSwapCableViewCablingImageLastFrame:(id)arg1 ;
-(id)swapCableViewRouterImage;
-(void)setSwapCableViewRouterImage:(id)arg1 ;
-(id)swapCableViewTargetImage;
-(void)setSwapCableViewTargetImage:(id)arg1 ;
-(id)swapCableViewSourceImage;
-(void)setSwapCableViewSourceImage:(id)arg1 ;
-(id)swapCableViewInsetImage;
-(void)setSwapCableViewInsetImage:(id)arg1 ;
-(id)swapCableViewInternetLabel;
-(void)setSwapCableViewInternetLabel:(id)arg1 ;
-(id)swapCableViewRouterLabel;
-(void)setSwapCableViewRouterLabel:(id)arg1 ;
-(id)swapCableViewSourceLabel;
-(void)setSwapCableViewSourceLabel:(id)arg1 ;
-(id)swapCableViewTargetLabel;
-(void)setSwapCableViewTargetLabel:(id)arg1 ;
@end

