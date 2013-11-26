/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCH3DMaterialPackage, TSCH3DLightingPackage, TSCH3DEnvironmentPackage;

@interface TSCH3DLightingModel : NSObject <NSCopying> {

	TSCH3DMaterialPackage* mMaterials;
	TSCH3DLightingPackage* mLightings;
	TSCH3DEnvironmentPackage* mEnvironment;

}

@property (nonatomic,retain) TSCH3DMaterialPackage * materials; 
@property (nonatomic,retain) TSCH3DLightingPackage * lightings; 
@property (nonatomic,retain) TSCH3DEnvironmentPackage * environment; 
+(id)instanceWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
+(id)lightingModel;
-(void)saveToArchive:(Chart3DLightingModelArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
-(id)clone;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(id)diffuseTextureTiling;
-(void)setLightings:(id)arg1 ;
-(id)lightingModelWithLightings:(id)arg1 ;
-(id)representativeMaterialLightenedByPercentage:(id)arg1 ;
-(id)materials;
-(void)setMaterials:(id)arg1 ;
-(id)lightings;
-(void)setEnvironment:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)environment;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

