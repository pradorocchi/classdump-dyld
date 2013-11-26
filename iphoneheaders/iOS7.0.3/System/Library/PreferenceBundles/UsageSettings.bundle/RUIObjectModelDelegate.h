/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RUIObjectModelDelegate <NSObject>
@optional
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
-(BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3;
-(void)objectModelDidChange:(id)arg1;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
-(BOOL)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withName:(id)arg5;
-(BOOL)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6;
-(id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;
-(id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;
-(void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;
-(Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;
-(Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;
-(Class)objectModel:(id)arg1 customTableCellClassForTableViewRow:(id)arg2;

@required
-(id)parentViewControllerForObjectModel:(id)arg1;
-(void)objectModelPressedBack:(id)arg1;
@end

