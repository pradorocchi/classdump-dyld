/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel;

@interface APNetworksGroupHeader : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showSpinner;
-(void)hideSpinner;
@end

