/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class NSMutableArray, OADRelativeRect, OADShade;

@interface OADGradientFill : OADFill {

	NSMutableArray* mStops;
	BOOL mAreStopsOverridden;
	OADRelativeRect* mTileRect;
	BOOL mIsTileRectOverridden;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADShade* mShade;
	BOOL mIsShadeOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)stopCount;
-(id)stopColorAtIndex:(unsigned)arg1 ;
-(id)shade;
-(void)setStops:(id)arg1 ;
-(id)stops;
-(void)setShade:(id)arg1 ;
-(float)stopPositionAtIndex:(unsigned)arg1 ;
-(void)addStopColor:(id)arg1 position:(float)arg2 ;
-(void)clearStops;
-(id)initWithDefaults;
-(void)setStyleColor:(id)arg1 ;
-(void)setTileRect:(id)arg1 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(BOOL)areStopsOverridden;
-(BOOL)isTileRectOverridden;
-(BOOL)isFlipModeOverridden;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isShadeOverridden;
-(id)tileRect;
-(int)flipMode;
-(BOOL)rotateWithShape;
-(void)setParent:(id)arg1 ;
@end

