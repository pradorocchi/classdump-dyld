/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>

@protocol RemoteUITableHeader, RemoteUITableFooter;
@class NSMutableArray, UIView, RUITableViewRow, NSNumber, NSArray;

@interface RUITableViewSection : RUIElement {

	NSMutableArray* _rows;
	UIView<RemoteUITableHeader>* _header;
	UIView<RemoteUITableFooter>* _footer;
	id _delegate;
	int _disclosureLimit;
	RUITableViewRow* _showAllRow;
	NSNumber* _drawsTopSeparator;
	BOOL _configured;
	UIView<RemoteUITableFooter>* _footerView;
	float _headerHeight;
	float _footerHeight;

}

@property (nonatomic,readonly) NSArray * rows;                                      //@synthesize rows=_rows - In the implementation block
@property (nonatomic,retain) UIView<RemoteUITableHeader> * headerView;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView<RemoteUITableFooter> * footerView;              //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) float headerHeight;                                    //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) float footerHeight;                                    //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) BOOL drawTopSeparator; 
@property (assign,nonatomic) BOOL configured;                                       //@synthesize configured=_configured - In the implementation block
-(id)sourceURL;
-(void)setDrawTopSeparator:(BOOL)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(id)rows;
-(float)headerHeight;
-(float)footerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void)setFooterHeight:(float)arg1 ;
-(id)footerView;
-(void)setFooterView:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)remoteUILinkFooterActivatedLink:(id)arg1 ;
-(void)addRow:(id)arg1 ;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(Class)_customHeaderClass;
-(Class)_customFooterClass;
-(BOOL)drawTopSeparator;
-(BOOL)hasValueForDrawsTopSeparator;
-(void)insertRow:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeRowAtIndex:(unsigned)arg1 ;
-(void)didTapShowAllRowWithTable:(id)arg1 ;
-(BOOL)hasCustomHeader;
-(BOOL)hasCustomFooter;
@end

