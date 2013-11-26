/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VGLContext, VGLSharegroup, NSSet, NSString;

@interface VGLGPU : NSObject {

	VGLContext* _internalContext;
	VGLSharegroup* _sharegroup;
	int _kind;
	NSSet* _extensionNames;
	int _initializedCapabilities;
	int _maxTextureSize;
	int _maxDepthBufferPlanes;
	int _maxStencilBufferPlanes;
	int _maxVertexAttributes;
	int _maxUniformVertexVectors;
	int _maxUniformFragmentVectors;
	int _maxVaryingVectors;
	int _maxVertShaderTextureUnits;
	int _maxFragShaderTextureUnits;
	NSString* _rendererName;
	mutex _capabilitesLock;
	int _maxSamples;

}

@property (nonatomic,readonly) int kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) int maxTextureSize;                         //@synthesize maxTextureSize=_maxTextureSize - In the implementation block
@property (nonatomic,readonly) int maxDepthBufferPlanes;                   //@synthesize maxDepthBufferPlanes=_maxDepthBufferPlanes - In the implementation block
@property (nonatomic,readonly) int maxStencilBufferPlanes;                 //@synthesize maxStencilBufferPlanes=_maxStencilBufferPlanes - In the implementation block
@property (nonatomic,readonly) int maxVertexAttributes;                    //@synthesize maxVertexAttributes=_maxVertexAttributes - In the implementation block
@property (nonatomic,readonly) int maxUniformVertexVectors;                //@synthesize maxUniformVertexVectors=_maxUniformVertexVectors - In the implementation block
@property (nonatomic,readonly) int maxUniformFragmentVectors;              //@synthesize maxUniformFragmentVectors=_maxUniformFragmentVectors - In the implementation block
@property (nonatomic,readonly) int maxVaryingVectors;                      //@synthesize maxVaryingVectors=_maxVaryingVectors - In the implementation block
@property (nonatomic,readonly) int maxVertShaderTextureUnits;              //@synthesize maxVertShaderTextureUnits=_maxVertShaderTextureUnits - In the implementation block
@property (nonatomic,readonly) int maxFragShaderTextureUnits;              //@synthesize maxFragShaderTextureUnits=_maxFragShaderTextureUnits - In the implementation block
@property (nonatomic,readonly) int maxSamples;                             //@synthesize maxSamples=_maxSamples - In the implementation block
@property (nonatomic,readonly) NSString * rendererName;                    //@synthesize rendererName=_rendererName - In the implementation block
@property (nonatomic,readonly) NSSet * extensionNames;                     //@synthesize extensionNames=_extensionNames - In the implementation block
+(id)gpuForKind:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(int)kind;
-(id)initWithKind:(int)arg1 ;
-(id)newContext:(Class)arg1 ;
-(void)_initCapabilities;
-(int)maxTextureSize;
-(int)maxDepthBufferPlanes;
-(int)maxStencilBufferPlanes;
-(int)maxVertexAttributes;
-(int)maxUniformVertexVectors;
-(int)maxUniformFragmentVectors;
-(int)maxVaryingVectors;
-(int)maxVertShaderTextureUnits;
-(int)maxFragShaderTextureUnits;
-(int)maxSamples;
-(id)rendererName;
-(BOOL)platformSupports:(id)arg1 ;
-(id)extensionNames;
-(void).cxx_destruct;
@end

