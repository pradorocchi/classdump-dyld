/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell;

@interface EKEventDeleteButtonEditItem : EKEventEditItem {

	UITableViewCell* _cell;
	id _deleteButtonTarget;
	SEL _deleteButtonAction;

}
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void).cxx_destruct;
@end

