/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface MCMoreDetailsContentView : UIView {

	UILabel* _title;
	UILabel* _subtitle1;
	UILabel* _subtitle2;

}
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setSubtitle1Text:(id)arg1 ;
-(void)setSubtitle2Text:(id)arg1 ;
-(void)setPayload:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(void).cxx_destruct;
@end

