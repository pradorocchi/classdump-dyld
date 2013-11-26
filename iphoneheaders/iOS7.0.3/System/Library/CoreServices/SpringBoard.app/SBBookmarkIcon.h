/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class SBBookmark;

@interface SBBookmarkIcon : SBLeafIcon {

	SBBookmark* _bookmark;

}

@property (nonatomic,retain) SBBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
-(id)initWithBookmark:(id)arg1 ;
-(id)webClip;
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)bookmark;
-(void)setBookmark:(id)arg1 ;
@end

