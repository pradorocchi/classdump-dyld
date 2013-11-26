/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SKUIClientContext, UIImageView, UILabel, NSString, UIButton, UIControl;

@interface SKUISearchSpellCorrectedCell : UICollectionViewCell {

	BOOL _autoCorrected;
	SKUIClientContext* _clientContext;
	UIImageView* _imageView;
	UILabel* _label;
	int _preAutoCorrectCount;
	NSString* _searchTerm;
	NSString* _spellCorrectedTerm;
	UIButton* _spellCorrectionButton;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * spellCorrectedTerm;                      //@synthesize spellCorrectedTerm=_spellCorrectedTerm - In the implementation block
@property (assign,nonatomic) BOOL autoCorrected;                               //@synthesize autoCorrected=_autoCorrected - In the implementation block
@property (assign,nonatomic) int preAutoCorrectCount;                          //@synthesize preAutoCorrectCount=_preAutoCorrectCount - In the implementation block
@property (nonatomic,readonly) UIControl * spellCorrectionButton;              //@synthesize spellCorrectionButton=_spellCorrectionButton - In the implementation block
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)clientContext;
-(id)spellCorrectedTerm;
-(void)setSpellCorrectedTerm:(id)arg1 ;
-(BOOL)autoCorrected;
-(void)setAutoCorrected:(BOOL)arg1 ;
-(int)preAutoCorrectCount;
-(void)setPreAutoCorrectCount:(int)arg1 ;
-(void)_reloadLabel;
-(id)spellCorrectionButton;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

