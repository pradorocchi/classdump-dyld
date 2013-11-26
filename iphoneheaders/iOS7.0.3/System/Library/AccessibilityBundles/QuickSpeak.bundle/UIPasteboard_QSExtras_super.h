/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAXSafeCategoryBundle.dylib/UIAccessibilitySafeCategory.h>

@interface UIPasteboard_QSExtras_super : UIAccessibilitySafeCategory
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryValidationMethod;
+(id)pasteboardWithUniqueName;
+(id)pasteboardWithName:(id)arg1 create:(BOOL)arg2 ;
+(id)generalPasteboard;
+(void)_initializeSafeCategory;
-(id)colors;
-(id)URLs;
-(id)strings;
-(void)addItems:(id)arg1 ;
-(id)itemSetWithPasteboardTypes:(id)arg1 ;
-(void)setValue:(id)arg1 forPasteboardType:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 ;
-(BOOL)containsPasteboardTypes:(id)arg1 ;
-(id)pasteboardTypes;
-(id)pasteboardTypesForItemSet:(id)arg1 ;
-(void)setData:(id)arg1 forPasteboardType:(id)arg2 ;
-(BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2 ;
-(id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(id)valueForPasteboardType:(id)arg1 ;
-(id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2 ;
-(int)numberOfItems;
-(int)changeCount;
-(id)color;
-(id)URL;
-(void)setItems:(id)arg1 ;
-(id)items;
-(id)image;
-(id)images;
-(id)string;
@end

