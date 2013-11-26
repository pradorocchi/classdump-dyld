/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@protocol OAXClient
@required
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)arg1;
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3;
-(void)readClientDataFromGroupNode:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3;
-(id)readClientTextField:(xmlNode*)arg1 paragraph:(id)arg2 state:(id)arg3;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2;
@end


@interface OAXClient : NSObject <OAXClient>
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)arg1 ;
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromGraphicDataNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2 ;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromShapeNode:(xmlNode*)arg1 toShape:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromPictureNode:(xmlNode*)arg1 toImage:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromGroupNode:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
-(void)readClientDataFromGraphicalFramePropertiesNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(id)readClientTextField:(xmlNode*)arg1 paragraph:(id)arg2 state:(id)arg3 ;
-(void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3 ;
-(id)readOle:(xmlNode*)arg1 state:(id)arg2 ;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2 ;
@end

