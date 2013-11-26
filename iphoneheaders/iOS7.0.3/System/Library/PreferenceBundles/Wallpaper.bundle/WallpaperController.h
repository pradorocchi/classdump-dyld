/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class UIImage;

@interface WallpaperController : PSListController {

	BOOL _wallpaperThumbnailsAreValid;
	UIImage* _homeScreenImage;
	UIImage* _lockScreenImage;
	UIImage* _lockScreenThumbnail;
	UIImage* _homeScreenThumbnail;

}

@property (nonatomic,retain) UIImage * homeScreenImage;                     //@synthesize homeScreenImage=_homeScreenImage - In the implementation block
@property (nonatomic,retain) UIImage * lockScreenImage;                     //@synthesize lockScreenImage=_lockScreenImage - In the implementation block
@property (nonatomic,retain) UIImage * lockScreenThumbnail;                 //@synthesize lockScreenThumbnail=_lockScreenThumbnail - In the implementation block
@property (nonatomic,retain) UIImage * homeScreenThumbnail;                 //@synthesize homeScreenThumbnail=_homeScreenThumbnail - In the implementation block
@property (assign,nonatomic) BOOL wallpaperThumbnailsAreValid;              //@synthesize wallpaperThumbnailsAreValid=_wallpaperThumbnailsAreValid - In the implementation block
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)_wallpaperDidChange:(id)arg1 ;
-(void)setWallpaperThumbnailsAreValid:(BOOL)arg1 ;
-(void)_updateImagesSynchronously:(BOOL)arg1 ;
-(void)_updatePreviewCellWithImages;
-(BOOL)wallpaperThumbnailsAreValid;
-(void)setHomeScreenImage:(id)arg1 ;
-(void)setLockScreenImage:(id)arg1 ;
-(id)homeScreenImage;
-(id)lockScreenImage;
-(id)homeScreenThumbnail;
-(id)lockScreenThumbnail;
-(void)_pushAppropriateController;
-(void)_pushFactoryStillsController;
-(void)_pushAlbumListTableViewController;
-(float)_requiredHeight;
-(void)_cleanupTransactionRef;
-(id)backlightValue:(id)arg1 ;
-(void)setBacklightValue:(id)arg1 specifier:(id)arg2 ;
-(void)setLockScreenThumbnail:(id)arg1 ;
-(void)setHomeScreenThumbnail:(id)arg1 ;
-(id)specifiers;
-(void)brightnessChangedExternally;
@end

