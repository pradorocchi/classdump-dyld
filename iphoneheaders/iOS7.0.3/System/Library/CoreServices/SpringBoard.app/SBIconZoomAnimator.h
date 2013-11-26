/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBIconAnimator.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMapTable, NSSet, SBIconListModel, SBIconListView, SBIconZoomSettings;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {

	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;

}

@property (nonatomic,retain) SBIconZoomSettings * settings; 
@property (nonatomic,readonly) SBIconListView * iconListView;                  //@synthesize iconListView=_iconListView - In the implementation block
@property (nonatomic,readonly) SBIconListView * dockListView;                  //@synthesize dockListView=_dockListView - In the implementation block
@property (nonatomic,retain) NSSet * criticalIconNodeIdentifiers;              //@synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers - In the implementation block
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)dockListView;
-(id)initWithFolderController:(id)arg1 ;
-(void)setCriticalIconNodeIdentifiers:(id)arg1 ;
-(void)enumerateIconsAndIconViewsWithHandler:(/*^block*/ id)arg1 ;
-(id)iconListView;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_iconModelDidRelayout;
-(void)_iconModelDidReload;
-(void)_clearObservers;
-(void)_setIconListView:(id)arg1 ;
-(void)_setDockListView:(id)arg1 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1 ;
-(unsigned)listIconCount;
-(unsigned)dockIconCount;
-(id)criticalIconNodeIdentifiers;
-(id)iconViewForIcon:(id)arg1 ;
-(void)dealloc;
@end

