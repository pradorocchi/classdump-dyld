/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {

	NSDictionary* _cuiInfo;
	CUIShapeEffectPreset* _effectPreset;
	CUIImage* _referenceImage;

}
-(void)dealloc;
-(id)effectPreset;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(int)arg3 ;
-(void)_initializeCoreUIOptions:(id)arg1 ;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)coreUIOptions;
-(id)referenceImage;
-(BOOL)_generateReferenceImage;
@end

