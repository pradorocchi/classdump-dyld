/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface VGLResourceFactory : NSObject {

	recursive_mutex _mutex;
	NSMutableSet* _activeResources;
	NSMutableArray* _unusedResources;
	NSMutableDictionary* _programFactories;
	NSMutableDictionary* _shaderCache;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(id)vertexShaderWithName:(id)arg1 ;
-(id)fragmentShaderWithName:(id)arg1 ;
-(id)newResourceWithType:(int)arg1 count:(int)arg2 ;
-(void)deleteUnusedResources;
-(id)programFactoryWithCohort:(id)arg1 ;
-(void)moveUnusedResourceImpl:(id)arg1 ;
-(void)deleteActiveResources;
-(void).cxx_destruct;
@end

