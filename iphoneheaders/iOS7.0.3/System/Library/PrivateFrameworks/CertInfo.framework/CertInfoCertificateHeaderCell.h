/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {

	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CertInfoGradientLabel* _trustedLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(float)rowHeight;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)_titleLabel;
-(id)_trustedLabel;
-(void)setTrustTitle:(id)arg1 ;
-(void)setTrustSubtitle:(id)arg1 ;
-(void)setExpired:(BOOL)arg1 ;
-(id)_certificateImage;
-(id)_notTrustedGradient;
-(id)_subtitleLabel;
@end

