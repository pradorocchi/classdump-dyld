/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, NSMutableArray, VKPGlobalProperties, VKGenericShieldDrawStyle;

@interface VKStylesheet : NSObject {

	NSString* _sheetName;
	float _scale;
	float _ppi;
	int _targetDisplay;
	NSMutableArray* _flatStyles;
	NSMutableArray* _inheritance;
	int _rasterPolygonChangeoverZ;
	VKPGlobalProperties* _styleGlobalProperties;
	int _mapDisplayStyle;
	int _mapDisplayStyleVariant;
	float _blendingFactor;
	unsigned _updateStamp;
	BOOL _nightStyleVariantsInitialized;
	BOOL _supportsNightMode;
	BOOL _canSelectIcons;
	VKGenericShieldDrawStyle* _defaultGenericShieldStyle;

}

@property (nonatomic,readonly) VKPGlobalProperties * styleGlobalProperties;                       //@synthesize styleGlobalProperties=_styleGlobalProperties - In the implementation block
@property (readonly) unsigned updateStamp;                                                        //@synthesize updateStamp=_updateStamp - In the implementation block
@property (assign,nonatomic) float blendingFactor;                                                //@synthesize blendingFactor=_blendingFactor - In the implementation block
@property (nonatomic,readonly) int mapDisplayStyle;                                               //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) int mapDisplayStyleVariant;                                          //@synthesize mapDisplayStyleVariant=_mapDisplayStyleVariant - In the implementation block
@property (nonatomic,readonly) int targetDisplay;                                                 //@synthesize targetDisplay=_targetDisplay - In the implementation block
@property (nonatomic,readonly) VKGenericShieldDrawStyle * defaultGenericShieldStyle; 
@property (assign,nonatomic) BOOL canSelectIcons;                                                 //@synthesize canSelectIcons=_canSelectIcons - In the implementation block
+(id)installedStylesheets;
+(id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(int)arg4 ;
+(void)_activeTileGroupWillChange;
-(oneway void)release;
-(void)dealloc;
-(id)init;
-(id)sheetName;
-(float)blendingFactor;
-(void)setBlendingFactor:(float)arg1 ;
-(int)targetDisplay;
-(BOOL)supportsMapDisplayStyle:(int)arg1 ;
-(int)mapDisplayStyle;
-(id)styleGlobalProperties;
-(void)prepareStyleVariantsForMapDisplayStyle:(int)arg1 ;
-(void)setMapDisplayStyleVariant:(int)arg1 ;
-(void)setCanSelectIcons:(BOOL)arg1 ;
-(int)mapDisplayStyleVariant;
-(id)styleForFeature:(SCD_Struct_VK62*)arg1 vectorType:(int)arg2 ;
-(id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(int)arg4 ;
-(id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4 targetDisplay:(int)arg5 ;
-(id)initWithScale:(float)arg1 ppi:(float)arg2 ;
-(int)rasterPolygonChangeoverZ;
-(id)_styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3 ;
-(float)_nightShieldBrightnessForVectorType:(int)arg1 ;
-(id)variantForStyle:(id)arg1 ;
-(id)styleForFeature:(SCD_Struct_VK62*)arg1 vectorType:(int)arg2 locale:(id)arg3 ;
-(float)shieldBrightnessForVectorType:(int)arg1 ;
-(float)shieldBrightnessForDisplayStyle:(int)arg1 ;
-(id)defaultGenericShieldStyle;
-(unsigned)updateStamp;
-(BOOL)canSelectIcons;
@end

