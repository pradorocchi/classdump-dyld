/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_semaphore;
@class VKWorld, NSMutableArray, NSObject, NSArray;

@interface VKModelObject : NSObject {

	VKWorld* _world;
	VKModelObject* _supermodel;
	NSMutableArray* _submodels;
	NSMutableArray* _drawPasses;
	BOOL _active;
	unsigned _needsLayout;
	unsigned _needsDisplay;
	NSObject<OS_dispatch_semaphore>* _drawReady;

}

@property (assign,nonatomic) VKWorld * world;                           //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) NSArray * submodels;                     //@synthesize submodels=_submodels - In the implementation block
@property (nonatomic,readonly) VKModelObject * supermodel;              //@synthesize supermodel=_supermodel - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;               //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(id)init;
-(BOOL)isActive;
-(void)didReceiveMemoryWarning;
-(void)setActive:(BOOL)arg1 ;
-(void)runAnimation:(id)arg1 ;
-(void)addSubmodel:(id)arg1 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)setWorld:(id)arg1 ;
-(void)willMoveToSupermodel:(id)arg1 ;
-(void)didMoveToSupermodel;
-(id)supermodel;
-(void)setSupermodel:(id)arg1 ;
-(unsigned)supportedRenderPasses;
-(void)_removeSubmodel:(id)arg1 ;
-(void)removeSubmodel:(id)arg1 ;
-(void)layoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 ;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)recursiveDrawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)recursiveDrawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)layoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 queue:(id)arg3 ;
-(void)recursiveDrawScene:(id)arg1 whenReadyWithContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)removeFromSupermodel;
-(id)world;
-(id)submodels;
@end

