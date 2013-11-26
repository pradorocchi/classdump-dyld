/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoardFoundation/SBFWallpaperViewLegibilityObserver.h>
#import <SpringBoardFoundation/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, NSTimer, , UIImage, NSDictionary, SBFLockScreenSimpleDateFormatter;

@interface SBFWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider> {

	NSTimer* _dateTimer;
	<SBFLegibilitySettingsProviderDelegate>* _delegate;
	UIImage* _wallpaperImage;
	NSDictionary* _proceduralWallpaper;
	NSDictionary* _proceduralWallpaperOptions;
	BOOL _colorSamplingEnabled;
	BOOL _allowScrolling;
	SBFLockScreenSimpleDateFormatter* _dateFormatter;

}

@property (readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) BOOL colorSamplingEnabled; 
@property (assign,nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
-(id)_dateView;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithImage:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)wallpaperImage;
-(id)legibilitySettings;
-(id)initWithMagicWallpaper:(id)arg1 options:(id)arg2 ;
-(id)initWithScrollableImage:(id)arg1 ;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)_wallpaperView;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 ;
-(void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2 ;
-(void)_updateDateView;
-(void)_stopDateTimer;
-(void)updateLegibilitySettingsForAverageColor:(id)arg1 ;
-(id)_backdropWallpaperView;
-(id)_proceduralWallpaperViewWithFrame:(CGRect)arg1 ;
-(id)_previewView;
-(void)_startDateTimer;
-(id)initWithColorSamplingEnabled:(BOOL)arg1 ;
@end

