/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView> {

	UILabel* _titleLabel;
	UILabel* _detailLabel;
	BOOL _usesCompactLayout;

}

@property (assign,nonatomic) BOOL usesCompactLayout;              //@synthesize usesCompactLayout=_usesCompactLayout - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
-(void)setUsesCompactLayout:(BOOL)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(BOOL)usesCompactLayout;
@end

