/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, PSSpecifier, NSString;

@interface InternationalKeyboardController : PSListController {

	NSMutableArray* _keyboardsArray;
	PSSpecifier* _groupSeparator;
	PSSpecifier* _addNewInputModeSpecifier;
	NSString* _inputModeToAdd;
	unsigned _totalKeyboardsCount;
	unsigned _numberOfEnabledKeyboards;
	BOOL _needsReloadSpecifiers;
	BOOL deletingRow;

}

@property (nonatomic,readonly) NSMutableArray * keyboardsArray;              //@synthesize keyboardsArray=_keyboardsArray - In the implementation block
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addInputModes:(id)arg1 ;
-(bool)allKeyboardsEnabled;
-(void)_writeKeyboards;
-(void)_reorderLanguagesForEnabledKeyboards:(id)arg1 ;
-(id)normalizedIdentifierForInputMode:(id)arg1 ;
-(void)activateInputMode:(id)arg1 ;
-(id)keyboardsArray;
-(id)specifiers;
@end

