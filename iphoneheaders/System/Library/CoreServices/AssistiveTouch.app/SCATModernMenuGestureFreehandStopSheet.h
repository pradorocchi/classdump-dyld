/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGestureFreehandSheetBase.h>

@class NSString;

@interface SCATModernMenuGestureFreehandStopSheet : SCATModernMenuGestureFreehandSheetBase {

	NSString* _actionToStop;

}

@property (nonatomic,copy) NSString * actionToStop;              //@synthesize actionToStop=_actionToStop - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)actionToStop;
-(BOOL)allowsBackAction;
-(BOOL)allowsExitAction;
-(void)setActionToStop:(id)arg1 ;
-(void)dealloc;
@end
