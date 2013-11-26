/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DOrderedDictionary;

@interface TSCH3DGeometryElementArrays : NSObject {

	TSCH3DOrderedDictionary* mArrays;
	unsigned mVertexCount;
	BOOL mBackfacesCulled;

}

@property (nonatomic,readonly) unsigned vertexCount; 
@property (nonatomic,readonly) BOOL backfacesCulled; 
+(id)arrays;
-(id)bufferForName:(id)arg1 ;
-(void)setBuffer:(id)arg1 forName:(id)arg2 ;
-(id)cullBackfacesWithTransform:(const tmat4x4<float>*)arg1 keepIndices:(id)arg2 ;
-(id)p_makeDictionary;
-(void)setElementsInFormat:(id)arg1 ;
-(BOOL)backfacesCulled;
-(void)dealloc;
-(id)init;
-(unsigned)vertexCount;
@end

