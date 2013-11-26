/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	UIImage* shadowImage;
	UIImage* topShadowImage;
	BOOL hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * topShadowImage; 
@property (assign,nonatomic) BOOL hidesShadow; 
+(int)typicalBarPosition;
-(void)dealloc;
-(id)backgroundImage;
-(id)miniBackgroundImage;
-(BOOL)hidesShadow;
-(void)setHidesShadow:(BOOL)arg1 ;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)topShadowImage;
-(id)topBackgroundImage;
-(id)miniTopBackgroundImage;
-(void)setTopShadowImage:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setMiniBackgroundImage:(id)arg1 ;
-(void)setTopBackgroundImage:(id)arg1 ;
-(void)setMiniTopBackgroundImage:(id)arg1 ;
@end

