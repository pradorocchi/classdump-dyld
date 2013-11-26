/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@class NSArray, TSCH3DTexturePool;

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect {

	NSArray* mMaterials;
	TSCH3DTexturePool* mPool;

}
+(Class)stateClass;
+(id)effectWithMaterials:(id)arg1 pool:(id)arg2 ;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)updateState:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)initWithMaterials:(id)arg1 pool:(id)arg2 ;
-(const array<<anonymous>::TextureVariables, 2>*)textureVariablesArray;
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
@end

