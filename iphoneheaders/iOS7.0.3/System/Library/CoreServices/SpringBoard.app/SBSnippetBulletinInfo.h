/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBBBulletinInfo.h>

@class UIImage;

@interface SBSnippetBulletinInfo : SBBBBulletinInfo {

	float _viewHeight;
	CGRect _textRect;
	CGSize _referenceSize;
	UIImage* _icon;

}

@property (nonatomic,retain) UIImage * icon;              //@synthesize icon=_icon - In the implementation block
-(Class)reusableViewClass;
-(float)heightForReusableViewInTableView:(id)arg1 ;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)arg1 ;
-(id)_representedBulletin;
-(void)invalidateCachedLayoutData;
-(void)populateReusableView:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(void)setIcon:(id)arg1 ;
-(id)icon;
@end

