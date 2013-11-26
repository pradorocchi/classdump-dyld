/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class NSString;

@interface SBApplicationIcon : SBLeafIcon {

	NSString* _displayIdentifier;

}
-(id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2 ;
-(/*^block*/ id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(/*^block*/ id)arg2 ;
-(id)folderTitleOptions;
-(id)applicationBundleID;
-(/*^block*/ id)blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 ;
-(void)generateIconImageInBackground:(/*^block*/ id)arg1 ;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(id)generateIconImage:(int)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)tags;
-(void)setBadge:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
@end

