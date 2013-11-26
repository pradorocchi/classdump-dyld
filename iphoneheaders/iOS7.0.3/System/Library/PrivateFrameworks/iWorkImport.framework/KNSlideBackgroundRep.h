/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* mBlackBackgroundLayer;
	BOOL mLayerNeedsUpdate;
	BOOL mFillCanApplyToCALayer;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)didUpdateLayer:(id)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(id)textureForContext:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(id)additionalLayersUnderLayer;
-(BOOL)wantsToDistortWithImagerContext;
-(id)slideBackgroundInfo;
-(void)dealloc;
-(BOOL)isOpaque;
-(BOOL)isSelectable;
-(void)drawInContext:(CGContextRef)arg1 ;
-(int)tilingMode;
@end

