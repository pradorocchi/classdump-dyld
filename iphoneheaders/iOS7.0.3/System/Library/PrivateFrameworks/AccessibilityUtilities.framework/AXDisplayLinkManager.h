/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {

	BOOL _hasUpdatedTargetActions;
	BOOL _handlingDisplayRefresh;
	CADisplayLink* _storedDisplayLink;
	NSMutableSet* _activeTargetActions;
	NSMutableSet* _updatedTargetActions;
	unsigned _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) unsigned frameInterval; 
@property (nonatomic,retain) CADisplayLink * displayLink; 
@property (nonatomic,retain) CADisplayLink * storedDisplayLink;                                        //@synthesize storedDisplayLink=_storedDisplayLink - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTargetActions;                                       //@synthesize activeTargetActions=_activeTargetActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedTargetActions;                                      //@synthesize updatedTargetActions=_updatedTargetActions - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedTargetActions;                                             //@synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions - In the implementation block
@property (assign,getter=isHandlingDisplayRefresh,nonatomic) BOOL handlingDisplayRefresh;              //@synthesize handlingDisplayRefresh=_handlingDisplayRefresh - In the implementation block
@property (assign,nonatomic) unsigned warmUpModeRequirementsCount;                                     //@synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount - In the implementation block
@property (getter=isWarmUpModeEnabled,nonatomic,readonly) BOOL warmUpModeEnabled; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(double)duration;
-(unsigned)frameInterval;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(void)setActiveTargetActions:(id)arg1 ;
-(void)setUpdatedTargetActions:(id)arg1 ;
-(id)storedDisplayLink;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)setStoredDisplayLink:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned)arg3 ;
-(BOOL)isHandlingDisplayRefresh;
-(id)_prepareUpdatedTargetActionsForModification;
-(id)activeTargetActions;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(id)updatedTargetActions;
-(BOOL)hasUpdatedTargetActions;
-(void)setHasUpdatedTargetActions:(BOOL)arg1 ;
-(BOOL)isWarmUpModeEnabled;
-(unsigned)warmUpModeRequirementsCount;
-(void)setWarmUpModeRequirementsCount:(unsigned)arg1 ;
-(void)setHandlingDisplayRefresh:(BOOL)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
@end

