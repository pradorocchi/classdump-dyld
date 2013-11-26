/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CertInfoCertificateDetailsView;

@interface CertInfoTrustDetailsView : UIView {

	NSArray* _certificateViews;
	CertInfoCertificateDetailsView* _currentCertView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 trustProperties:(id)arg2 ;
-(void)_appendRemainingCertificates;
@end

