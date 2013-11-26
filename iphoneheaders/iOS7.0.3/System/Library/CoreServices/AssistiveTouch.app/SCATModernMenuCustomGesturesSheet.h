/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuCustomGestureItemsViewDelegate;
@class NSMutableArray, ;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase {

	NSMutableArray* _gestures;
	int _type;
	<SCATMenuCustomGestureItemsViewDelegate>* _delegate;

}

@property (assign,nonatomic) <SCATMenuCustomGestureItemsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int type;                                                       //@synthesize type=_type - In the implementation block
-(BOOL)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)backTitle;
-(id)initWithType:(int)arg1 menu:(id)arg2 ;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)_loadGestures;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)type;
@end

