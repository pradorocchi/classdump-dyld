/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UITableViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(int)arg3;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(int)arg3;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2;
-(float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
-(int)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
@end

