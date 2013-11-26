/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSMutableDictionary, UITableView, NSIndexPath, UIView, UIColor, ManagedTableViewCell;

@interface TableViewManager : NSObject <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {

	NSMutableDictionary* _tableDescriptorDict;
	UITableView* _managedTableView;
	id _delegate;
	NSIndexPath* _currentFirstResponderCellPath;
	UIView* _currentFirstResponder;
	BOOL _handlingBulkUpdate;
	float _cellLeftEdgeOrigin;
	float _cellContentWidth;
	UIColor* _detailTextColor;
	UIColor* _selectedTextColor;
	UIColor* _editTextColor;
	UIColor* _subtitleColor;
	ManagedTableViewCell* _gLayoutGenericCell;
	ManagedTableViewCell* _gLayoutNoBackgroundCell;

}

@property (assign,nonatomic) <TableViewManagerDelegate> * delegate; 
@property (nonatomic,retain) UITableView * managedTableView; 
+(void)initialize;
+(id)systemLabelFont;
+(id)smallSystemLabelFont;
+(id)boldSystemLabelFont;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)delegate;
-(void)awakeFromNib;
-(void)deleteSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)endEditing;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)hideKeyboard;
-(unsigned)indexOfSectionWithIdentifier:(id)arg1 ;
-(unsigned)tagOfSelectedRowInMenuSection:(unsigned)arg1 ;
-(void)cleanTableViewForReuse;
-(id)createRowStyleBasicWholeCellButton:(id)arg1 withTag:(unsigned)arg2 ;
-(void)addSectionInfo:(id)arg1 ;
-(void)deleteSectionWithIdentifier:(id)arg1 ;
-(id)createRowStyleBasicWithImage:(id)arg1 text1:(id)arg2 text2:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleBasicEditableWithImage:(id)arg1 labelText:(id)arg2 currentValue:(id)arg3 placeholderText:(id)arg4 isSecure:(BOOL)arg5 keyboardType:(int)arg6 withTag:(unsigned)arg7 ;
-(void)setNewRow:(id)arg1 accessoryType:(int)arg2 ;
-(BOOL)tagOfCellAtIndexPath:(id)arg1 tag:(int*)arg2 ;
-(id)indexPathOfCellWithTag:(int)arg1 ;
-(void)deleteSection:(unsigned)arg1 ;
-(void)updateFooter:(id)arg1 forSectionWithIdentifier:(id)arg2 ;
-(id)getValueForFirstItemOfType:(id)arg1 inCellWithTag:(int)arg2 ;
-(BOOL)verifyStr1:(id)arg1 forTag1:(unsigned)arg2 matchesStr2:(id)arg3 forTag2:(unsigned)arg4 ;
-(void)deleteSectionWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNewRow:(id)arg1 verifierAccessoryType:(int)arg2 ;
-(void)addSectionInfo:(id)arg1 animated:(BOOL)arg2 ;
-(id)createRowStyleBasicOnOffWithImage:(id)arg1 labelText:(id)arg2 isOn:(BOOL)arg3 withTag:(unsigned)arg4 ;
-(void)selectMenuCellAtIndexPath:(id)arg1 ;
-(void)updateHeader:(id)arg1 forSectionWithIdentifier:(id)arg2 ;
-(void)initializeTableViewManagerCommon;
-(void)setManagedTableView:(id)arg1 ;
-(void)uiTextFieldDidChange:(id)arg1 ;
-(id)getCellDictForCellAtIndexPath:(id)arg1 ;
-(void)setValue:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(unsigned)arg3 inCellAtIndexPath:(id)arg4 ;
-(BOOL)isCellAtIndexPath:(id)arg1 identicalToNewRow:(id)arg2 ;
-(void)updateCellAtIndexPath:(id)arg1 withNewRowInfo:(id)arg2 ;
-(id)managedTableView;
-(BOOL)checkIfSectionDataSameInTable:(id)arg1 ;
-(void)updateSectionDataInIdenticalTable:(id)arg1 ;
-(void)deleteAllRowsInSectionCore:(unsigned)arg1 ;
-(void)reloadSection:(unsigned)arg1 ;
-(id)getSectionDictForSection:(int)arg1 ;
-(void)insertSectionInfo:(id)arg1 atIndex:(unsigned)arg2 withRowAnimation:(int)arg3 ;
-(void)recordInitialSelectedMenuItemsForNewSection:(int)arg1 ;
-(id)commonAddOptionalBasicImage:(id)arg1 withNeighborItem:(id)arg2 toCellItems:(id)arg3 ;
-(id)commonAddOptionalStaticText:(id)arg1 withNeighborItem:(id)arg2 toCellItems:(id)arg3 ;
-(id)getRowArrayForSection:(unsigned)arg1 ;
-(id)getInfoForItemOfType:(id)arg1 atItemTypeIndex:(unsigned)arg2 inCell:(id)arg3 ;
-(id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned)arg2 inCell:(id)arg3 ;
-(id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned)arg2 inCellAtIndexPath:(id)arg3 ;
-(id)getValueForItemOfType:(id)arg1 atItemTypeIndex:(unsigned)arg2 inCellWithTag:(int)arg3 ;
-(void)setValue:(id)arg1 forItem:(id)arg2 ;
-(void)setMinValue:(id)arg1 andMaxValue:(id)arg2 forItem:(id)arg3 ;
-(id)findFirstResponderInTableView:(id)arg1 foundParentCell:(id*)arg2 ;
-(id)findFirstResponderInView:(id)arg1 ;
-(id)findFirstResponderInTableView:(id)arg1 fromSection:(unsigned)arg2 fromRow:(unsigned)arg3 foundParentCell:(id*)arg4 ;
-(void)setVerifierAccessoryView:(int)arg1 forCell:(id)arg2 ;
-(void)setMenuCell:(id)arg1 visualStateToSelected:(BOOL)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 layoutMode:(BOOL)arg3 ;
-(void)updateHeader:(id)arg1 inSection:(unsigned)arg2 ;
-(void)setDescriptorObject:(id)arg1 forKey:(id)arg2 inSection:(int)arg3 ;
-(void)updateFooter:(id)arg1 inSection:(unsigned)arg2 ;
-(float)totalTableSectionsHeight;
-(id)getDescriptorObjectForKey:(id)arg1 inSection:(int)arg2 ;
-(void)deferedTouchInCellAtIndexPath:(id)arg1 ;
-(BOOL)textFieldIsSecureAndUnchanged:(id)arg1 ;
-(unsigned)findAndSetItemObject:(id)arg1 toValue:(id)arg2 inCellWithInternalRowSectionTagValue:(unsigned)arg3 ;
-(id)findNextResponderInTableView:(id)arg1 foundParentCell:(id*)arg2 ;
-(unsigned)indexOfSelectedRowInMenuSection:(unsigned)arg1 ;
-(id)cellInfoOfSelectedRowInMenuSection:(unsigned)arg1 ;
-(BOOL)textFieldHasVerifierAtIndexPath:(id)arg1 ;
-(BOOL)textFieldVerifiedAtIndexPath:(id)arg1 ;
-(void)setVerifierCellAccessoryType:(int)arg1 forCellsAtIndexPaths:(id)arg2 ;
-(void)informOfNewCellLeftEdge:(float)arg1 andWidth:(float)arg2 ;
-(void)insertNewRows:(id)arg1 atIndexPaths:(id)arg2 withRowAnimation:(int)arg3 ;
-(void)appendNewRow:(id)arg1 forSection:(unsigned)arg2 ;
-(BOOL)updateRowAtIndexPath:(id)arg1 withNewRowInfo:(id)arg2 ;
-(BOOL)updateSectionsIfMatchingExisting:(id)arg1 ;
-(void)deleteRowInSection:(unsigned)arg1 withTag:(int)arg2 ;
-(void)deleteAllRowsInSection:(unsigned)arg1 ;
-(void)setSectionValue:(id)arg1 forKey:(id)arg2 inSection:(unsigned)arg3 ;
-(id)createRowStyleSubtitleWitImage:(id)arg1 mainText:(id)arg2 subtitleText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleSubtitleWithRightImage:(id)arg1 subtitleText:(id)arg2 rightImage:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleSubtitleWithRightText:(id)arg1 subtitleText:(id)arg2 rightText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleBasicWithText:(id)arg1 centerImage:(id)arg2 text2:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleBasicButtons:(id)arg1 title2:(id)arg2 withTag:(unsigned)arg3 ;
-(id)createRowStyleTitledStaticMultiline:(id)arg1 titleImage:(id)arg2 bodyText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleTitledParagraph:(id)arg1 titleImage:(id)arg2 bodyText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleTitledParagraphWithLeftImage:(id)arg1 title:(id)arg2 bodyText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleSegmentedControlWithItems:(id)arg1 selectedSegmentIndex:(id)arg2 enabled:(BOOL)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleProgressViewWithCancelAndStatus:(id)arg1 statusText:(id)arg2 altText:(id)arg3 withTag:(unsigned)arg4 ;
-(id)createRowStyleActivityStatus:(BOOL)arg1 text1:(id)arg2 grayedText1:(BOOL)arg3 text2:(id)arg4 grayedText2:(BOOL)arg5 withTag:(unsigned)arg6 ;
-(id)createRowStyleDatePicker:(id)arg1 minimumDate:(id)arg2 maximumDate:(id)arg3 withMode:(int)arg4 withTag:(unsigned)arg5 ;
-(id)createRowStyleBasicWithUnreadBubble:(unsigned)arg1 text1:(id)arg2 text2:(id)arg3 withTag:(unsigned)arg4 ;
-(id)getValueForFirstItemOfType:(id)arg1 inCellAtIndexPath:(id)arg2 ;
-(void)setValue:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(unsigned)arg3 inCellWithTag:(int)arg4 ;
-(void)setMinValue:(id)arg1 andMaxValue:(id)arg2 forItemOfType:(id)arg3 atItemTypeIndex:(unsigned)arg4 inCellWithTag:(int)arg5 ;
-(BOOL)setNewRow:(id)arg1 itemAttribute:(id)arg2 forItemOfType:(id)arg3 atItemTypeIndex:(unsigned)arg4 toValue:(id)arg5 ;
-(void)setNewRow:(id)arg1 tag:(unsigned)arg2 ;
-(void)setNewRow:(id)arg1 representedObject:(id)arg2 ;
-(void)setNewRow:(id)arg1 editingAccessoryType:(int)arg2 ;
-(void)setNewRow:(id)arg1 accessoryView:(id)arg2 ;
-(void)setNewRow:(id)arg1 editingAccessoryView:(id)arg2 ;
-(void)setNewRow:(id)arg1 editingStyle:(int)arg2 ;
-(void)setNewRow:(id)arg1 textFieldViewMode:(int)arg2 ;
-(void)setNewRow:(id)arg1 selectableCell:(BOOL)arg2 ;
-(void)setCellRowInfoItem:(id)arg1 atIndex:(unsigned)arg2 forKey:(id)arg3 toValue:(id)arg4 ;
-(void)makeFirstEditableCellCurrentResponder;
-(BOOL)becomeFirstResponderAtIndexPath:(id)arg1 ;
-(id)getRepresentedObjectForCellAtIndexPath:(id)arg1 ;
-(void)setRepresentedObject:(id)arg1 forCellAtIndexPath:(id)arg2 ;
-(float)totalTableHeight;
-(void)switchAction:(id)arg1 ;
-(void)buttonAction:(id)arg1 ;
-(void)segmentedControlValueChanged:(id)arg1 ;
-(void)selectedDateChanged:(id)arg1 ;
-(void)bulkUpdateBegin;
-(void)bulkUpdateEnd;
-(id)indexPathOfFirstCellWithUnverifiedVerifier;
-(void)setImageViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setLabelViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(id)labelView:(id)arg1 ;
-(void)setEditTextViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setSwitchViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setActivityViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setButtonViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setProgressViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setDatePickerValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(void)setUnreadBubbleCountValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(id)imageView:(id)arg1 ;
-(void)setMultilineLabelViewValue:(id)arg1 usingItemInfo:(id)arg2 ;
-(id)multilineLabelView:(id)arg1 ;
-(id)editTextView:(id)arg1 ;
-(id)wholeCellButtonView:(id)arg1 ;
-(id)switchView:(id)arg1 ;
-(id)activityView:(id)arg1 ;
-(id)buttonView:(id)arg1 ;
-(id)segmentedControlView:(id)arg1 ;
-(id)progressView:(id)arg1 ;
-(id)datePicker:(id)arg1 ;
-(id)unreadBubbleCount:(id)arg1 ;
@end

