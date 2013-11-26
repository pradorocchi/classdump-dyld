/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <PrototypeTools/PTSHUDControl.h>
#import <UIKit/_UISettingsKeyPathObserver.h>

@class _UISettings, NSString, UILabel, NSArray, UITableView;

@interface PTSPicker : UIView <UITableViewDelegate, UITableViewDataSource, PTSHUDControl, _UISettingsKeyPathObserver> {

	BOOL _enabled;
	_UISettings* _settings;
	NSString* _valueKeyPath;
	int _alignment;
	UILabel* _titleLabel;
	NSArray* _choices;
	UITableView* _tableView;
	NSArray* _subviewConstraints;

}

@property (assign,nonatomic,__weak) _UISettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSString * valueKeyPath;                      //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (assign,nonatomic) int alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSArray * choices;                            //@synthesize choices=_choices - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * subviewConstraints;               //@synthesize subviewConstraints=_subviewConstraints - In the implementation block
+(id)picker;
+(CGRect)defaultFrame;
+(id)pickerForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 choices:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)titleLabel;
-(void)setTableView:(id)arg1 ;
-(void)setSelection:(id)arg1 ;
-(int)alignment;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)tableView;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(BOOL)enabled;
-(void)setTitleLabel:(id)arg1 ;
-(id)choices;
-(void)setSettings:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)makeTitleLabel;
-(void)setValueKeyPath:(id)arg1 ;
-(id)valueKeyPath;
-(id)subviewConstraints;
-(void)setSubviewConstraints:(id)arg1 ;
-(void)setChoices:(id)arg1 ;
-(id)makeTableView;
-(void).cxx_destruct;
@end

