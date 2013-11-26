/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSString, NSDate, CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _purpose;
	NSDate* _expirationDate;
	/*^block*/ id _moreDetailsSelectedBlock;
	CertInfoCertificateHeaderCell* _headerCell;
	CertInfoCertificateSummaryDescriptionCell* _descriptionCell;

}

@property (nonatomic,readonly) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                                    //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                                 //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * purpose;                                                       //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) CertInfoCertificateHeaderCell * headerCell;                               //@synthesize headerCell=_headerCell - In the implementation block
@property (nonatomic,retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;              //@synthesize descriptionCell=_descriptionCell - In the implementation block
-(void)setPurpose:(id)arg1 ;
-(id)purpose;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView;
-(id)trustTitle;
-(void)setTrustTitle:(id)arg1 ;
-(id)trustSubtitle;
-(void)setTrustSubtitle:(id)arg1 ;
-(void)setMoreDetailsSelectedBlock:(/*^block*/ id)arg1 ;
-(void)setHeaderCell:(id)arg1 ;
-(void)setDescriptionCell:(id)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg1 ;
-(void)_configureCell:(id)arg1 ;
-(id)headerCell;
-(id)descriptionCell;
-(id)expirationDate;
-(void)setExpirationDate:(id)arg1 ;
@end

