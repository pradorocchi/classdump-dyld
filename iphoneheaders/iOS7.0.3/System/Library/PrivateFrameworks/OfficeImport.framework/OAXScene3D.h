/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXScene3D : NSObject
+(id)readScene3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 ;
+(id)cameraTypeEnumMap;
+(id)lightRigTypeEnumMap;
+(id)lightRigDirectionEnumMap;
+(id)readCameraFromXmlNode:(xmlNode*)arg1 ;
+(id)readLightRigFromXmlNode:(xmlNode*)arg1 ;
+(id)readBackdropFromXmlNode:(xmlNode*)arg1 ;
@end

