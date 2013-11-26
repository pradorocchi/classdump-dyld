/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class NSArray, NSString, ABPropertyGroup, ABItemLabelPicker;

@interface ABLabelPickerViewController : ABPickerViewController {

	NSArray* _additionalLabels;
	NSString* _selectedLabel;
	void* _addressBook;
	ABPropertyGroup* _propertyGroup;
	int _itemIndex;
	ABItemLabelPicker* _labelPicker;
	BOOL _didCreateNewLabel;

}

@property (nonatomic,retain) NSString * selectedLabel;              //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic) BOOL didCreateNewLabel;                //@synthesize didCreateNewLabel=_didCreateNewLabel - In the implementation block
-(void)setStyleProvider:(id)arg1 ;
-(float)ab_heightToFitForViewInPopoverView;
-(id)selectedLabel;
-(void)setSelectedLabel:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)setDidCreateNewLabel:(BOOL)arg1 ;
-(BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1 ;
-(void)itemLabelPickerDidChangeSelection:(id)arg1 ;
-(void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2 ;
-(void)itemLabelPickerDeletedLastCustomLabel:(id)arg1 ;
-(BOOL)didCreateNewLabel;
-(CGSize)fullScreenContentSize;
-(id)labelPicker;
-(id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(int)arg3 additionalLabels:(id)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
@end

