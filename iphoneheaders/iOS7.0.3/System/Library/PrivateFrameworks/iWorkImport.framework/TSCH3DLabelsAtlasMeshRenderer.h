/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DLabelsMeshRenderer.h>

@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer {

	TSCH3DTextureAtlas* mAtlas;
	TSUNoCopyDictionary* mExternalAttributeVariables;

}
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(void)beginResources:(id)arg1 samples:(float)arg2 ;
-(void)submitResourcesWithProcessor:(id)arg1 ;
-(void)renderWithMeshRenderLabelInfo:(const LabelsMeshRendererLabelInfo*)arg1 ;
-(id)p_resourceAtIndex:(unsigned)arg1 childIndex:(unsigned)arg2 dimension:(unsigned)arg3 createIfAbsent:(BOOL)arg4 ;
-(unsigned)p_indexForExternalAttribute:(const ExternalLabelAttribute*)arg1 ;
-(unsigned)p_resourceCount;
-(id)p_vertexResourceAtIndex:(unsigned)arg1 createIfAbsent:(BOOL)arg2 ;
-(id)p_texcoordResourceAtIndex:(unsigned)arg1 createIfAbsent:(BOOL)arg2 ;
-(void)p_submitExternalAttributesForIndex:(unsigned)arg1 processor:(id)arg2 ;
-(id)p_resourceForExternalLabelAttribute:(const ExternalLabelAttribute*)arg1 index:(unsigned)arg2 createIfAbsent:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(void)flushCache;
@end

