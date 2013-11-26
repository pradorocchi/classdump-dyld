/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageRep.h>
#import <iWorkImport/TSDMasterDrawableDelegate.h>

@class CALayer, TPMarginAdjustRep;

@interface TPPaginatedPageRep : TPPageRep <TSDMasterDrawableDelegate> {

	CALayer* _separatorLayer;

}

@property (nonatomic,readonly) TPMarginAdjustRep * marginAdjustRep; 
-(void)willBeRemoved;
-(void)didUpdateLayer:(id)arg1 ;
-(void)viewScaleDidChange;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)updateFromLayout;
-(id)childRepsForHitTesting;
-(id)hitRep:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)visibleChildLayouts;
-(id)headerFooterRep:(int)arg1 atIndex:(int)arg2 ;
-(void)p_updateSeparatorLayer;
-(BOOL)p_pageRequiresSeparator;
-(void)p_updateBorderLayers;
-(void)p_updateLayoutBordersVisibility;
-(id)p_topmostEditingInfo;
-(void)p_updateHeaderFooterRepClipping:(int)arg1 ;
-(BOOL)childRepIsOnDocSetupCanvas:(id)arg1 ;
-(BOOL)childRepIsMasterDrawable:(id)arg1 ;
-(id)marginAdjustRep;
-(id)headerFooterRepForStorage:(id)arg1 ;
-(id)hitMasterRep:(CGPoint)arg1 ;
-(void)showHUDForWPRep:(id)arg1 withFlags:(unsigned)arg2 ;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(float)p_headerFooterBorderWidth;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1 ;
-(void)dealloc;
@end

