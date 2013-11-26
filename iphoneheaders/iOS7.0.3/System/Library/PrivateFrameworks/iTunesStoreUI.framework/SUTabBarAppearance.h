/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class UIImage, NSMutableDictionary;

@interface SUTabBarAppearance : NSObject <NSCopying> {

	UIImage* _backgroundImage;
	UIImage* _dividerImage;
	UIImage* _selectedDividerImage;
	UIImage* _selectionIndicatorImage;
	float _tabBarButtonSpacing;
	float _tabBarButtonWidth;
	NSMutableDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) UIImage * backgroundImage;                      //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * dividerImage;                         //@synthesize dividerImage=_dividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedDividerImage;                 //@synthesize selectedDividerImage=_selectedDividerImage - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;              //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (assign,nonatomic) float tabBarButtonSpacing;                      //@synthesize tabBarButtonSpacing=_tabBarButtonSpacing - In the implementation block
@property (assign,nonatomic) float tabBarButtonWidth;                        //@synthesize tabBarButtonWidth=_tabBarButtonWidth - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)backgroundImage;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(id)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(id)arg1 ;
-(void)setDividerImage:(id)arg1 ;
-(id)dividerImage;
-(float)tabBarButtonWidth;
-(float)tabBarButtonSpacing;
-(id)selectedDividerImage;
-(void)enumerateTitleTextAttributesUsingBlock:(/*^block*/ id)arg1 ;
-(void)setSelectedDividerImage:(id)arg1 ;
-(void)setTabBarButtonSpacing:(float)arg1 ;
-(void)setTabBarButtonWidth:(float)arg1 ;
@end

