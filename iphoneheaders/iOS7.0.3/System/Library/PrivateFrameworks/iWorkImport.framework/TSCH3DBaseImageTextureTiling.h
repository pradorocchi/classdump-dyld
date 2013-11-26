/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTextureTiling.h>

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {

	tvec2<float> mScale;
	float mRotation;

}

@property (assign,nonatomic) tvec2<float> scale; 
@property (assign,nonatomic) float rotation; 
+(id)instanceWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DBaseImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)restoreDefault;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(tvec2<float>)scale;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setScale:(tvec2<float>)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id).cxx_construct;
@end

