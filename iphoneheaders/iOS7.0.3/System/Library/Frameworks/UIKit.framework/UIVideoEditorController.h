/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>

@class NSMutableDictionary, NSString;

@interface UIVideoEditorController : UINavigationController {

	int _previousStatusBarStyle;
	NSMutableDictionary* _properties;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	}  _flags;

}

@property (assign,nonatomic,@dynamic) <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> * delegate; 
@property (nonatomic,copy) NSString * videoPath; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) int videoQuality; 
+(BOOL)canEditVideoAtPath:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(void)_removeAllChildren;
-(id)_createInitialController;
-(void)_autoDismiss;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(id)_properties;
-(BOOL)_didRevertStatusBar;
-(void)_setupControllers;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(id)_videoURL;
-(void)_setVideoURL:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(id)videoPath;
-(void)setVideoPath:(id)arg1 ;
@end

