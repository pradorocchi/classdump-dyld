/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartTitleSceneObject.h>

@interface TSCH3DChartMainTitleSceneObject : TSCH3DChartTitleSceneObject
+(unsigned)styleIndexForInfo:(id)arg1 ;
+(id)paragraphStyleForTitleFontForInfo:(id)arg1 ;
-(int)labelType;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2 ;
-(BOOL)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(BOOL)enabledForInfo:(id)arg1 ;
-(LabelTransform)labelTransformForPositioner:(id)arg1 ;
-(id)textForInfo:(id)arg1 ;
-(BOOL)isAnnotated;
@end

