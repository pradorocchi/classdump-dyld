/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIActivityIndicatorView, UILabel, UIView, NSDate;

@interface PLPhotoTilePlaceholderView : UIView {

	UIImageView* _placeholderImageView;
	UIActivityIndicatorView* _loadingIndicatorView;
	UILabel* _loadingLabel;
	UIView* _loadingContainerView;
	NSDate* _lastViewPhaseChangeDate;
	BOOL _indicatorIsVisible;
	int _interfaceIdiom;
	int _placeholderState;

}

@property (readonly) int interfaceIdiom;              //@synthesize interfaceIdiom=_interfaceIdiom - In the implementation block
@property (assign) int placeholderState;              //@synthesize placeholderState=_placeholderState - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 withState:(int)arg2 interfaceIdiom:(int)arg3 ;
-(void)transitionToState:(int)arg1 ;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1 ;
-(void)showLoadingIndicatorWhenReady;
-(int)placeholderState;
-(void)_setupInitialUI;
-(void)_transitionToNewStateAnimated:(BOOL)arg1 ;
-(void)_removeLoadingContainerView;
-(double)_timeSinceLastPlaceholderPhaseChange;
-(void)_setUpLoadingContainerView;
-(id)_newLoadingLabel;
-(void)_layoutSubviews;
-(int)interfaceIdiom;
-(void)setPlaceholderState:(int)arg1 ;
@end

