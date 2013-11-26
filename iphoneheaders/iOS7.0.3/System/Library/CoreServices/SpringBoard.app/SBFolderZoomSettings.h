/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBScaleZoomSettings.h>

@class SBFAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings {

	SBFAnimationSettings* _innerFolderFadeSettings;

}

@property (retain) SBFAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(id)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(id)arg1 ;
-(void)setDefaultValues;
@end

